/*
*****************************************************************************
						  Workshop - #8 (P)
Full Name  : Varun Chhabra
Student ID#: 170279210
Email      : vchhabra1@myseneca.ca
Section    : NGG

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

// System Libraries
#include <stdio.h>

// User Libraries
#include "w8p2.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* num1)
{
	int flag = 1;
	int valuein;
	do {
		scanf("%d", &valuein);
		if (valuein > 0)
		{
			flag = 0;
		}
		else
		{
			printf("ERROR: Enter a positive value: ");
		}

	} while (flag != 0);
	if (num1 != NULL)
	{
		*num1 = valuein;
	}
	return valuein;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* num2)
{
	int flag = 1;
	double valuein;
	do {
		scanf("%lf", &valuein);
		if (valuein > 0.0)
		{
			flag = 0;
		}
		else
		{
			printf("ERROR: Enter a positive value: ");
		}

	} while (flag != 0);
	if (num2 != NULL)
	{
		*num2 = valuein;
	}
	return valuein;
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int num_product)
{
	printf("Cat Food Cost Analysis\n");
	printf("======================\n\n");
	printf("Enter the details for %d dry food bags of product data for analysis.\n", max_product);
	printf("NOTE: A 'serving' is %dg\n", grams_Per_serve);
}


// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int sequence_num)
{
	struct CatFoodInfo cat;
	int flag;
	printf("\nCat Food Product #%d\n", sequence_num);
	printf("--------------------\n");
	flag = 1;
	printf("SKU           : ");
	do {
		scanf("%d", &cat.sku);
		if (cat.sku <= 0)
			printf("ERROR: Enter a positive value: ");
		else
			flag = 0;
	} while (flag != 0);
	flag = 1;
	printf("PRICE         : $");
	do {
		scanf("%lf", &cat.price);
		if (cat.price <= 0)
			printf("ERROR: Enter a positive value: ");
		else
			flag = 0;
	} while (flag != 0);

	flag = 1;
	printf("WEIGHT (LBS)  : ");
	do {
		scanf("%lf", &cat.weight);
		if (cat.weight <= 0)
			printf("ERROR: Enter a positive value: ");
		else
			flag = 0;
	} while (flag != 0);

	flag = 1;
	printf("CALORIES/SERV.: ");
	do {
		scanf("%d", &cat.calories);
		if (cat.calories <= 0)
			printf("ERROR: Enter a positive value: ");
		else
			flag = 0;
	} while (flag != 0);
	return cat;
};

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(int sku, double* price, int calories, double* weight)
{
	printf("%07d %10.2lf %10.1lf %8d\n", sku, *price, *weight, calories);
}
 // PART-2
 // 8. convert lbs: kg (divide by 2.20462)
    double convertLbsKg(const double* lbs, double* final_result)
    {
        double kilogram;
        kilogram = *lbs / kg;
        if (final_result != NULL)
        {
            *final_result = kilogram;
        }
        return kilogram;
    }
    // 9. convert lbs: g (call convertKG, then * 1000)
    int convertLbsG(const double* lbs, int* final_result)
    {
        int gram;
        gram = (*lbs / kg) * 1000;
        if (final_result != NULL)
        {
            *final_result = gram;
        }
        return gram;
    }
    // 10. convert lbs: kg and g
    void convertLbs(const double* lbs, double* kg_result, int* gram_result)
    {
        double kilogram;
        kilogram = *lbs / kg;
        if (kg_result != NULL)
        {
            *kg_result = kilogram;
        }
        int gram;
        gram = (*lbs / kg) * 1000;
        if (gram_result != NULL)
        {
            *gram_result = gram;
        }
    }
    // 11. calculate: servings based on gPerServ
    double calculateServings(const double gram, const double total_grams, double* num2)
    {
        double totalserving;
        totalserving = total_grams / gram;
        if (num2 != NULL)
            *num2 = totalserving;
        return totalserving;
    }
    // 12. calculate: cost per serving
    double calculateCostPerServing(const double* price, const double* total_serving,
        double* num2)
    {
        double cost_serving;
        cost_serving = *price / *total_serving;
        if (num2 != NULL)
            *num2 = cost_serving;
        return cost_serving;
    }
    // 13. calculate: cost per calorie
    double calculateCostPerCal(const double* price, const int* calories, double* num2)
    {
        double cost_calorie = *price / *calories;
        if (num2 != NULL)
            *num2 = cost_calorie;
        return cost_calorie;
    }
    // 14. Derive a reporting detail record based on the cat food product data
    struct ReportData calculateReportData(const struct CatFoodInfo cats)
    {
        struct ReportData report = { 0 };
        report.sku = cats.sku;
        report.price = cats.price;
        report.calories = cats.calories;
        report.weight = cats.weight;
        report.kilogram = convertLbsKg(&cats.weight, &report.kilogram);
        report.gram = convertLbsG(&cats.weight, &report.gram);
        report.total_serving = calculateServings(grams_Per_serve, report.gram, &report.total_serving);
        report.cost_per_serving = calculateCostPerServing(&cats.price, &report.total_serving, &report.cost_per_serving);
        //double calculatecalorie;
        //calculatecalorie = report.totalserving * report.cost_serving;
        calculateCostPerCal(&cats.price, &cats.calories, &report.cost_per_calorie);
        report.cost_per_calorie /= report.total_serving;
        return report;
    }
    // 15. Display the formatted table header for the analysis results
    void displayReportHeader()
    {
        printf("\nAnalysis Report (Note: Serving = %dg)\n", grams_Per_serve);
        printf("---------------\n");
        printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");
        printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
    }
    // 16. Display the formatted data row in the analysis table
    void displayReportData(const struct ReportData report, const int cheapest)
    {
        if (cheapest != 0)
        {
            printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf ***\n", report.sku, report.price, report.weight, report.kilogram, report.gram, report.calories, report.total_serving, report.cost_per_serving, report.cost_per_calorie);
        }
        else
            printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf\n", report.sku, report.price, report.weight, report.kilogram, report.gram, report.calories, report.total_serving, report.cost_per_serving, report.cost_per_calorie);
    }
    // 17. Display the findings (cheapest)
    void displayFinalAnalysis(const struct CatFoodInfo cats)
    {
        printf("\n");
        printf("Final Analysis\n");
        printf("--------------\n");
        printf("Based on the comparison data, the PURRR-fect economical option is:\n");
        printf("SKU:%07d Price: $%.2lf\n\nHappy shopping!\n", cats.sku, cats.price);
    }
    // ----------------------------------------------------------------------------
    // 7. Logic entry point
    void start()
    {
        struct CatFoodInfo cats[max_product] = { {0} };
        struct ReportData report[max_product] = { {0} };
        openingMessage(max_product);
        int counter2;
        int index = 0;
        double cheapest = 1;
        for (counter2 = 0; counter2 < max_product; counter2++)
        {
            cats[counter2] = getCatFoodInfo(counter2 + 1);
        }
        printf("\n");
        displayCatFoodHeader();
        for (counter2 = 0; counter2 < max_product; counter2++)
        {
            displayCatFoodData(cats[counter2].sku, &cats[counter2].price, cats[counter2].calories,
                &cats[counter2].weight);
        }
        displayReportHeader();
        for (counter2 = 0; counter2 < max_product; counter2++)
        {
            report[counter2] = calculateReportData(cats[counter2]);
            if (report[counter2].cost_per_calorie < cheapest)
            {
                cheapest = report[counter2].cost_per_calorie;
                index = counter2;
            }
            report[2].cost_per_calorie += 0.000005;
        }
        for (counter2 = 0; counter2 < max_product; counter2++)
        {
            displayReportData(report[counter2], counter2 == index ? index + 1 : 0);
        }
        displayFinalAnalysis(cats[index]);
    }
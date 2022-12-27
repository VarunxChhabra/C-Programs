/*
*****************************************************************************
						  Workshop - #8 (P1)
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
#include "w8p1.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* num1)
{
	int flag = -1;
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
	int flag = -1;
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
	struct CatFoodInfo c1;
	int flag;
	printf("\nCat Food Product #%d\n", sequence_num);
	printf("--------------------\n");
	flag = 1;
	printf("SKU           : ");
	do {
		scanf("%d", &c1.sku);
		if (c1.sku <= 0)
			printf("ERROR: Enter a positive value: ");
		else
			flag = 0;
	} while (flag != 0);
	flag = 1;
	printf("PRICE         : $");
	do {
		scanf("%lf", &c1.price);
		if (c1.price <= 0)
			printf("ERROR: Enter a positive value: ");
		else
			flag = 0;
	} while (flag != 0);

	flag = 1;
	printf("WEIGHT (LBS)  : ");
	do {
		scanf("%lf", &c1.weight);
		if (c1.weight <= 0)
			printf("ERROR: Enter a positive value: ");
		else
			flag = 0;
	} while (flag != 0);

	flag = 1;
	printf("CALORIES/SERV.: ");
	do {
		scanf("%d", &c1.calories);
		if (c1.calories <= 0)
			printf("ERROR: Enter a positive value: ");
		else
			flag = 0;
	} while (flag != 0);
	return c1;
};

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("\nSKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(int sku, double* price, int calories, double* weight)
{
	printf("%07d %10.2lf %10.1lf %8d\n", sku, *price, *weight, calories);
}

// 7. Logic entry point
void start()
{
	int counter;
	struct CatFoodInfo c1[max_product] = { { 0 } };
	openingMessage(max_product);
	for (counter = 0; counter < max_product; counter++)
	{
		c1[counter] = getCatFoodInfo(counter + 1);
	}
	displayCatFoodHeader();
	for (counter = 0; counter < max_product; counter++)
	{
		displayCatFoodData(c1[counter].sku, &c1[counter].price, c1[counter].calories, &c1[counter].weight);
	}
}
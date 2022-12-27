/*
*****************************************************************************
                     Workshop - #2 (Part - 1)
    Full Name   :Varun Chhabra	
    Student ID# :170279210
	Email       :vchhabra1@myseneca.ca
	Section     :NGG
	Authenticity Declaration :
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider.This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	printf("Set Shirt Prices\n================");
	double Small_Shirt, Medium_Shirt, Large_Shirt; // defining variables for size of the shirt 
	const double TAX = 0.13; // constant tax
	const char patSize = 'S'; // constant size S

	printf("\nEnter the price for a SMALL shirt: $");
	scanf("%lf", &Small_Shirt); //Taking user input for the price of small shirt
	printf("Enter the price for a MEDIUM shirt: $");
	scanf("%lf", &Medium_Shirt); //Taking user input for the price of medium shirt
	printf("Enter the price for a LARGE shirt: $");
	scanf("%lf", &Large_Shirt); //Taking user input for the price of large shirt

//displaying output of entered prices

	printf("\nShirt Store Price List\n======================\n");
	printf("SMALL  : $%.2lf\n", Small_Shirt); 
	printf("MEDIUM : $%.2lf\n", Medium_Shirt);
	printf("LARGE  : $%.2lf\n", Large_Shirt);
	
	// declaring the size of patty
	
	printf("\nPatty's shirt size is '%c'\n", patSize);
	int no_of_shirts; //declaring variable for no. of shirts
	printf("Number of shirts Patty is buying: ");
	scanf("%d", &no_of_shirts); //taking input from user of no. of shirts

	//billing part

	int sub_total = (Small_Shirt * no_of_shirts*100); // declaring variable for total excludes taxes
	int taxes = (TAX * sub_total) + .5;               // declaring variable include taxes
	int Total = taxes + sub_total;                    // declaring variables contain total amount with taxes
	printf("\nPatty's shopping cart...");
	printf("\nContains : %d shirts", no_of_shirts); //displaying the output of no. shirts
	printf("\nSub-total: $%.4lf", (double)sub_total/100); // displaying the amount exclude of taxes
	printf("\nTaxes    : $ %.4lf", (double)taxes/100); // displaying the amount with taxes
	printf("\nTotal    : $%.4lf\n", (double)Total/100);
	return 0;
}
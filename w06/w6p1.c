/*
*****************************************************************************
                          Workshop - #6 (P1)
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

#include <stdio.h>
#define  max_no_of_items 10

int main(void)
{
    double const  max_income = 400000;
    double const  min_income = 500;
    double net_income,total_cost = 0;
    int list_items,priority[max_no_of_items];
    int flag = 0,counter=0;
    double item_cost[max_no_of_items];
    int item_no[max_no_of_items];
    char financing_option[max_no_of_items];

    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n\n");
    
    do {
        printf("Enter your monthly NET income: $");
        scanf("%lf", &net_income);
        if (net_income < min_income)
        {
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n\n");
        }
        else if (net_income > max_income)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n\n");
        }
    } while (net_income < min_income || net_income > max_income);

// forecast
    do {
        printf("\nHow many wish list items do you want to forecast?: ");
        scanf("%d", &list_items);
        if ((list_items > max_no_of_items) || (list_items <= 0))
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n"); 
        }
        else
        {
            flag = 1;
        }
    } while (flag == 0);

// Items details

    for (counter = 0; counter < list_items; counter++)
    {
        
            item_no[counter] = counter + 1;
        printf("\nItem-%d Details:\n", item_no[counter]);
        do {
            printf("   Item cost: $");
            scanf("%lf", &item_cost[counter]);
            if (item_cost[counter] < 100)
            {
                printf("      ERROR: Cost must be at least $100.00\n");
            }
        } while (item_cost[counter] < 100);
        total_cost += item_cost[counter];

// priority

        do {
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &priority[counter]);
            if ((priority[counter] > 3) || (priority[counter] <= 0))
            {
                printf("      ERROR: Value must be between 1 and 3\n");
            }
        } while ((priority[counter] > 3) || (priority[counter] <= 0));

// finacing_options

        do {
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c", &financing_option[counter]);
            if (financing_option[counter] != 'y' && financing_option[counter] != 'n')
            {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            }
        } while (financing_option[counter] != 'y' && financing_option[counter] != 'n');
// main loop ending

    }
        printf("\nItem Priority Financed        Cost\n");
        printf("---- -------- -------- -----------\n");
        for (counter = 0; counter < list_items; counter++)
        {
            printf("  %d      %d        %c    %11.2lf\n", item_no[counter], priority[counter], financing_option[counter], item_cost[counter]);
        }
        printf("---- -------- -------- -----------\n");
        printf("                      $ %.2lf", total_cost);
        printf("\n\nBest of luck in all your future endeavours!\n");
    return 0;
}
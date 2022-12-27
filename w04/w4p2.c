/*
*****************************************************************************
                          Workshop - #4 (P2)
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

int main(void)
{
    int number_of_apples, number_of_oranges, number_of_pears, number_of_tomatoes, number_of_cabbages;
    int entered_pears, entered_apples, entered_oranges, entered_tomatoes, entered_cabbages, again_shopping;
    // number of Apples
    do
    {
        printf("Grocery Shopping\n================\n");
        do {
            printf("How many APPLES do you need? : ");
            scanf("%d", &number_of_apples);
            if (number_of_apples < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
            else
                printf("\n");
        } while (number_of_apples < 0);

        // number of oranges

        do {
            printf("How many ORANGES do you need? : ");
            scanf("%d", &number_of_oranges);
            if (number_of_oranges < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
            else
                printf("\n");
        } while (number_of_oranges < 0);

        // number of Pears

        do {
            printf("How many PEARS do you need? : ");
            scanf("%d", &number_of_pears);
            if (number_of_pears < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
            else
                printf("\n");
        } while (number_of_pears < 0);

        // number of Tomatoes

        do {
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &number_of_tomatoes);
            if (number_of_tomatoes < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
            else
                printf("\n");
        } while (number_of_tomatoes < 0);

        // number of Cabbages

        do {
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &number_of_cabbages);
            if (number_of_cabbages < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
            else
                printf("\n");
        } while (number_of_cabbages < 0);

        // end of entries
        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n\n");

        // loop begins for  apples
        if (number_of_apples != 0)
        {
            do {
                printf("Pick some APPLES... how many did you pick? : ");
                scanf("%d", &entered_apples);

                if (entered_apples > number_of_apples)
                {
                    printf("You picked too many... only %d more APPLE(S) are needed.\n", number_of_apples);
                }
                else if ((entered_apples < 0) || (entered_apples == 0))
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (entered_apples < number_of_apples)
                {
                    printf("Looks like we still need some APPLES...\n");
                    number_of_apples -= entered_apples;
                }
                else if (entered_apples == number_of_apples)
                {
                    printf("Great, that's the apples done!\n\n");
                    number_of_apples -= entered_apples;
                }
                else
                {

                }
            } while (number_of_apples != 0);
        }
        // loop begins for oranges
        if (number_of_oranges != 0)
        {
            do {
                printf("Pick some ORANGES... how many did you pick? : ");
                scanf("%d", &entered_oranges);

                if (entered_oranges > number_of_oranges)
                {
                    printf("You picked too many... only %d more ORANGE(S) are needed.\n", number_of_oranges);
                }
                else if ((entered_oranges < 0) || (entered_oranges == 0))
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (entered_oranges < number_of_oranges)
                {
                    printf("Looks like we still need some ORANGES...\n");
                    number_of_oranges -= entered_oranges;
                }
                else if (entered_oranges == number_of_oranges)
                {
                    printf("Great, that's the oranges done!\n\n");
                    number_of_oranges -= entered_oranges;
                }
                else
                {
                }
            } while (number_of_oranges != 0);
        }
        // loop begins for Pears
        if (number_of_pears != 0)
        {
            do {
                printf("Pick some PEARS... how many did you pick? : ");
                scanf("%d", &entered_pears);

                if (entered_pears > number_of_pears)
                {
                    printf("You picked too many... only %d more PEAR(S) are needed.\n", number_of_pears);
                }
                else if ((entered_pears < 0) || (entered_pears == 0))
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (entered_pears < number_of_pears)
                {

                    printf("Looks like we still need some PEARS...\n");
                    number_of_pears -= entered_pears;
                }
                else if (entered_pears == number_of_pears)
                {
                    printf("Great, that's the pears done!\n\n");
                    number_of_pears -= entered_pears;
                }
                else
                {

                }
            } while (number_of_pears != 0);
        }
        // loop begins for Tomotoes
        if (number_of_tomatoes != 0)
        {
            do {
                printf("Pick some TOMATOES... how many did you pick? : ");
                scanf("%d", &entered_tomatoes);

                if (entered_tomatoes > number_of_tomatoes)
                {
                    printf("You picked too many... only %d more TOMATO(ES) are needed.\n", number_of_tomatoes);
                }
                else if ((entered_tomatoes < 0) || (entered_tomatoes == 0))
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (entered_tomatoes < number_of_tomatoes)
                {

                    printf("Looks like we still need some TOMATOES...\n");
                    number_of_tomatoes -= entered_tomatoes;
                }
                else if (entered_tomatoes == number_of_tomatoes)
                {
                    printf("Great, that's the tomatoes done!\n\n");
                    number_of_tomatoes -= entered_tomatoes;
                }
                else
                {

                }
            } while (number_of_tomatoes != 0);
        }
        // loop begins for Cabbages
        if (number_of_cabbages != 0)
        {
            do {
                printf("Pick some CABBAGES... how many did you pick? : ");
                scanf("%d", &entered_cabbages);

                if (entered_cabbages > number_of_cabbages)
                {
                    printf("You picked too many... only %d more CABBAGE(S) are needed.\n", number_of_cabbages);
                }
                else if ((entered_cabbages < 0) || (entered_cabbages == 0))
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (entered_cabbages < number_of_cabbages)
                {

                    printf("Looks like we still need some CABBAGES...\n");
                    number_of_cabbages -= entered_cabbages;
                }
                else if (entered_cabbages == number_of_cabbages)
                {
                    printf("Great, that's the cabbages done!\n\n");
                    number_of_cabbages -= entered_cabbages;
                }
                else
                {

                }
            } while (number_of_cabbages != 0);
        }
        printf("All the items are picked!\n");
        printf("\nDo another shopping? (0=NO): ");
        scanf("%d", &again_shopping);
        printf("\n");
    } while (again_shopping != 0);
        printf("Your tasks are done for today - enjoy your free time!\n\n");
        return 0;
    }
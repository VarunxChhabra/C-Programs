/*
*****************************************************************************
                          Workshop - #5 (P2)
Full Name  : Varun Chhabra
Student ID#:
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
#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3

int main(void)
{
    const int JAN = 1;
    const int DEC = 12;
    int year, month, flag = 1, counter;
    double morning_ratings[LOG_DAYS];
    double evening_ratings[LOG_DAYS];
    double total_morning_rating = 0, total_evening_rating = 0;

    printf("General Well-being Log\n======================\n");
    do {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);

        if ((year < MIN_YEAR) || (year > MAX_YEAR))
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");

        }
        if ((month < JAN) || (month > DEC))
        {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }
        if ((year >= MIN_YEAR && year <= MAX_YEAR) && (month >= JAN && month <= DEC))
        {
            flag = 0;
        }

    } while(flag != 0);
    printf("\n*** Log date set! ***\n");

    // part 2 started 

    for (counter = 0; counter < LOG_DAYS; counter++)
    {
            printf("\n%d-", year);
            if (month == 1)
            {
                printf("JAN");
            }
            else if (month == 2)
            {
                printf("FEB");
            }
            else if (month == 3)
            {
                printf("MAR");
            }
            else if (month == 4)
            {
                printf("JUN");
            }
            else if (month == 5)
            {
                printf("MAY");
            }
            else if (month == 6)
            {
                printf("JUN");
            }
            else if (month == 7)
            {
                printf("JUL");
            }
            else if (month == 8)
            {
                printf("AUG");
            }
            else if (month == 9)
            {
                printf("SEP");
            }
            else if (month == 10)
            {
                printf("OCT");
            }
            else if (month == 11)
            {
                printf("NOV");
            }
            else if (month == 12)
            {
                printf("DEC");
            }
            printf("-0%d\n", counter+1);
// Array 1
        do {
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morning_ratings[counter]);
                if ((morning_ratings[counter] < 0.0) || (morning_ratings[counter] > 5.0))
                {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                }
                /*printf("\nThe value of item no. is %d and array is %lf", i, morning_ratings[i]);*/
            } while ((morning_ratings[counter] < 0.0) || (morning_ratings[counter] > 5.0));
            total_morning_rating += morning_ratings[counter];
// Array 2
            do {
                printf("   Evening rating (0.0-5.0): ");
                scanf("%lf", &evening_ratings[counter]);
                // ARRAY
                if ((evening_ratings[counter] < 0.0) || (evening_ratings[counter] > 5.0))
                {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                }
                
                /*printf("\nThe value of item no. is %d and array is %lf", i, evening_ratings[i]);*/
            } while ((evening_ratings[counter] < 0.0) || (evening_ratings[counter] > 5.0));
            total_evening_rating += evening_ratings[counter];
    }
    printf("\nSummary\n=======");
    printf("\nMorning total rating: %.3lf", total_morning_rating);
    printf("\nEvening total rating:  %.3lf", total_evening_rating);
    printf("\n----------------------------");
    printf("\nOverall total rating: %.3lf\n", (total_evening_rating + total_morning_rating));
    printf("\nAverage morning rating:  %.1lf", total_morning_rating / 3);
    printf("\nAverage evening rating:  %.1lf", total_evening_rating / 3);
    printf("\n----------------------------");
    printf("\nAverage overall rating:  %.1lf\n", (total_evening_rating + total_morning_rating) / 6);

    return 0;
}
   
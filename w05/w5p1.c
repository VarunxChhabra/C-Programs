/*
*****************************************************************************
                          Workshop - #5 (P1)
Full Name   : Varun Chhabra
Student ID# : 170279210
Email       : vchhabra1@myseneca.ca
Section     : NGG

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

int main(void)
{
    const int JAN = 1;
    const int DEC = 12;
    int year, month, flag = 0;
    printf("General Well-being Log\n======================\n");
    do {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);
        if ((year < MIN_YEAR) || (year > MAX_YEAR))
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");

        }
        //(year >= MIN_YEAR && year <= MAX_YEAR) &&
        if ((month > 0 && month <= 12) && (year >= MIN_YEAR && year <= MAX_YEAR))
        {
            switch (month)
            {
            case 1:
                if (month == 1) {
                    printf("\n*** Log date set! ***\n");
                    printf("\nLog starting date: %d-JAN-01\n", year);
                    flag = 1;
                }
            case 2:
                if (month == 2) {
                    printf("\n*** Log date set! ***\n");
                    printf("\nLog starting date: %d-FEB-01\n", year);
                    flag = 1;
                }
            case 3:
                if (month == 3) {
                    printf("\n*** Log date set! ***\n");
                    printf("\nLog starting date: %d-MAR-01\n", year);
                    flag = 1;
                }
            case 4:
                if (month == 4) {
                    printf("\n*** Log date set! ***\n");
                    printf("\nLog starting date: %d-APR-01\n", year);
                    flag = 1;
                }
            case 5:
                if (month == 5) {
                    printf("\n*** Log date set! ***\n");
                    printf("\nLog starting date: %d-MAY-01\n", year);
                    flag = 1;
                }
            case 6:
                if (month == 6) {
                    printf("\n*** Log date set! ***\n");
                    printf("\nLog starting date: %d-JUN-01\n", year);
                    flag = 1;
                }
            case 7:
                if (month == 7)
                {
                    printf("\n*** Log date set! ***\n");
                    printf("\nLog starting date: %d-JUL-01\n", year);
                    flag = 1;
                }
            case 8:
                if (month == 8) {
                    printf("\n*** Log date set! ***\n");
                    printf("\nLog starting date: %d-AUG-01\n", year);
                    flag = 1;
                }
            case 9:
                if (month == 9) {
                    printf("\n*** Log date set! ***\n");
                    printf("\nLog starting date: %d-SEP-01\n", year);
                    flag = 1;
                }
            case 10:
                if (month == 10) {
                    printf("\n*** Log date set! ***\n");
                    printf("\nLog starting date: %d-OCT-01\n", year);
                    flag = 1;
                }
            case 11:
                if (month == 11)
                {
                    printf("\n*** Log date set! ***\n");
                    printf("\nLog starting date: %d-NOV-01\n", year);
                    flag = 1;
                }
            case 12:
                if (month == 12)
                {
                    printf("\n*** Log date set! ***\n");
                    printf("\nLog starting date: %d-DEC-01\n", year);
                    flag = 1;
                }
                break;
            default:
                printf("   ERROR: Jan.(1) - Dec.(12)\n");
                break;
            }
        }
        else if ((month < JAN) || (month > DEC))
        {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }
    } while ((year >= MIN_YEAR || year <= MAX_YEAR) && (month <= JAN || month >= DEC) && flag == 0);
    return 0;                                            
}
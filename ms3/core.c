/*
*****************************************************************************
                        Assignment 1 - Milestone 3
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
#include <string.h>
#include "core.h"
//////////////////////////////////////
// USER INTERFACE FUNCTIONS
//////////////////////////////////////
// Clear the standard input buffer
void clearInputBuffer(void)
{
    // Discard all remaining char's from the standard input buffer:
    while (getchar() != '\n')
    {
        ; // do nothing!
    }
}
// Wait for user to input the "enter" key to continue
void suspend(void)
{
    printf("<ENTER> to continue...");
    clearInputBuffer();
    putchar('\n');
}
//////////////////////////////////////
// USER INPUT FUNCTIONS
//////////////////////////////////////
int inputInt()
{
    int input = -1;
    char new_char = '\0';
    int flag = 1;
    do
    {
        scanf("%d%c", &input, &new_char);
        if (new_char != '\n')
        {
            printf("Error! Input a whole number: ");
            clearInputBuffer();
        }
        else
        {
            flag = 0;
        }
    } while (flag);
    return input;
}
int inputIntPositive()
{
    int input = -1;
    do
    {
        input = inputInt();
    } while (input < 0 && printf("ERROR! Value must be > 0: "));
    return input;
}
int inputIntRange(int minimum, int maximum)
{
    int input = minimum - 1;
    do
    {
        input = inputInt();
    } while ((input < minimum || input > maximum) && printf("ERROR! Value must be between %d and %d inclusive: ", minimum, maximum));
    return input;
}

char inputCharOption(const char* string)
{
    char userChar;
    int flag = 1;
    do
    {
        userChar = getchar();
        if (strchr(string, userChar) != NULL)
        {
            return userChar;
            flag = 0;
        }
        else
        {
            printf("ERROR: Character must be one of [%s]: ", string);
        }
    } while (flag);
    return 0;
}
//Function 5
void inputCString(char* char_String, int min, int max)
{
    char max_input[100] = { '\0' };
    int flag_1 = 0;
    int counter_1 = 0;
    int counter_2 = 0;
    do
    {
        scanf("%99[^\n]%*c", max_input);
        for (counter_1 = 1; max_input[counter_1]; counter_1++)
            ;
        if (min == max)
        {
            if (counter_1 == min)
            {
                for (counter_2 = 0; max_input[counter_2]; char_String[counter_2] = max_input[counter_2], counter_2++);
                char_String[counter_2] = '\0';
                flag_1 = 1;
            }
        }
        else
        {
            if (counter_1 >= min && counter_1 <= max)
            {
                for (counter_2 = 0; max_input[counter_2]; char_String[counter_2] = max_input[counter_2], counter_2++);
                char_String[counter_2] = '\0';
                flag_1 = 1;
            }
        }
        if (!flag_1)
        {
            if (min == max)
            {
                printf("ERROR: String length must be exactly %d chars: ", min);
            }
            else if (min == 0 || counter_1 > max)
            {
                printf("ERROR: String length must be no more than %d chars: ", max);
            }
            else
            {
                printf("ERROR: String length must be between %d and %d chars: ", min, max);
            }
        }
    } while (!flag_1);
}
void displayFormattedPhone(const char* char_String)
{
    int flag_2 = 1;
    int counter = 0;
    if (char_String != NULL)
    {
        for (counter = 0; char_String[counter] && flag_2; counter++)
        {
            if (char_String[counter] < 48 || char_String[counter] > 57)
            {
                flag_2 = 0;
            }
        }
    }
    if (flag_2 && counter == 10)
    {
        printf("(");
        for (counter = 0; counter < 3; counter++)
            printf("%c", char_String[counter]);
        printf(")");
        for (counter = 3; counter < 6; counter++)
            printf("%c", char_String[counter]);
        printf("-");
        for (counter = 6; counter < 10; counter++)
            printf("%c", char_String[counter]);
    }
    else
    {
        printf("(___)___-____");
    }
}
//////////////////////////////////////
// UTILITY FUNCTIONS
//////////////////////////////////////
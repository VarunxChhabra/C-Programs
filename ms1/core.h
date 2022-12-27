/*
*****************************************************************************
                        Assignment 1 - Milestone 1
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


void clearInputBuffer(void);

void suspend(void);

int inputInt(void);

int inputIntPositive(void);

int inputIntRange(int lower_bound, int upper_bound);

char inputCharOption(const char* valid_characters);

void inputCString(char* input_string, int minimum_length, int maximum_length);

void displayFormattedPhone(const char* phone_number);
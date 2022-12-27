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

// SAFE-GUARD: 
// It is good practice to apply safe-guards to header files
// Safe-guard's ensures only 1 copy of the header file is used in the project build
// The macro name should be mirroring the file name with _ for spaces, dots, etc.

// !!! DO NOT DELETE THE BELOW 2 LINES !!!
#ifndef CORE_H
#define CORE_H

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// 
// Copy your work done from Milestone #2 (core.h) into this file
// 
// NOTE:
// - Organize your functions into the below categories
// - Make sure the core.c file also lists these functions in the same order!
// - Be sure to provide a BRIEF comment for each function prototype
// - The comment should also be copied to the core.c function definition
//
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


//////////////////////////////////////
// USER INTERFACE FUNCTIONS
//////////////////////////////////////

// Clear the standard input buffer
void clearInputBuffer(void);

// Wait for user to input the "enter" key to continue
void suspend(void);

int inputIntPositive(void);// This function is used to get positive integer that should be greater than 0

int inputIntRange(int lower_bound, int upper_bound); // This function is used to get the integer value within the range

char inputCharOption(const char* valid_characters); // This function is used to get a single character and only validate if it matches any character within the given string.

void inputCString(char* input_string, int minimum_length, int maximum_length); // This function is used to get a C string and it only proceed further if the length is within the given range

void displayFormattedPhone(const char* phone_number); // This function is used to give the output of an array of 10 character digits as a formatted phone number

//////////////////////////////////////
// USER INPUT FUNCTIONS
//////////////////////////////////////




// !!! DO NOT DELETE THE BELOW LINE !!!
#endif // !CORE_H
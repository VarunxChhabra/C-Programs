/*
*****************************************************************************
                          Workshop - #3 (P1)
Full Name  :Varun Chhabra   
Student ID#:170279210
Email      :vchhabra1@myseneca.ca
Section    :NGG

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
    // You must use this variable in #3 data analysis section!

    const double testValue = 330.99; // constant given variable 
    const int product_1_id = 111, product_2_id = 222, product_3_id = 111; //variable for product id
    const char product_1_taxed = 'Y', product_2_taxed = 'N', product_3_taxed = 'N'; //variable for mentioning tax
    const double price_of_product_1 = 111.4900, price_of_product_2= 222.9900, price_of_product_3= 334.4900; //variable for price
    const double average = 222.9900; //variable for mentioning average
    printf("Product Information\n===================\n");
    //Product 1 details
    printf("Product-1 (ID:%d)", product_1_id);
    printf("\n  Taxed: %c", product_1_taxed);
    printf("\n  Price: $%.4lf\n", price_of_product_1);
    //Product 2 details
    printf("\nProduct-2 (ID:%d)", product_2_id);
    printf("\n  Taxed: %c", product_2_taxed);
    printf("\n  Price: $%.4lf\n", price_of_product_2);
    //Product 3 details
    printf("\nProduct-3 (ID:%d)", product_3_id);
    printf("\n  Taxed: %c", product_3_taxed);
    printf("\n  Price: $%.4lf\n", price_of_product_3);
    // Average
    printf("\nThe average of all prices is: $%.4lf\n", average);
    //print few statements
    printf("\nAbout Relational and Logical Expressions!\n========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n\n");
    // conditional statements 
    printf("Some Data Analysis...\n=====================\n");
    printf("1. Is product 1 taxable? -> %d\n\n", product_1_taxed == 'Y');
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", (product_2_taxed == 'N') && (product_3_taxed == 'N'));
    printf("3. Is product 3 less than testValue ($%.2lf)? -> %d\n\n", testValue, price_of_product_3 < testValue);
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", (price_of_product_3) > (price_of_product_1 +price_of_product_2));
    printf("5. Is the price of product 1 equal to or more than the price difference\n   of product 3 LESS product 2? ->  %d", (price_of_product_1) >= (price_of_product_3 - price_of_product_2));
    printf(" (price difference: $%.2lf)\n\n", price_of_product_3 - price_of_product_2);
    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", price_of_product_2 >= average);
    printf("7. Based on product ID, product 1 is unique -> %d\n\n", (product_1_id != product_2_id) && (product_1_id != product_3_id));
    printf("8. Based on product ID, product 2 is unique -> %d\n\n", (product_2_id != product_1_id) && (product_2_id != product_3_id));
    printf("9. Based on product ID, product 3 is unique -> %d\n", (product_3_id != product_1_id) && (product_3_id != product_2_id));
    return 0;
}
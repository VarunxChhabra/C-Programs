/*
*****************************************************************************
                          Workshop - #3 (P2)
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
    // You will need this when converting from grams to pounds (lbs)
// Table 1 variables
    const double GRAMS_IN_LBS = 453.5924;
    char coffee_1_type, coffee_2_type, coffee_3_type;
    char grind_size_of_coffee_1, grind_size_of_coffee_2, grind_size_of_coffee_3;
    int bag_size_for_coffee_1, bag_size_for_coffee_2, bag_size_for_coffee_3;
    char served_with_cream_for_coffee_1, served_with_cream_for_coffee_2, served_with_cream_for_coffee_3;
    double temperature_of_coffee_1, temperature_of_coffee_2, temperature_of_coffee_3;
// Table 2 variables 
    char coffee_strength, coffee_with_cream,maker_of_coffee;
    int number_of_daily_serving;
    // Note:
    // You can convert Celsius to Fahrenheit given the following formula:
    // fahrenheit = (celsius * 1.8) + 32.0);
    printf("Take a Break - Coffee Shop\n==========================\n\n");
    printf("Enter the coffee product information being sold today...\n\n");
    printf("COFFEE-1...\n");
// Coffee 1 details
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &coffee_1_type); // Asking user for input
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &grind_size_of_coffee_1); // Asking for grind size
    printf("Bag weight (g): ");
    scanf("%d", &bag_size_for_coffee_1); // Asking for bag weight for coffee
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &served_with_cream_for_coffee_1); // want cream on coffee
    printf("Ideal serving temperature (Celsius): ");
    scanf("%lf", &temperature_of_coffee_1); // temperature of coffee in Celsius

// Coffee 2 details
    printf("\nCOFFEE-2...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &coffee_2_type); // Asking user for input
    printf("Grind size ([C]ourse,[F]ine): "); // Asking for grind size
    scanf(" %c", &grind_size_of_coffee_2);
    printf("Bag weight (g): "); // Asking for bag weight for coffee
    scanf("%d", &bag_size_for_coffee_2);
    printf("Best served with cream ([Y]es,[N]o): "); // want cream on coffee
    scanf(" %c", &served_with_cream_for_coffee_2); // want cream on coffee
    printf("Ideal serving temperature (Celsius): ");
    scanf("%lf", &temperature_of_coffee_2); // temperature of coffee in Celsius

// Coffee 3 deatils
    printf("\nCOFFEE-3...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &coffee_3_type); // Asking user for input
    printf("Grind size ([C]ourse,[F]ine): "); // Asking for grind size
    scanf(" %c", &grind_size_of_coffee_3);
    printf("Bag weight (g): "); // Asking for bag weight for coffee
    scanf("%d", &bag_size_for_coffee_3);
    printf("Best served with cream ([Y]es,[N]o): "); // want cream on coffee
    scanf(" %c", &served_with_cream_for_coffee_3); // want cream on coffee
    printf("Ideal serving temperature (Celsius): ");
    scanf("%lf", &temperature_of_coffee_3); // temperature of coffee in Celsius

// Table -1
    printf("\n---+---------------+---------------+---------------+-------+--------------\n");
    printf("   |    Coffee     |    Coffee     |   Packaged    | Best  |   Serving\n");
    printf("   |     Type      |  Grind Size   |  Bag Weight   | Served| Temperature\n");
    printf("   +---------------+---------------+---------------+ With  +--------------\n");
    printf("ID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |   (C) |   (F)\n");
    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf(" 1 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", (coffee_1_type == 'L') || (coffee_1_type =='l'), (coffee_1_type == 'B') || (coffee_1_type =='b'), (grind_size_of_coffee_1 == 'C') || (grind_size_of_coffee_1 =='c'), (grind_size_of_coffee_1 == 'F') ||(grind_size_of_coffee_1 == 'f'), (bag_size_for_coffee_1), (bag_size_for_coffee_1 / GRAMS_IN_LBS), (served_with_cream_for_coffee_1 == 'Y') || (served_with_cream_for_coffee_1 == 'y'), (temperature_of_coffee_1), (temperature_of_coffee_1 * 1.8) + 32.0);
    printf(" 2 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", (coffee_2_type == 'L') || (coffee_2_type == 'l'), (coffee_2_type == 'B') || (coffee_2_type == 'b'), (grind_size_of_coffee_2 == 'C') || (grind_size_of_coffee_2 == 'c'), (grind_size_of_coffee_2 == 'F') || (grind_size_of_coffee_2 == 'f'), (bag_size_for_coffee_2), (bag_size_for_coffee_2 / GRAMS_IN_LBS), (served_with_cream_for_coffee_2 == 'Y') || (served_with_cream_for_coffee_2 == 'y'), (temperature_of_coffee_2), (temperature_of_coffee_2 * 1.8) + 32.0);
    printf(" 3 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", (coffee_3_type == 'L') || (coffee_3_type == 'l'), (coffee_3_type == 'B') || (coffee_3_type == 'b'), (grind_size_of_coffee_3 == 'C') || (grind_size_of_coffee_3 == 'c'), (grind_size_of_coffee_3 == 'F') || (grind_size_of_coffee_3 == 'f'), (bag_size_for_coffee_3), (bag_size_for_coffee_3 / GRAMS_IN_LBS), (served_with_cream_for_coffee_3 == 'Y') || (served_with_cream_for_coffee_3 == 'y'), (temperature_of_coffee_3), (temperature_of_coffee_3 * 1.8) + 32.0);
// Table -2 
    printf("\nEnter how you like your coffee and the coffee maker equipment you use...\n");
    printf("\nCoffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &coffee_strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffee_with_cream);
    printf("Typical number of daily servings: ");
    scanf("%d", &number_of_daily_serving);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &maker_of_coffee);
    printf("\nThe below table shows how your preferences align to the available products:\n");
    printf("\n--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    printf(" 1|      % d         |        % d          |     % d      |  % d   |     % d\n", ((coffee_strength == 'M') || (coffee_strength == 'm')) && ((coffee_1_type == 'L') || (coffee_1_type == 'l')), (grind_size_of_coffee_1 == 'F') || (grind_size_of_coffee_1 == 'f'), (number_of_daily_serving >= 1) && (number_of_daily_serving <= 4) && (bag_size_for_coffee_1 >= 0) && (bag_size_for_coffee_1 <= 250), ((coffee_with_cream == 'Y') || (coffee_with_cream == 'y')) && ((served_with_cream_for_coffee_1 == 'Y') || (served_with_cream_for_coffee_1 == 'y')), ((maker_of_coffee = 'c') || (maker_of_coffee = 'C')) && (temperature_of_coffee_1 >= 70.0));
    printf(" 2|      % d         |        % d          |     % d      |  % d   |     % d\n", ((coffee_strength == 'M') || (coffee_strength == 'm')) && ((coffee_2_type == 'L') || (coffee_2_type == 'l')), (grind_size_of_coffee_2 == 'F') || (grind_size_of_coffee_2 == 'f'), (number_of_daily_serving >= 5) && (number_of_daily_serving <= 9) && (bag_size_for_coffee_2 == 500), ((coffee_with_cream == 'Y') || (coffee_with_cream == 'y')) &&  ((served_with_cream_for_coffee_2 == 'Y') || (served_with_cream_for_coffee_2 == 'y')), ((maker_of_coffee = 'c') || (maker_of_coffee = 'C')) && (temperature_of_coffee_2 >= 70.0));
    printf(" 3|      % d         |        % d          |     % d      |  % d   |     % d\n", ((coffee_strength == 'M') || (coffee_strength == 'm')) && ((coffee_3_type == 'L') || (coffee_3_type == 'l')), (grind_size_of_coffee_3 == 'F') || (grind_size_of_coffee_3 == 'f'), (number_of_daily_serving >= 10) && (bag_size_for_coffee_3 == 1000), ((coffee_with_cream == 'Y') || (coffee_with_cream == 'y')) && ((served_with_cream_for_coffee_3 == 'Y') || (served_with_cream_for_coffee_3 == 'y')), ((maker_of_coffee = 'c') || (maker_of_coffee = 'C')) && (temperature_of_coffee_3 >= 70.0));
    printf("\nEnter how you like your coffee and the coffee maker equipment you use...\n");
   
 // Table 3 
    printf("\nCoffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &coffee_strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffee_with_cream);
    printf("Typical number of daily servings: ");
    scanf("%d", &number_of_daily_serving);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &maker_of_coffee);
    printf("\nThe below table shows how your preferences align to the available products:\n");
    printf("\n--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    printf(" 1|      % d         |        % d          |     % d      |  % d   |     % d\n", ((coffee_strength == 'R') || (coffee_strength == 'r')) && ((coffee_1_type == 'B') || (coffee_1_type == 'b')), (grind_size_of_coffee_1 == 'C') || (grind_size_of_coffee_1 == 'c'), (number_of_daily_serving >= 1) && (number_of_daily_serving <= 4) && (bag_size_for_coffee_1 >= 0) && (bag_size_for_coffee_1 <= 250), ((coffee_with_cream == 'N') || (coffee_with_cream == 'n')) && ((served_with_cream_for_coffee_1 == 'N') || (served_with_cream_for_coffee_1 == 'n')), ((maker_of_coffee = 'r') || (maker_of_coffee = 'R')) && (temperature_of_coffee_1 <= 69.9) && (temperature_of_coffee_1 >= 60.0));
    printf(" 2|      % d         |        % d          |     % d      |  % d   |     % d\n", ((coffee_strength == 'R') || (coffee_strength == 'r')) && ((coffee_2_type == 'B') || (coffee_2_type == 'b')), (grind_size_of_coffee_2 == 'C') || (grind_size_of_coffee_2 == 'c'), (number_of_daily_serving >= 5) && (number_of_daily_serving <= 9) && (bag_size_for_coffee_2 == 500), ((coffee_with_cream == 'N') || (coffee_with_cream == 'n')) && ((served_with_cream_for_coffee_2 == 'N') || (served_with_cream_for_coffee_2 == 'n')), ((maker_of_coffee = 'r') || (maker_of_coffee = 'R')) && (temperature_of_coffee_2 <= 69.9) && (temperature_of_coffee_1 >= 60.0));
    printf(" 3|      % d         |        % d          |     % d      |  % d   |     % d\n", ((coffee_strength == 'R') || (coffee_strength == 'r')) && ((coffee_3_type == 'B') || (coffee_3_type == 'b')), (grind_size_of_coffee_3 == 'C') || (grind_size_of_coffee_3 == 'c'), (number_of_daily_serving >= 10) && (bag_size_for_coffee_3 == 1000), ((coffee_with_cream == 'N') || (coffee_with_cream == 'n')) && ((served_with_cream_for_coffee_3 == 'N')|| (served_with_cream_for_coffee_3 == 'n')), ((maker_of_coffee = 'r') || (maker_of_coffee = 'R')) && (temperature_of_coffee_3 <= 69.9) && (temperature_of_coffee_1 >= 60.0));
    printf("\nHope you found a product that suits your likes!\n");
    return 0;
}
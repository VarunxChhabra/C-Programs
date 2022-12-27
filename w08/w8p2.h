/*
*****************************************************************************
                          Workshop - #8 (P2)
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
#define max_product 3
#define grams_Per_serve 64
#define kg 2.20462

// ----------------------------------------------------------------------------
// structures
struct CatFoodInfo
{
    int sku;
    double price;
    int calories;
    double weight;
};

struct ReportData
{
    int sku;
    double price;
    double weight;
    double kilogram;
    int gram;
    int calories;
    double total_serving;
    double cost_per_serving;
    double cost_per_calorie;
};


// ----------------------------------------------------------------------------
// function prototypes

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int * num1);

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* num2);

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int num_product);

// 4. Get user input for the details of cat food product
struct CatFoodInfo  getCatFoodInfo(const int sequence_num);

// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data
void displayCatFoodData(int sku, double* price, int calories, double* weight);

// ----------------------------------------------------------------------------
// PART-2
// 8. convert lbs: kg
double convertLbsKg(const double* lbs, double* final_result);

// 9. convert lbs: g
int convertLbsG(const double* lbs, int* final_result);

// 10. convert lbs: kg / g
void convertLbs(const double* lbs, double* kg_result, int* gram_result);

// 11. calculate: servings based on gPerServ
double calculateServings(const double gram, const double total_grams, double* num2);

// 12. calculate: cost per serving
double calculateCostPerServing(const double* price, const double* total_serving,
    double* num2);

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, const int* calories, double* num2);

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(const struct CatFoodInfo cats);

// 15. Display the formatted table header for the analysis results
void displayReportHeader();

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData report, const int cheapest);

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo cats);

// ----------------------------------------------------------------------------
// 7. Logic entry point
void start();

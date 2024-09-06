/** sizeof.c
 * =============================================================
 * Name: Matthew Adsit, 17 Aug
 * Section:  T3B
 * Project:  Lab 04
 * Purpose:  Determine the size of various data types
 * ============================================================= */

// Create Include Statements Here
#include <stdio.h>
#include <math.h>

int main() {

    // Create Your Variables Here
    int intVar = 0;
    long longVar = 0;
    float floatVar = 0;
    double doubleVar = 0;
    char charVar = 0;
    // Create Your Print Statements Here
    printf("An int variable uses %02ld bytes\n", sizeof(intVar));
    printf("A long variable uses %02ld bytes\n", sizeof(longVar));
    printf("A float variable uses %02ld bytes\n", sizeof(floatVar));
    printf("A double variable uses %02ld bytes\n", sizeof(doubleVar));
    printf("A char variable uses %02ld bytes\n", sizeof(charVar));

    /*
    int points          = 97;
    int points_possible = 100;

    float percentage   = points / points_possible;

    printf("Percentage = %f", percentage);
    */

    return 0;
}
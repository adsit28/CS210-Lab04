/** limits.c
 * =============================================================
 * Name: Matthew Adsit, 17 Aug
 * Section:  T3B
 * Project:  Lab 04
 * Purpose:  Determine the max and min values of ints and longs
 * ============================================================= */

#include <stdio.h>
#include <limits.h>

#define WORLD_POPULATION_2020 7794798739

int main() {

    // Task 1 -----------------------------------------------------------------------

    // Create an integer variable, and assign it the value of the world population
    int intVal = 7794798739;
    // Print out the integer variable you just made
    printf("world population in 2020 was (as int): %d\n", intVal);
    // Create a long variable, and assign it the value of the world population
    long longVal = 7794798739;
    // Print out the long variable you just made
    printf("world population in 2020 was (as long): %ld\n", longVal);
    
    // Task 2 -----------------------------------------------------------------------

    // Create an integer variable, and assign it the value of INT_MAX - 1
    int maxInt = INT_MAX - 1;
    // Print the value of the variable you just made
    printf("value of int: %d\n", maxInt);
    // Increment the value of your integer variable, and print it out using the same format as above
    printf("value of int: %d\n", maxInt+=1);
    // Increment the value of your integer variable, and print it out using the same format as above
    printf("value of int: %d\n", maxInt+=1);
    // Increment the value of your integer variable, and print it out using the same format as above
    printf("value of int: %d\n", maxInt+=1);
    
    // Task 3 -----------------------------------------------------------------------

    // Create an long variable, and assign it the value of LONG_MAX - 1
    long longMax = LONG_MAX - 1;
    // Print the value of the variable you just made
    printf("value of long: %ld\n", longMax);
    // Increment the value of your long variable, and print it out using the same format as above
    printf("value of long: %ld\n", longMax+=1);
    // Increment the value of your long variable, and print it out using the same format as above
    printf("value of long: %ld\n", longMax+=1);
    // Increment the value of your long variable, and print it out using the same format as above
    printf("value of long: %ld\n", longMax+=1);
    return 0;
}
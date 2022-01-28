/**
 * Author: Cole Johnson
 * Date: 2022/01/26
 *
 * This program converts kilograms to pounds
 */
#include <stdlib.h>
#include <stdio.h>

#define POUNDS_PER_KILOGRAM 2.204623

int main(int argc, char **argv){

    //prompt the user for some input
    printf("Please enter a number of kilograms: ");

    //declare your variables
    double kilograms, pounds;

    //read the input from the user
    scanf("%lf", &kilograms);

    //compute the conversion
    pounds = kilograms * POUNDS_PER_KILOGRAM;

    //output the result
    printf("That's %f pounds!\n", pounds);

    return 0;

}

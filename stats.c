/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Performs statisical analysis on data set array
 *
 * Prints the data array to the screen. Calculates the mean, median, max,
 * min on a data set array and prints the values to the screen.
 * A sort function is used to arrange data from highest to lowest.
 *
 * @author Gilbert Guimaraes
 * @date 11 August, 2017
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                             114, 88,   45,  76, 123,  87,  25,  23,
                             200, 122, 150, 90,   92,  87, 177, 244,
                             201,   6,  12,  60,   8,   2,   5,  67,
                             7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char median = 0, mean = 0, minimum = 0, maximum = 0;

  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */

void print_array(unsigned char * array, int count) {
	printf();
}

void sort_array(unsigned char * array, int count){
    printf();
}

unsigned char find_median(unsigned char * array, int count) {
	return 0;
}

unsigned char find_mean(unsigned char * array, int count) {
	return 0;
}

unsigned char find_minimum(unsigned char * array, int count) {
	return 0;
}

unsigned char find_maximum(unsigned char * array, int count) {
	return 0;
}

void print_statistics(unsigned char minimum, unsigned char maximum,
                      unsigned char median, unsigned char mean) {
    printf();
}

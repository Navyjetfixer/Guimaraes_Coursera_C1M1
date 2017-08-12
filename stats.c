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
 ** @file stats.c
 * @brief Performs statistical analysis on data set array
 *
 * Prints the data array to the screen. Calculates the mean, median, max, and
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
  print_array(test, SIZE);
  median = find_median(test, SIZE);
  mean = find_mean(test, SIZE);
  minimum = find_minimum(test, SIZE);
  maximum = find_maximum(test, SIZE);
  print_statistics(minimum, maximum, median, mean);

}

/* Add other Implementation File Code Here */

void print_array(unsigned char * array, int count) {
  printf("Data Array: ");
  for (int i = 0; i < count - 1; ++i) {
         printf("%d, ", array[i]);
       }
  printf("%d\n", array[count - 1 ]);
  printf("\n");
}

void sort_array(unsigned char * array, int count){
   boolean swapped;

   do {
       swapped = FALSE;
       for (int i = 0; i < count - 1; ++i) {
         if (array[i] < array[i + 1]) {
           char temp = array[i + 1];
           array[i + 1] = array[i] ;
           array[i] = temp;
           swapped = TRUE;
     }
    }
   }  while (swapped == TRUE);
}

unsigned char find_median(unsigned char * array, int count) {
  unsigned char median = 0;
  if (array == NULL) {
    return 0;
  }

  if (count <= 0) {
    count = 1;
  }

  sort_array(array, count);

  if (count %2 == 0) {
    median = (array[count/2 -1] + array[count/2])/2;
    return median;
  } else {
      median = (array[(count + 1)/2]);
      return median;
  }
}

unsigned char find_mean(unsigned char * array, int count) {
  unsigned char mean = 0;
  int sum = 0;

  for (int i = 0; i < count; ++i) {
      sum = sum + (int)array[i];
      //printf("Sum = %d, %d", sum, array[i]);
      //printf("\n");
      }
  mean = sum / count;
  return mean;
}

unsigned char find_minimum(unsigned char * array, int count) {
  unsigned char minimum = array[0];

  for (int i = 1; i < count; ++i) {
      if(array[i] < minimum) {
        minimum = array[i];
    }
  }
  return minimum;
}

unsigned char find_maximum(unsigned char * array, int count) {
  unsigned char maximum = array[0];

  for (int i = 1; i < count; ++i) {
      if(array[i] > maximum) {
        maximum = array[i];
    }
  }
  return maximum;
}

void print_statistics(unsigned char minimum, unsigned char maximum,
                      unsigned char median, unsigned char mean) {
  printf("Statistical output of data set:\n\n");
  printf("Maximum = %d", maximum);
  printf("\n");
  printf("Minimum = %d", minimum);
  printf("\n");
  printf("Mean = %d", mean);
  printf("\n");
  printf("Median = %d", median);
  printf("\n");
}

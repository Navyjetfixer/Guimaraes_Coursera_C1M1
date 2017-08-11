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
 * @file stats.h
 * @brief function definitions to generate statistics of an array
 *
 * This header file provides an abstraction of calculating mean, median, min,
 *  and max of an array and printing the results
 *
 * @author Gilbert Guimaraes
 * @date 10 August, 2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
typedef enum {FALSE, TRUE } boolean;  //creates a boolean data type

/* Add Your Declarations and Function Comments here */

/**
 * @brief sorts a data set
 *
 * given a pointer to a char data array sorts the data set from
 * largest to smallest and returns the sorted array
 *
 * @param * array a char array data set
 * @param count Number of elements in the array
 *
 * @return void
 */
void sort_array(unsigned char  * array, int count);

/**
 * @brief calculates the median value of a set of data
 *
 * given a pointer to a char data array and the length of the array
 * calculates the median
 *
 * @param * array a char array data set
 * @param count Number of elements in the array
 *
 * @return Median of the data provided
 */
unsigned char find_median(unsigned char * array, int count);

/**
 * @brief prints the statistics of a data array
 *
 * given a pointer to a char data array prints the following:
 *      minimum
 *      maximum
 *      median
 *      mean
 *
 * @param minimum Minimum value of the array
 * @param maximum Maximum value of the array
 * @param median Median value of the array
 * @param mean Mean value of the array
 *
 * @return void
 */
void print_statistics(unsigned char minimum, unsigned char maximum,
                      unsigned char median, unsigned char mean);

/**
 * @brief prints an array to the console
 *
 * given a pointer to a char data array and the length of the array
 * prints the array to the console
 *
 * @param * array a char array data set
 * @param count Number of elements in the array
 *
 * @return void
 */
void print_array(unsigned char * array, int count);

/**
 * @brief calculates the mean value of a set of data
 *
 * given a pointer to a char data array and the length of the array
 * calculates the mean
 *
 * @param * array a char array data set
 * @param count Number of elements in the array
 *
 * @return Mean of the data provided
 */
unsigned char find_mean(unsigned char * array, int count);

/**
 * @brief finds the minimum value of a set of data
 *
 * given a pointer to a char data array and the length of the array
 * determines the minimum value
 *
 * @param * array a char array data set
 * @param count Number of elements in the array
 *
 * @return Minimum of the data provided
 */
unsigned char find_minimum(unsigned char * array, int count);

/**
 * @brief finds the maximum value of a set of data
 *
 * given a pointer to a char data array and the length of the array
 * determines the maximum value
 *
 * @param * array a char array data set
 * @param count Number of elements in the array
 *
 * @return Maximum of the data provided
 */
unsigned char find_maximum(unsigned char * array, int count);

#endif /* __STATS_H__ */

/**
 * sort.h
 *
 * Carlos Corrales Ch.
 * Sorting algorithms
 *
 * Sorting functions.
 */

 #ifndef SORT_H
 #define SORT_H

 // Maximum size of an array
 #define MAX 65536

/**
 * Sorts an array by emplying Bubble Sort.
 */
void bubble_sort(int values[], int n);


/**
 * Sorts an array with the Selection Sort algorithm.
 */
void selection_sort(int array[], int size);


/**
 * Sorts an array with the Insertion Sort algorithm.
 */
void insertion_sort(int array[], int size);


/**
 * Fills an array. Maximum number of elements 'MAX'.
 */
int fill(int values[]);

#endif

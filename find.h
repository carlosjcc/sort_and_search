/**
 * find.c
 *
 * Carlos Corrales Ch.
 * Sorting algorithms
 *
 * Finding an integer inside an array using the Binary Search algorith.
 */


#ifndef FIND_H
#define FIND_H


/**
 * Gets array and number to look for with the Binary Search algorithm.
 * This function just calls the recursiveBinarySeach function which actually performs the search.
 * It was separated into 2 functions so it was easy for users to know how to use it.
 */
_Bool binarySeach(int array[], int size, int num);


/**
 * Sorts an array with the Bubble Sort algorithm.
 */
int recursiveBinarySeach(int array[], int min, int max, int num);


/**
 * Calculates the mid-point of the array.
 */
int calcMidpoint(int min, int max);









 #endif

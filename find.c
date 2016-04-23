/**
 * find.c
 *
 * Carlos Corrales Ch.
 * Sorting algorithms
 *
 * Finding an integer inside an array using the Binary Search algorith.
 */


#include <stdio.h>
#include <stdlib.h>
#include "find.h"

int resultB;


/**
 * Gets array and number to look for with the Binary Search algorithm.
 * This function just calls the recursiveBinarySeach() function which actually performs the search.
 * It was separated into 2 functions so it was easy for users to know how to use it.
 */
_Bool binarySeach(int array[], int size, int num)
{
	_Bool found;

	if ( recursiveBinarySeach(array, 0, size, num) == 1)
		found = 1;
	else
		found = 0;

	return found;
}


/**
 * Recursively searches for a number as per the Binary Search algorithm.
 */
int recursiveBinarySeach(int array[], int min, int max, int num)
{
	int midPoint;

	if (max < min)
		resultB = -1;

	else
	{
		midPoint = calcMidpoint(min, max);

		if (array[midPoint] < num)
			recursiveBinarySeach(array, midPoint + 1, max, num);

		else if (array[midPoint] > num)
			recursiveBinarySeach(array, min, midPoint - 1, num);

		else
			resultB = 1;
	}

	return resultB;
}


/**
 * Calculates the mid-point of the array.
 */
int calcMidpoint(int min, int max)
{
	int result = 0;

	if (min != max)
		result = ( ((max - min) / 2) + min);

	else if (min == max)
		result = max;

	return result;
}

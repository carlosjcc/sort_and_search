/**
 * sort.c
 *
 * Carlos Corrales Ch.
 * Sorting algorithms
 *
 * Sorting functions.
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <cs50.h>
#include "sort.h"


/**
 * Sorts an array with the Bubble Sort algorithm.
 */
void bubble_sort(int array[], int size)
{
    int swapped = 0;
    int temp = 0;

    do
    {
        swapped = 0;

        for (int i = 0; i < (size - 1); i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;
            }
        }
    }
    while(swapped == 1);
}


/**
 * Sorts an array with the Selection Sort algorithm.
 */
void selection_sort(int array[], int size)
{
    int min;
    int temp;

    for (int i = 0; i < (size - 1); i++)
    {
        min = i;

        for (int j = (i + 1); j < size; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }

        // swap array[min] and array[i]
        if (min != i)
        {
            temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }

    }

}


/**
 * Sorts an array with the Insertion Sort algorithm.
 */
void insertion_sort(int array[], int size)
{
    int element;
    int j;

    for (int i = 1; i < size; i++)
    {
        element = array[i];
        j = i;

        while (j > 0 && array[j - 1] > element)
        {
            array[j] = array[j - 1];
            j = j - 1;
        }

        array[j] = element;
    }

}


/**
 * Fills an array. Maximum number of elements 'MAX'.
 */
int fill(int array[])
{
    // fill in array
    int size;
    printf("\nFill in aray \n\n To stop filling: 'CTRL + d'\n");
    for (size = 0; size < MAX; size++)
    {
        // wait for hay until EOF
        printf("\nnumbers[%i] = ", size);
        int number = GetInt();
        if (number == INT_MAX)
        {
            break;
        }

        // add value to array
        array[size] = number;
    }

    printf("\n");

    return size;
}

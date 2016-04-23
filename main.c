/**
 * main.c
 *
 * Carlos Corrales Ch.
 * program to probe sorting algorithms
 *
 */

#include <stdio.h>
#include "sort.h"
#include "print.h"
#include "find.h"


int main(void)
{
    // declare array of numbers to be filled in
    int array[MAX];

    // fill in array and get its size
    int size = fill(array);


    // print unsorted array
    printf("\n");
    printf("Unsorted array:\n");
    print_array(array, size);


    // sort array by bubble sort algorith
    //bubble_sort(array, size);
    //selection_sort(array, size);
    insertion_sort(array, size);

    // find number
    if ( binarySeach(array, size, 5) )
        printf("Number found\n\n");
    else
        printf("Number not found\n\n");

    // print sorted array
    printf("Sorted array\n");
    print_array(array, size);

    return 0;
}

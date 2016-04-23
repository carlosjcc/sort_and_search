/**
 * print.c
 *
 * Carlos Corrales Ch.
 * print arrays
 *
 */

 #include <stdio.h>

 /**
  * Function for printing unidimensional arrays.
  */
void print_array(int array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n\n");
}

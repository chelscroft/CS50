/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if (n < 0)
    {
        return false;
    }

    int min = 0;
    int max = n - 1;

    while (min <= max)
    {
        int mid = (min + max) / 2;

        if (values[mid] == value)
        {
            return true;
        }
        else if (values[mid] < value)
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }

    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (values[j] < values[min])
            {
                min = j;
            }
        }

        int temp = values[min];
        values[min] = values[i];
        values[i] = temp;
    }

    return;
}

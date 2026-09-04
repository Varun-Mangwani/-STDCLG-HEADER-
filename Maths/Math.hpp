#include <iostream>
#include <cmath>

// Only Functions In This Class For Maths Calculations

int Sum_Of_Digits(int value)
{
    int dgt, sum = 0;
    while (value != 0)
    {
        dgt = value % 10;
        sum = sum + dgt;
        value /= 10;
    }
    return sum;
}

int Reverse_of_digits(int value)
{
    int dgt, rev = 0;

    while (value != 0)
    {
        dgt = value % 10;
        rev = 10 * rev + dgt;
        value /= 10;
    }
    return rev;
}

double mean_Of_Arrays(int *arr, int size)
{

    int sum = 0;
    for (int i = 0; i <= size - 1; i++)
    {
        sum = sum + arr[i];
    }
    double avg = (double)sum / size;

    return avg;
}

// int Mode_of_array(int *array, int size)
// {
//     int val, maxval, Rptd, maxcnt;

//     for (int i = 0; i <= size - 1; i++)
//     {
//         if (array[i] > array[i + 1])
//         {
//             int tmp = array[i];
//             array[i] = array[i + 1];
//             array[i + 1] = tmp;
//         }
//     }

//     for (int i = 0; i <= size - 1; i++)
//     {
//         if (i == 0)
//         {
//             val = array[i];
//             Rptd = 0;
//         }

//         if (val == array[i] && i != 0)
//         {
//             Rptd++;
//         }
//         else
//         {
//             maxval = val;
//             maxcnt = Rptd > maxcnt ? Rptd : maxcnt;
//             val = array[i];
//             Rptd = 0;
//         }
//     }
//     return maxval;
// }
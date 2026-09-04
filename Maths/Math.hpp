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
    for (int i = 0; i <= size-1 ; i++)
    {
        sum = sum + arr[i];
    }
    double avg = (double)sum / size;

    return avg;
}

int Mode_of_array(int *array,int size) {
    int Rptd,count=0;
    

}
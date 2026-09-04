#include<iostream>
#include<cmath>

//Only Functions In This Class For Maths Calculations 

int Sum_Of_Digits(int value) {
    int dgt,sum = 0;
    while(value != 0) {
        dgt = value%10;
        sum = sum + dgt;
        value /= 10;
    }
    return sum;
}
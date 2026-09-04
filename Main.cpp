#include<iostream>
#include "Maths/Math.hpp"

int main() {

    // Basic Sum Of Digits
    // int sum = Sum_Of_Digits(12345);
    // std::cout << sum << std::endl;

    // Basic Reverse Of Digits
    // int rev = Reverse_of_digits(1454);
    // std::cout << rev << std::endl;

    // Mean of arrays
    const int arraySize = 10; 
    int array[arraySize] = {1,1,1,1,1,1,2,3,4,5};
   
    int Mode = Mode_of_array(array,arraySize);
    std::cout << Mode << std::endl;
    // double Mean = mean_Of_Arrays(array,arraySize);
    // std::cout << Mean << std::endl;

    return 0;
}
/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/
#include <iostream>

int main(int argc, const char** argv) 
{
    int sums;
    float average;

    for (int i = 0; i < 5; i++)
    {

        std::cout<<"Please enter a nuber"<<std::endl;
        int number;
        std::cin>>number;
        sums+=number;
    }
    
    average = sums/5.0;
    std::cout<<average<<std::endl;

    return 0;
}

/*
INPUTS

3
4
6
77
8

*/
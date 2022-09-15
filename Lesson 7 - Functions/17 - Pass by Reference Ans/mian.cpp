//A sample solution for the Pass by Reference Programming Quiz

//--------------------------------The main.cpp program:

#include "main.hpp"

int main()
{
    char operation = '/';
    float input1 = 9.8;
    float input2 = 2.3;
    float result;

    calculate(input1, input2, operation, result);
    printEquation(input1, input2, operation, result);
    return 0;
}

/*
The output of the above program :

    9.8 / 2.3 = 4.26087

*/
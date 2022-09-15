    /*
    Now write a program that uses passing variables by reference.

    Write a program that uses two functions:

    calculate(input1, input2, operation, result);
    printEquation(input1, input2, operation, result);

    Input, input2, and result are floats.
    Operation is a char. The choices are '+', '-', '*', '/'
    The result is modified by the function called calculate.

    */

    /*The header file for main.cpp*/
    #include <iostream>

    //int calculate(float input1, float input2, char operation, float result);
    //void printEquation(int input1, float input2, char operation, float result);

    int calculate(float &input1, float &input2, char &operation, float &result)
    {
        if(operation=='+')
        {
            result = input1 + input2;
        }
        else if (operation == '-')
        {
            result = input1 - input2;
        }
        else if (operation == '*')
        {
            result = input1 * input2;
        }
        else if (operation == '/')
        {
            result = input1 / input2;
        }

        return result;
    }

    void printEquation(float &input1, float &input2, char &operation, float &result)
    {

        std::cout<<input1<< operation<< input2  <<'='<<result;
    }
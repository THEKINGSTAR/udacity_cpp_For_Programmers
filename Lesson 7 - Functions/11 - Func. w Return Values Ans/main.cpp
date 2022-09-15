/* 
The sample solution for the Function with Return Values is:

The main.cpp
*/
/*Goal: practice writing functions with parameters and return values.*/

#include "main.hpp"

int main()
{
    int m1 = 33;
    int m2 = 66;
    int total = sum(m1, m2);
    printEquation(m1, m2, total, '+');
    return 0;
}


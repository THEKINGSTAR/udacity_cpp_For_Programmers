/*Put your functions here.
**The grader will use this file to check your work.
*/
#include <iostream>

void printEquation(int m1, int m2, int sum, char operation);
int sum(int m1, int m2);

void printEquation(int m1, int m2, int sum, char operation)
{
    // print the equation 'm1 operation  m2 = result'
    std::cout << m1 << '+' << m2 << '=' << sum;
}

int sum(int m1, int m2)
{
    // add two integers and return the sum
    int sum = m1 + m2;
    return sum;
}

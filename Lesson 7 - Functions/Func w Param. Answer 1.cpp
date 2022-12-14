//A sample solution to the previous quiz is :

/*GOAL: Practice writing functions

/*Write a function called printProduct that prints the results of the multiplication
**of two integers.
*/
#include <iostream>

    void
    printProduct(int m1, int m2, int product);

int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;

    printProduct(m1, m2, product);
    return 0;
}

void printProduct(int m1, int m2, int product)
{
    std::cout << m1 << " * " << m2 << " = " << product;
}

/*
The output for the above program is:

4 * 5 = 20
*/
/* 
We moved the include statements and the function declaration and the function definition to the header file.

Then we added an include statement to the main.cpp: 
*/

// This is the main.cpp file
//GOAL: Practice writing functions

 /*
 Write a function that prints the results of the multiplication
 **of two integers.
 */

#include "main.hpp"

int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;

    // call the function
    printProduct(m1, m2, product);
    return 0;
}
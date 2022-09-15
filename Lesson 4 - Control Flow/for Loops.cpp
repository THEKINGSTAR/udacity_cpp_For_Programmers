/*
for loops in C++ have the following form:

for ( declaration : range ) statement;

for (initialization; condition; increase) statement;
We will not cover for loops with ranges at this time. 
We will focus more on the 'initialization, condition, increase' for loop. We will revisit for loops with ranges later in the course.

Let's look at a simple program that will illustrate the use of the for loop.
*/

/*Goal: examine a for loop example. */

#include <iostream>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "i = " << i << "\n";
    }
    return 0;
}
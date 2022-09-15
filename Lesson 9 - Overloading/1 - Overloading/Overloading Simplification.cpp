/* 
<!-- Wow, that was a pain. The same code written three times with three different declarations and definitions!

What ever happened to code reuse?

We can actually make the situation a LITTLE easier... we can use Function Overloading.

Function Overloading will allow us to use the same function name for different functions. 
As long as the argument list is different, 
the compiler will be able to choose the correct definition.

Different argument list means either the variable type is different and/or the number of arguments is different.

In the next example, I overloaded a function called findSmaller.

This function will have three variations; integer arguments and return variable, 
float arguments and return variable, and character arguments and return variable.

Now I can write a program using findSmaller with three different input variable types. 
--> */

/*Goal: look at a program, and see if we can make it more versatile*/

#include <iostream>

// C++ allows us to 'overload' the same function name as long as
// the variable types in the function inputs are different.
int findSmaller(int input1, int input2);
float findSmaller(float input1, float input2);
char findSmaller(char input1, char input2);

int main()
{
    int a = 5;
    int b = 4;
    float f1 = 5.43;
    float f2 = 6.32;
    char c1 = 'c';
    char c2 = 'z';
    std::cout << findSmaller(a, b) << " is the smaller of " << a << " and " << b << "\n";
    std::cout << findSmaller(f1, f2) << " is the smaller of " << f1 << " and " << f2 << "\n";
    std::cout << findSmaller(c1, c2) << " is the smaller of " << c1 << " and " << c2 << "\n";

    return 0;
}

int findSmaller(int input1, int input2)
{
    if (input1 < input2)
        return input1;
    return input2;
}
float findSmaller(float input1, float input2)
{
    if (input1 < input2)
        return input1;
    return input2;
}

char findSmaller(char input1, char input2)
{
    if (input1 < input2)
        return input1;
    return input2;
}

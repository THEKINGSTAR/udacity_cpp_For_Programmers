//--------------------------------------------------------------for Loop Answer-----------------------------------------------------------------------
/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include <iostream>

int main()
{
    float input;
    float sum = 0;

    for(int i=0;i<5;i++)
    {
        std::cout<<"What is the next number?\n";
        std::cin>>input;
        sum = sum + input;
    }//end of for loop

    std::cout<<"Sum = "<<sum<<"\n";
    std::cout<<"Average = "<<sum/5<<"\n";
    return 0;
}


/*
This program will generate the following output:


There is one small note I would like to add, it is concerning the use of an alias:

size_t
This alias in found in the cstddef library. To use size_t you will have to include the cstddef library.

You can use size_t in a loop where you would normally define the variable type of the iterator.


For example:

        for(int i = 0; i < 5; i++)
        Becomes:

        #include <cstddef> //don't forget to include the library
        .
        .
        .
        for(size_t i =0; i<5; i++)
    This is known as an implicit type cast and it can make your code more portable, and in some cases more secure.

That said, implicit type casts are usually not considered good coding practice.

You will find there are many things in C++ (as in other languages) that fall into the grey area of "good/bad" coding practices.
When in doubt, follow the standards of your community.
A good discussion about this can be found at: When to Use size_t

*/
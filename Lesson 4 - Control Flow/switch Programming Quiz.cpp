/*
Now I would like you to do a switch statement with breaks between the cases. 
Create a program that asks the user for two float numbers. Then asks the user if they would like to:

add the numbers
subtract the numbers
multiply the numbers
divide the numbers
The program should then print the numbers with the chosen operation and the solution.
For example:

The user enters: 4 5 +
The program will output: 4 + 5 = 9
*/

/*Now I would like you to do a switch statement with breaks
**between the cases. 
Create a program that asks the user for
**two float numbers. 
Then asks the user if they would like to:
**add the numbers, subtract the numbers, multiply the numbers,
**divide the numbers.
**The program should then print the numbers with the chosen
**operation and the solution.
*/

#include <iostream>

int main()
{
    float in1, in2;
    std::cout << "Enter two numbers:\n";
    std::cin >> in1;
    std::cin >> in2;
    
    std::cout << "Enter the operation '+','-','*','/':\n";



    char operation;
    std::cin>>operation;
    int answer =0;

    switch (operation)
    {
        case('+'):
        {
            answer= in1+in2;
            break;
        }
        case ('-'):
        {
            answer = in1 - in2;

            break;
        }
        case ('*'):
        {
            answer = in1 * in2;

            break;
        }
        case ('/'):
        {
            answer = in1 / in2;

            break;
        }
    }
    std::cout << answer ;


    return 0;
}

/*
    INPUTS

    5 6
    -

*/
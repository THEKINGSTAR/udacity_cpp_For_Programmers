/*
Now that we have talked about if-else statements, this may be a good time to talk about the king of 'if' statements, the switch statement.

Switch Statements

Switch statements in C++ are similar to switch statements in other languages.

The format for a switch statement:

switch(expression)
{
     case constant-expression : statements;
                               break; (this is optional);
     case constant-expression : statements;
                               break; (this is optional);
     ...

     default : //optional
        statements;
}

For reference: Switch Statments

The program below will demonstrate some use cases for the switch statement.
*/

/*Goal: demonstrate use cases for the switch statement.*/

#include <iostream>

int main()
{
    int menuItem = 1;

    std::cout << "What is your favorite winter sport?: \n";
    std::cout << "1.Skiing\n2: Sledding\n3: Sitting by the fire";
    std::cout << "\n4.Drinking hot chocolate\n";
    std::cout << "\n\n";

    switch (menuItem)
    {
    case (1):
        std::cout << "Skiing?! Sounds dangerous!\n";
        break;
    case (2):
        std::cout << "Sledding?! Sounds like work!\n";
        break;
    case (3):
        std::cout << "Sitting by the fire?! Sounds warm!\n";
        break;
    case (4):
        std::cout << "Hot chocolate?! Yum!\n";
        break;
    default:
        std::cout << "Enter a valid menu item";
    }

    char begin;
    std::cout << "\n\nWhere do you want to begin?\n";
    std::cout << "B. At the beginning?\nM. At the middle?";
    std::cout << "\nE. At the end?\n\n";
    begin = 'M';

    switch (begin)
    {
    case ('B'):
        std::cout << "Once upon a time there was a wolf.\n";
    case ('M'):
        std::cout << "The wolf hurt his leg.\n";
    case ('E'):
        std::cout << "The wolf lived happily everafter\n";
    }
    return 0;
}
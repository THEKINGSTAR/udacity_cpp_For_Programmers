/*
In this program you will see how to use std::cin. Because we are in the Udacity classroom, we need to use the input.txt file to enter user inputs.

This works because when you click on the 'test run' menu item, you are actually executing the following statements:

"g++", "-o main.out", "main.cpp"
"./main.out", stdin=open("input.txt", "r")
The first statement compiles the code and names the executable file main.out. Then main.out is executed using an input file called "input.txt".

These are the commands you would run if you were compiling and executing the program in a terminal. 
In the Udacity classroom setting clicking the "Test Run" button executes these commands for you.

We need to do this because the Udacity platform does not have a mechanism to accept user input in programming quizzes.

main.cpp
input.txt
/*This program accepts inputs from the input.txt file*/ 

#include <iostream>
#include <string>


int main()
{
    int year = 0;
    int age = 0;
    std::string name = " ";
    //print a message to the user
    std::cout<<"What year is your favorite? ";
    
    //get the user response and assign it to the variable year
    std::cin >> year;
    
    //output response to user
    std::cout<<"How interesting, your favorite year is "<<year<<"!\n";
    
    //print a message to the user
    std::cout<<"At what age did you learn to ride a bike? ";
    
    //get the user response and assign it to the variable age
    std::cin >> age;
    
    //output response to user
    std::cout<<"How interesting you learned to ride at "<<age<<"!\n";
    
    std::cout<<"What is your name? ";
    std::cin>>name;
    std::cout<<"Hello "<<name<<" !\n";
    return 0;
}




/*
This works because when you click on the 'test run' menu item,
 you are actually executing the following statements:

            "g++", "-o main.out", "main.cpp"
            "./main.out", stdin=open("user.txt", "r")
*/
/*
What year is your favorite? How interesting, your favorite year is 1991!
At what age did you learn to ride a bike? How interesting you learned to ride at 5!
What is your name? Hello Bob !
*/

//g++ -o 'User Input Programming Quiz.exe'  'User Input Programming Quiz.cpp' ".\User Input Programming Quiz.exe", stdin=open("user.txt", "r")
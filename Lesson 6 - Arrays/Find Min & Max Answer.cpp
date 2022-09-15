/*Find the min and max and average of 15 integers that a user will input.
**We will do it now for practice and again when we learn arrays. So you do not have to **keep all fifteen numbers stored in memory.
*/

#include <iostream>

int main()
{
    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 100;
    int sumTotal = 0;
    float average = 0;

    // get the numbers from the user
    for (int i = 0; i < 15; i++)
    {
        std::cout << "Enter a number: ";
        std::cin >> userInput;
        std::cout << userInput << "\n";
        if (userInput > maxNumber)
        {
            maxNumber = userInput;
        }
        if (userInput < minNumber)
        {
            minNumber = userInput;
        } 
        sumTotal = sumTotal + userInput;
    }
    std::cout << "Maximum number = " << maxNumber << "\n";
    std::cout << "Minimum number = " << minNumber << "\n";
    average = sumTotal / 15.0;
    std::cout << "Average = " << average << "\n";
    return 0;
}

/*
INPUT

14 23 88 97 60 54 33 26 100 97 55 63 89 78 69
*/

/*
Enter a number: 14
14
Enter a number: 23
23
Enter a number: 88
88
Enter a number: 97
97
Enter a number: 60
60
Enter a number: 54
54
Enter a number: 33
33
Enter a number: 26
26
Enter a number: 100
100
Enter a number: 97
97
Enter a number: 55
55
Enter a number: 63
63
Enter a number: 89
89
Enter a number: 67
67
Enter a number: 69
69
Maximum number = 100
Minimum number = 14
Average = 62.3333
*/
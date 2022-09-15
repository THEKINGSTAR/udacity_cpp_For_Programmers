/*Goal: Practice array manipulation in C++.
 **The user will input 40 integers.
 **Put them into an array. Then print the array in the order the numbers were
 **entered. Then print in reverse order. Then sort the array in ascending order
 **and print it.
 */

#include <iostream>
#include <stdio.h>

int main()
{

    int inputs[] = {43, 32, 21, 23, 43, 98, 90, 65, 53, 42, 69, 79, 82, 7, 1, 63, 64, 9, 0, 87, 96, 4,
                    55, 3, 7, 2, 1, 67, 89, 543, 567, 985, 34, 975, 890, 4567, 23, 33, 9, 56, 345, 9865};

    int userInput[40];

    // Enter the numbers into an array called userInput
    for (int i = 0; i < 40; i++)
    {
        //scanf("%d", &userInput[i]);
        userInput[i] = inputs[i];
    }
    // print the array
    std::cout << "\nThe array\n";
    for (int i = 0; i < 40; i++)
    {
        std::cout << userInput[i] << " ";
    }
    // print the array in reverse order
    std::cout << "\n\nThe array in reverse order\n";
    for (int i = 39; i >= 0; i--)
    {
        std::cout << userInput[i] << " ";
    }
    // sorting the array
    for (int i = 0; i < 40; i++)
    {
        for (int j = 0; j < 39 - i; j++)
        {
            if (userInput[j] > userInput[j + 1])
            {
                int temp;
                temp = userInput[j];
                userInput[j] = userInput[j + 1];
                userInput[j + 1] = temp;
            }
        }
    }
    std::cout << "\n\nThe array sorted\n";
    for (int i = 0; i < 40; i++)
    {
        std::cout << userInput[i] << " ";
    }
    return 0;
}

/*
The array
43 32 21 23 43 98 90 65 53 42 69 79 82 7 1 63 64 9 0 87 96 4 55 3 7 2 1 67 89 543 567 985 34 975 890 4567 23 33 9 56

The array in reverse order
56 9 33 23 4567 890 975 34 985 567 543 89 67 1 2 7 3 55 4 96 87 0 9 64 63 1 7 82 79 69 42 53 65 90 98 43 23 21 32 43

The array sorted
0 1 1 2 3 4 7 7 9 9 21 23 23 32 33 34 42 43 43 53 55 56 63 64 65 67 69 79 82 87 89 90 96 98 543 567 890 975 985 4567

*/
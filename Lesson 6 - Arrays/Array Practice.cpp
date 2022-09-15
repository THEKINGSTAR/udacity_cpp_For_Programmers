/*
Practice arrays with this program. To instantiate an array of ints:

int userInput[40];
*/

/*Goal: Practice array manipulation in C++.
**The user will input 40 integers.
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order
**and print it.
**The each print of the array should separate the numbers in the array by
**one space.
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

int main()
{
    int inputs[] = { 43, 32, 21, 23, 43, 98, 90, 65, 53, 42, 69, 79, 82, 7, 1, 63, 64, 9, 0, 87, 96, 4 ,
                     55, 3, 7, 2, 1, 67, 89, 543, 567, 985, 34, 975, 890, 4567, 23, 33, 9, 56, 345, 9865 };
    
    int userInput[40];
    //taking inputs
    for (int i = 0; i < 40; i++)
    {   
        //std::cin>>userInput[i];
        userInput[i] = inputs[i];
    }

    //printing inputs
    for (int i = 0; i < 40; i++)
    {
        std::cout<< userInput[i]<<" ";
    }

    std::cout<<"\nRevers order ";
    
    std::cout<<std::endl;
    for (int i = 39; i>=0; i--)
    {
        std::cout << userInput[i] << " ";
    }

    for (int i = 0; i < 40; i++)
    {
        for(int l =0 ; l < 39-i ; l++)
        {
            int tmp = userInput[l];
                       
            if(userInput[l]> userInput[l+1])
            {
                userInput[l] = userInput[l+1];
                userInput[l + 1] = tmp;
            }
        }
    }
    
    std::cout << "\nAscending order ";

    std::cout << std::endl;
    for (int i = 0; i < 40; i++)
    {
        std::cout << userInput[i] << " ";
    }
    return 0;
}

/*
43 32 21 23 43 98 90 65 53 42 69 79 82 7 1 63 64 9 0 87 96 4 55 3 7 2 1 67 89 543 567 985 34 975 890 4567 23 33 9 56
Revers order
56 9 33 23 4567 890 975 34 985 567 543 89 67 1 2 7 3 55 4 96 87 0 9 64 63 1 7 82 79 69 42 53 65 90 98 43 23 21 32 43
Ascending order
0 1 1 2 3 4 7 7 9 21 23 32 42 43 43 55 64 69 82 90 98 96 87 79 65 63 53 67 89 543 567 985 34 975 890 4567 23 33 9 56

*/
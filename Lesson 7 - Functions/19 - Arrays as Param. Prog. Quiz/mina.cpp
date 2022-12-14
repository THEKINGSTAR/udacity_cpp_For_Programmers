/*
For this assignment, we would like you to write a function that searches an array for a value.

If the array contains the value, return the index where the key is located.
If the array does not contain the value, return a -1.

*/

/*
Goal: create a function that searches an array for
**a given value.
*/

#include <iostream>

int search(int array[4], int size, int searchKey);

int main()
{
    const int size = 4;
    int array[] = {345, 75896, 2, 543};
    int searchKey = 543; //FOUND
    
    std::cout << "Found at: " << search(array, size, searchKey);

    searchKey = 70; // NOT FOUND

    std::cout << "\nFound at: " << search(array, size, searchKey);





    return 0;
}

int search (int array[4],int size, int searchKey)
{

    for (int  i = 0; i < size; i++)
    {
        if (searchKey == array[i])
        {
            return i;
        }
        
    }
    
    return -1;
}
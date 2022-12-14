
/*
Now, it's your turn to use overloading.

Add two more variations on findSmaller;

create functions that accept three arguments for each of the variable types
create functions that accept an array for each variable type.
*/


#include <iostream>

// C++ allows us to 'overload' the same function name as long as
// the variable types in the function inputs are different.

class Compare
{
public:
    int     findSmaller(int input1, int input2);
    float   findSmaller(float input1, float input2);
    char    findSmaller(char input1, char input2);

    int     findSmaller(int input1, int input2, int input3);
    float   findSmaller(float input1, float input2, float input3);
    char    findSmaller(char input1, char input2, char input3);
    
    int     findSmaller(int arr[], int size);
    float   findSmaller(float arr[], int size);
    char    findSmaller(char arr[], int size);

};

int Compare::findSmaller(int input1, int input2)
{
    if (input1 < input2)
        return input1;
    return input2;
}
float Compare::findSmaller(float input1, float input2)
{
    if (input1 < input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2)
{
    if (input1 < input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2, char input3)
{
    if (input1 > input2 && input1 >input3)
    {
        return input1;
    }
    else if (input2>input3 && input2>input1)
    {
        return input2;
    }
    return 3;
    
}



int Compare::findSmaller(int input1, int input2, int input3)
{
    if (input1 > input2 && input1 > input3)
    {
        return input1;
    }
    else if (input2 > input3 && input2 > input1)
    {
        return input2;
    }
    return 3;
}

float Compare::findSmaller(float input1, float input2, float input3)
{
    if (input1 > input2 && input1 > input3)
    {
        return input1;
    }
    else if (input2 > input3 && input2 > input1)
    {
        return input2;
    }
    return 3;
}

int Compare::findSmaller(int arr [], int size)
{
    int smaller=0;
    for (int i = 0; i < size-1; i++)
    {
        smaller=arr[i];
        if (smaller<arr[i+1])
        {
            smaller=arr[i];
        }
        
    }

        return smaller;
}

char Compare::findSmaller(char arr[], int size)
{
    char smaller ;
    for (int i = 0; i < size - 1; i++)
    {
        smaller = arr[i];
        if (smaller < arr[i + 1])
        {
            smaller = arr[i];
        }
    }

    return smaller;
}

float Compare::findSmaller(float arr[], int size)
{
    float smaller = 0;
    for (int i = 0; i < size - 1; i++)
    {
        smaller = arr[i];
        if (smaller < arr[i + 1])
        {
            smaller = arr[i];
        }
    }

    return smaller;
}
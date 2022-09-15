/*
Now, it's your turn to use overloading.

Add two more variations on findSmaller;

create functions that accept three arguments for each of the variable types
create functions that accept an array for each variable type.
*/

///////////////---------------------------Overloading in a Class---------------------------///////////////////////
/*
Let's put our overloaded functions into a class called Compare.

Look at the program below, the findSmaller function now seems so versatile! It accepts and returns three different variable types.
*/

#include <iostream>

class Compare
{
public:
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);
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

/*
For this program, practice using classes by :
using the Dogs class to create an animal shelter roster.
add a constructor to the Dogs class. The initial name for a Dog is "Unknown"
declare and define the function:
printRoster(roster,SIZE);
*/

/*The header file for main.cpp*/

using namespace std;

#include "Dog.cpp"

// ToDo: assign the dogs to an array called roster
// Then assign names to the Dog.

void printRoster(Dog roster[], int size);

void printRoster(Dog roster[], int size)
{
    for (int  i = 0; i < size; i++)
    {
        roster[i].printInfo();
        cout<<"\n\n";
    }
    
}

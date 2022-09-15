/*
For this program, practice using classes by :
using the Dogs class to create an animal shelter roster.
add a constructor to the Dogs class. The initial name for a Dog is "Unknown"
declare and define the function:
printRoster(roster,SIZE);
*/

/*Goal: practice using a class.
**Create an array called roster, populate it
**with multiple instances of Dog, it has a size of SIZE.
**The create a function called
**printRoster(roster, SIZE) that will print
**all the information about all the dogs on the roster.
*/

#include "Classes and Arrays Program main.hpp"

int main()
{
    // ToDo: assign the dogs to an array called roster
    // Then assign names to the Dog.
    const int SIZE= 3 ;
    Dog roster [SIZE];

    // ToDo: declare and define this function
    // in the header file

    roster[0].setName("Blue");
    roster[1].setName("King");
    roster[2].setName("Spot");


    printRoster(roster, SIZE);
    return 0;
}

/*
But what if we have a pointer and want to access the value stored in that address? 
That process is called dereferencing, 
and it is indicated by adding the operator * before the variable's name. 
This same operator should be used to declare a variable that is meant to store a pointer.

//-------------------------For example:-------------------------------------------------

// this is an integer variable with value = 54
    int a = 54;

// this is a pointer that holds the address of the variable 'a'.
// if 'a' was a float, rather than int, so should be its pointer.
    int * pointerToA = &a;

// If we were to print pointerToA, we'd obtain the address of 'a':
    std::cout << "pointerToA points to address " << pointerToA << '\n';

// If we want to know what is stored in this address, we can dereference pointerToA:
    std::cout << "pointerToA stores value " << * pointerToA << '\n';

*/
//--------------------------------------------------------------------------------------------

/*For this program print for each variable
**print the value of the variable,
**then print the address where it is stored.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int givenInt;
    cin>>givenInt;

    float givenFloat;
    cin >>givenFloat;

    double givenDouble;
    cin>>givenDouble;

    std::string givenString;
    getline(std::cin, givenString);

    char givenChar;
    cin>>givenChar;

    int * pointerTogivenInt = &givenInt;

    std::cout << "pointerTogivenInt points to address   " << pointerTogivenInt << '\n';
    std::cout << "pointerTogivenInt stores value        " << *pointerTogivenInt << '\n';

    float *pointerTogivenFloat = &givenFloat;
    cout << "pointerTogivenFloat points to address      " << pointerTogivenFloat << "\n";
    cout << "pointerTogivenFloat points to stored value " << *pointerTogivenFloat << "\n";

    double *pointerTogivenDouble = &givenDouble;
    cout << "pointerTogivenDouble points to address     " << pointerTogivenDouble << "\n";
    cout << "pointerTogivenDouble points to stored value" << *pointerTogivenDouble << "\n";

    std::string *pointerTogivenString = &givenString;
    cout << "pointerTogivenString points to address          " << givenString << "\n";
    cout << "pointerTogivenString points to stored value     " << givenString << "\n";

    char *pointerTogivenChar = &givenChar;
    cout << "pointerTogivenString points to address          " << givenChar << "\n";
    cout << "pointerTogivenString points to stored value     " << givenChar << "\n";

    return 0;
}

/*
INPUT

32
64.212
4.76545
*
Hey look at me! I know pointers!


*/
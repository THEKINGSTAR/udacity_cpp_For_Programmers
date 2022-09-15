/*
In addition to constructors, C++ also has destructors.

Destructors are special class functions that are called whenever an object goes out of scope. 
Just like a constructor, a destructor is called automatically.

Destructors cannot:

   - return a value
   - accept parameters
Destructors must have the same name as the class.

The syntax for a destructor is similar to the constructor:

The destructor is identified with a tilda (~) symbol.

Declaring a destructor:

~className()  //this is a destructor

Defining a destructor:

classname::~classname()
{
     //tasks to be completed before going out of scope
}
One of the more important tasks of a destructor is releasing memory that was allocated by the class constructor and member functions.

We will discuss this in detail during the memory allocation lesson.
*/
/*Goal: use pointers to allot memory locations
 *for a class.
 */

#include "Destructors main.hpp"

int main()
{
    Dog d2(666666);
    cout << d2.getLicense();
    return 0;
}
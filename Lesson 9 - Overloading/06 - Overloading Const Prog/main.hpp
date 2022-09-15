

/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

/*Goal: create a class that has two
 *constructors; one that accepts
 *input parameters and one that does
 *not.
 */

#include <iostream>
#include <string>
using namespace std;

class Dog
{
private:
    string name;
    int license;

public:

    Dog(/* args */);
    Dog(string name);
    Dog(int licence);
    Dog(string name, int licence);
    string getName( );
    int getLicense();
};

Dog::Dog(/* args */)
{
    name = "NA";
    license = 0;
}
Dog::Dog(string nameIn)
{
    name = nameIn;
    license = 0;
}
Dog::Dog(int licenceIn)
{
    name = "NA";
    license = licenceIn;
}

Dog::Dog(string nameIn, int licenceIn)
{
    name = nameIn;
    license = licenceIn;
}


string Dog:: getName()
{
    return name;
}
int Dog:: getLicense()
{
    return license;
}
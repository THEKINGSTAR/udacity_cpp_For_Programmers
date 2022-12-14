/*
For this program, practice using classes by :
using the Dogs class to create an animal shelter roster.
add a constructor to the Dogs class. The initial name for a Dog is "Unknown"
declare and define the function:
printRoster(roster,SIZE);
*/
//You may use this file as a header file for the Dog class. 
//Make sure to include it in main.hpp file
#include <iostream>
using namespace std;

class Dog
{
    string name;
    int licenseNumber;
public:
    Dog();
    void setName(string nameIn);
    void setLicenseNumber(int licenseNumberIn);
    string getName();
    int getLicenseNumber();
    void printInfo();
};

Dog::Dog()
{
    name="Unkonw";
}

void Dog::setName(string nameIn)
{
    name = nameIn;
}

void Dog::setLicenseNumber(int licenseNumberIn)
{
    licenseNumber = licenseNumberIn;
}

string Dog::getName()
{
    return name;
}

int Dog::getLicenseNumber()
{
    return licenseNumber;
}
 
void Dog::printInfo()
{
    cout<<name<<" "<<licenseNumber;
}
    

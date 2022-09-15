/*
Header file for main.cpp

**Create a class called Cat.

**Create the following members:

**private members: name, breed, age

**public members: setName, setBreed,setAge

**getName, getBreed, getAge, printInfo*/

/*
In this program create a class called Cats.
It has three
private members: name, breed, age.

Create all the
set and get functions
as well as a
printInfo function: setName, setBreed, setAge, getName, getBreed, getAge, printInfo.
*/

#include <iostream>
using namespace std;


class Cat
{
    private :
    string name;
    string breed;
    int age;

    public:
    void setName(string nameIn);
    void setBreed(string breedIn);
    int setAge(int ageIn);

    string getName();
    string getBreed();
    int getAge();

    void printInfo();
};


void Cat::setName(string nameIn)
{
    name = nameIn;
}

void Cat::setBreed(string breedIn)
{
    breed = breedIn;
}

int Cat::setAge(int ageIn)
{
    age = ageIn;
}



string Cat::getName()
{
    return name;
}

string Cat::getBreed()
{
    return breed;
}

int Cat::getAge()
{
    return age;
}





void Cat::printInfo()
{
    cout << name << " " << breed << " "<< age;
}



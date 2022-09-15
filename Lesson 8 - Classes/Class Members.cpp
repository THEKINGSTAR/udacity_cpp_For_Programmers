#include <iostream>

using namespace std;

class Student
{
    string name;
    int id;
    int gradDate;

public:
    // set data types functions
    void setName(string nameIn);
    void setId(int idIn);
    void setGradeDate(int dateIn);

    // get data functions
    string getName();
    int getId();
    int getGradeDate();
    void print();
};




int main()
{










    return 0;
}

void Student::setName(string nameIn)
{
    name  = nameIn;
}

void Student::setId(int idIn)
{
    id = idIn;
}

void Student::setGradeDate(int gradDateIn)
{
    gradDate = gradDateIn;
}

string Student::getName()
{
    return name;
}

int Student::getId()
{
    return id;
}

int Student::getGradeDate()
{
    return gradDate;
}

void Student::print()
{
    cout << name << " " << id << " " << gradDate;
}
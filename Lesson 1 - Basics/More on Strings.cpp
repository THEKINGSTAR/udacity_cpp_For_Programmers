#include <iostream>
#include <string>
#include <sstream>


int main()
{


    std::string stringLenght;
    float inches =0;
    float yardage = 0;

    std::cout << "Enter number of inches :";
    std:: getline(std::cin,stringLenght);
    std::stringstream(stringLenght)>>inches;
    std::cout<<"You interd "<<inches<<"\n";

    yardage =inches/36;
    std::cout<<"Yard is "<<yardage<<"\n";



    return 0;
}
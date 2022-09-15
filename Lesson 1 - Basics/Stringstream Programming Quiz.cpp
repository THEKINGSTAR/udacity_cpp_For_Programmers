/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */
#include <iostream>
#include <string>
#include <sstream>


int main( )
{


    std::string  length ,width ;
    float slenght = 0 ,swidth = 0;
    float area = 0;

    std:: cout << "Enter the length of a room :";
    std:: getline(std::cin,length);
    std:: stringstream(length)>>slenght;
    
    std:: cout<<"prompt for the width of the room "<<width<<"\n";
    std:: getline(std::cin,width);
    std:: stringstream(width)>>swidth;

    area  = slenght * swidth;
    std:: cout<<"area of the room is "<<area<<"\n";



    return 0;
}

/*
12
13.5
*/
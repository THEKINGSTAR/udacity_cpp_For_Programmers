/*
Let's practice creating and using a simple class.
In this example I have put in all the 'stubs' for you. 
You just need to complete the function definitions and write the program.
*/

/*Goal: practice creating and using a class
** Use the class 'Dog' to create to
** instances of the class, dog1 and dog2.
** Assign dog1 the name: Trixie
** Assign dog2 the name: Kali
** Assign dog1 the license #1234
** Assign dog2 the license #5678
** Print the information for each dog.
*/

#include "Classes Programming Quiz.hpp"

int main()
{
    Dog dog1;
    dog1.setName("Trixie");
    dog1.setLicenseNumber(1234);
    
    
    
    Dog dog2;
    dog2.setName("Kali");
    dog2.setLicenseNumber(5678);

    dog1.printInfo();
    cout << "\n";
    dog2.printInfo();


    return 0;
}
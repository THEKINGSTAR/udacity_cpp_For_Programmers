/*Fix the errors and get an error free compilation and execution.*/

//---------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------BEFOR FIX------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------
/*
#include<input.txt>
void main()
{
    int coEff1, coEff2, constant;
    int exp1, exp2;
    int y;
    int x;
    //Calculate the value of y for a user defined three term polynomial
    //Get the coefficients, exponents, and the constants
    std::cout>>"What is the first coefficient?";
    std::cin<<coeff1;
    std::cout<<coeff1<<\n";
    std::cout<<"What is the exponent of the first term?";
    std::cin>>Exp1;
    std::cout<<Exp1<<"\n";
    std::cout<<"What is the second coefficient?";
    std::cin>>coeff2;
    std::cout<<coeff2<<"\n":
    std::cout<<"What is the exponent of the second term?";
    std::cin>>exp2;
    std::cout<<exp2<<"n";
    std::cout<<"What is the constant?";
    std::cin>>>constant;
    std::cout<<constant<<"\n";
    //Print the complete equation
    std::cout<<"The polynomial we are solving is:\n";
    std::cout<<"\t"<<coeff1<<"*x^exp1<<" + "<<coEff2<<"*x^"<<exp2<<"+ "<<constant;
    std::cout<<"\nWhat is the value of x?";
    std::cin>>x;
    std::cout<<x<<"\n";
    //Solve the equation with the given x
    y = coeff1*power(x,Exp1) + coeff2*power(x,exp2);    
    std::cout<<"y = "<<coeff1<<"*"<<x<<"^"<<exp1<<" + "<<coeff2<<"*"<<x<<"^"<<exp2 + <<constant<<" = "<<y;
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------AFTER FIXING------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------

/*Fix the errors and get an error free compilation and execution.*/

    #include<iostream>
    #include <cmath>

    int main()
    {
        int coEff1, coEff2, constant;
        int exp1, exp2;
        int y;
        int x;
        //Calculate the value of y for a user defined three term polynomial
        //Get the coefficients, exponents, and the constants
        std::cout<<"What is the first coefficient?";
        std::cin>>coEff1;
        std::cout<<coEff1<<"\n";
        std::cout<<"What is the exponent of the first term?";
        std::cin>>exp1;
        std::cout<<exp1<<"\n";
        std::cout<<"What is the second coefficient?";
        std::cin>>coEff2;
        std::cout<<coEff2<<"\n";
        std::cout<<"What is the exponent of the second term?";
        std::cin>>exp2;
        std::cout<<exp2<<"\n";
        std::cout<<"What is the constant?";
        std::cin>>constant;
        std::cout<<constant<<"\n";
        //Print the complete equation
        std::cout<<"The polynomial we are solving is:\n";
        std::cout<<"\t"<<coEff1*x<<"^"<<exp1<<" + "<<coEff2*x<<"^"<<exp2<<"+ "<<constant;
        std::cout<<"\nWhat is the value of x?";
        std::cin>>x;
        std::cout<<x<<"\n";
        //Solve the equation with the given x
        y = coEff1*pow(x,exp1) + coEff2*pow(x,exp2);    

        //std::cout<<"y = "<<coeff1<<"*"<<x<<"^"<<exp1<<" + "<<coeff2<<"*"<<x<<"^"<<exp2<<"+ "<<constant<<" = "<<y;

        std::cout<<"y = "<<coEff1*x<<"^"<<exp1<<" + "<<coEff2*x<<"^"<<exp2<<" + "<<constant<<" = "<<y;

        return 0;
    }
//---------------------------------------------------------------------------------------------------------------------------------

/*
intput.txt

3
2
4
1
32
4
*/

/*
Try Again
There was an error grading your submission!

Your answer does not match mine. Mine is y = 12754649

Your output is :

What is the first coefficient? 5 
What is the exponent of the first term? 6 
What is the second coefficient? 19 
What is the exponent of the second term? 6
What is the constant? 65 
The polynomial we are solving is: 5x^6 + 19x^6+ 65 
What is the value of x? 9 
y = 59^6 + 199^6 + 65 = 12754584

Your program output is incorrect.

Please correct the differences and hit Submit again.

Thank you for your submission!

*/
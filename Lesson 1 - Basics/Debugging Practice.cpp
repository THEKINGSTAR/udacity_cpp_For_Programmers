#include "Debugging Practice.hpp"


 int main ()
 {
   int FTemp = 0 ;
   int CTemp = 0 ;

   cout << "Enter a Farenheit temperature: ";
   cin  >> FTemp;

   CTemp = (FTemp - 32.0) / (9.0/5.0);
   cout << "\n"<<FTemp << " in Farenheit = "  << CTemp << " in Celsius\n";
   
   return 0 ;
 }

 /*
Your program output is incorrect.

Please compare with the desired output, correct the differences and hit Submit again.

Enter a Farenheit temperature: 
56 in Farenheit = 24 in Celsius
 */

/*
#include "main.hpp"

     int main ()
      {
        float FTemp = 0;
        float CTemp = 0;

        cout << "Enter a Farenheit temperature: ";
        cin>>FTemp;

        CTemp = (FTemp - 32.0) / (9.0/5.0);
        cout << "\n"<<FTemp <<" in farenheit = " <<CTemp<<" in Celcius\n";
        return 0;
      }
*/
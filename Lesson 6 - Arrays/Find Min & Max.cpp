/*

For this programming quiz, we are going to find the min and max and average of 15 numbers that a user will input.
The numbers range from 0 to 100.
We will do it now for practice and then we will do it with arrays. 
So you do not have to keep all fifteen numbers stored in memory.
 Find the min and max and average of 15 numbers that a user will input. 
 The numbers range from 0 to 100.
So you do not have to keep all fifteen numbers stored in memory.


*/

/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100.
**We will do it now for practice and again later when we learn arrays and
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/
#include <iostream>

using namespace std;

int main(int argc, const char** argv) 
{
    int max_number  = 0 ;
    int min_number  = 100 ;
    int user_input  = 0 ;

    int numbers_sum = 0 ;
    float average   = 0 ;

    for(int i =0;i<15;i++)
    {   
        cin>>user_input;
            if(user_input < min_number )
            {
                if(min_number > max_number)
                {
                    max_number = min_number;
                    min_number = user_input;
                }
                else
                {
                    min_number = user_input;
                }
            }
            else if (user_input > max_number)
            {
                    max_number = user_input;
            }
        numbers_sum +=user_input;
    }

    cout << "Min nuber is " << min_number << endl;

    cout << "Max nuber is " << max_number << endl;

    average = numbers_sum/15.0;
    cout <<"Average = "<<average <<endl;


    return 0;
}

/*
INPUT

14 23 88 97 60 54 33 26 100 97 55 63 89 78 69
*/

/*
14
23
88
97
60
54
33
26
100
97
55
63
89
68
69
Min nuber is 14
Max nuber is 100
Average = 62.4
*/
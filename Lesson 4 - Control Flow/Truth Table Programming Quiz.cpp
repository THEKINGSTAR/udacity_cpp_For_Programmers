/*Goal: use logical and relational operators in a C++ program. 
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include<iostream>
using namespace std;

int main()
{
    int A_arr [] = {1,1,1,1,0,0,0,0};
    int B_arr [] = {1,1,0,0,0,1,0,1};
    int C_arr [] = {1,0,1,0,0,0,1,1};
    int Q;

    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";

    for(int i =0;i<8;i++)
    {
        int A=A_arr[i];
        int B=B_arr[i];
        int C=C_arr[i];
    //(A and B and C) or (A and( (not B) or (not C))) = Q
    Q = (A && B && C) || (A && (!B || !C));
    //Use this output format
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t\t"<<(!B||!C)<<"\t\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    }
    return 0;
}

/*
A       B       C       (A && B && C)           (!B||!C)                (A&&(!B||!C))           Q
1       1       1               1                       0                       0               1
1       1       0               0                       1                       1               1
1       0       1               0                       1                       1               1
1       0       0               0                       1                       1               1
0       0       0               0                       1                       0               0
0       1       0               0                       1                       0               0
0       0       1               0                       1                       0               0
0       1       1               0                       0                       0               0
0       1       1               0                       0                       0               0

*/
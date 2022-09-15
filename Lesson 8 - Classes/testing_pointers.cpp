#include <iostream>


using namespace std;


int main(int argc, const char** argv) 
{
    int x =5;
    int *ptrx =NULL;
    ptrx = &x;

    *ptrx =51;

    cout<<ptrx<<endl;

    cout<<x;

    return 0;
}
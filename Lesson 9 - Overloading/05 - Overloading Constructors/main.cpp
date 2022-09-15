/*

We saw in the Classes lesson that we can have two kinds of constructors:

those that do not have input parameters
those that do have them.
There will be times when we would like to have both options in a class. Luckily, we can use Overloading to achieve it!

When create a class we can have two different constructors and the compiler will know which one we want.

The program below is an example of a class that has two kinds of constructors.

*/

/*Goal: learn about overloading constructors*/

#include "main.hpp"

int main()
{
    Square s1;
    Square s2(4, 3);
    cout << "s1 dimensions are: " << s1.getWidth() << "," << s1.getLength();
    cout << "\ns2 dimensions are: " << s2.getWidth() << "," << s2.getLength();
    return 0;
}
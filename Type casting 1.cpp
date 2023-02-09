/******************************************************************************
1.Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
Complex c1;
Int x=5;
c1=x;
return 0;
}

*******************************************************************************/

#include <iostream>

using namespace std;

class complex{
        int x;
    public:
       void operator =(int x)    // assignment operator overloading 
        {
            this->x=x;
        }
        void display()
        {
            cout<<x<<endl;
        }
    
};
int main()
{
    complex c1;
    int x=5;
    c1=x;    //asssigning primitive to complex
    
    c1.display();

    return 0;
}

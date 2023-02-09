/******************************************************************************
2. Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
return 0;
}

*******************************************************************************/

#include <iostream>

using namespace std;

class complex{
        int x;
        int y;
    public:
        void setdata(int x,int y)          //setter
        {
            this->x=x;
            this->y=y;
        }
        operator int()                 //int type casting overloading
        {
            return x;
        }
      
        void display()
        {
            cout<<x<<" "<<endl;
        }
    
};
int main()
{
    complex c1;
    c1.setdata(3,5);
    int x;
    x=c1;             //complex to int conversion
    
    c1.display();

    return 0;
}

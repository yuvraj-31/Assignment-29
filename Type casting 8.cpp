/******************************************************************************
8. Create a Rupee class and convert it into int. And Display it.

Example-
int main()

{
Rupee r = 10;
int x = r;
cout<<x;
return 0;
}

*******************************************************************************/

#include <iostream>

using namespace std;

class Rupee{
        int x;
    public: 
         Rupee(int x)
         {
             this->x=x;
         }
         void display()
         {
             cout<<"Rupee = "<<x<<endl;
         }
         operator int()
         {
             return x;
         }
};
int main()
{
    Rupee r1=15;
    r1.display();
    int a;
    a=r1;
    cout<<"a = "<<a;

    return 0;
}

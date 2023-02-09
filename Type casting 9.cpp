/******************************************************************************
9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.

Example-
int main()

{
int x = 50;
Dollar d;
d = x;
d.display();
return 0;
}

*******************************************************************************/

#include <iostream>

using namespace std;

class Dollar{
        int x;
    public: 
    Dollar()
    {
        cout<<"Default called"<<endl;
    }
         void operator =(int x)
         {  
             cout<<"operator overload called"<<endl;
             this->x=x;
         }
         void display()
         {
             cout<<"Dollar = "<<x<<endl;
         }
         operator int()
         {
             return x;
         }
};
int main()
{
    Dollar d1;
    int x=50;
    d1=x;
    d1.display();
    

    return 0;
}

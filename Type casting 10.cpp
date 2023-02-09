/******************************************************************************
10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.

Example-
int main()

{
Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
return 0;
}

*******************************************************************************/

#include <iostream>

using namespace std;
class Rupee{
        int y;
    public:
         Rupee(int y)
         {
             this->y=y;
         }
         
         int getdata()
         {
             return y;
         }
         void display()
         {
             cout<<"Rupee = "<<y<<endl;
         }
};
class Dollar{
        int x;
    public: 
    
    Dollar(Rupee r)
    {
        this->x=r.getdata()*100;
    }
         
         void display()
         {
             cout<<"Dollar = "<<x<<endl;
         }
       
         operator Rupee()
         {  
             cout<<"type ";
             return x;
         }
};

int main()
{   
    Rupee r1=30;
    
    Dollar d1=r1;
    r1.display();
    d1.display();
    r1=d1;
    r1.display();
    

    return 0;
}

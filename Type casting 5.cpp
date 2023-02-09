/******************************************************************************
5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
Invent1 s1=(4,5);
Invent2 d1;
float tv;
tv=s1;
d1=s1;
return 0;
}

*******************************************************************************/

#include <iostream>

using namespace std;


class invent1{
       float x;
       float y;
    public: 
      invent1(float x, float y)
      {   
          cout<<"invent1 copy constructor called"<<endl;
          this->x=x;
          this->y=y;
      }
       operator float()        //type cast operator overloading
       {   
           cout<<"float type cast operator  called"<<endl;
           return x;
       }
       float getdata()
       {
           return x;
       }
        
         void display()
         {
             cout<<x<<" "<<y<<endl;
         }
         
};
class invent2{
        float x;
        float y;
        
    public:
    invent2()
    {
        
    }
       invent2(invent1 i1)
       {    
           cout<<"parametrized constructor called for type conversion"<<endl;
             this->x=i1.getdata()  ;
             this->y=i1.getdata()  ;
       }
     
        void display()
        {
            cout<<x<<" "<<y<<endl;
        }
    
};

int main()
{
   invent1 s1(4,5);
   invent2 d1;
   s1.display();
   float tv;
   tv=s1;
    d1=s1;
    d1.display();

    return 0;
}

/******************************************************************************
3. Create a Product class and convert Product type to Item type using constructor
int main()
{
Item i1;
Product p1;
p1.setData(3,4);
i1=p1;
return 0;
}

*******************************************************************************/

#include <iostream>

using namespace std;

class product{
        int x;
        int y;
        
    public:
       void setdata(int x,int y)
       {
           this->x=x;
           this->y=y;
       }
       int getdata1()
       {
           return x;
       }
       int getdata2()
       {
           return y;
       }
      
        void display()
        {
            cout<<x<<" "<<y<<endl;
        }
    
};
class item{
       int x;
       int y;
    public: 
        item()
        {
            
        }
         item(product p)
         {
             this->x=p.getdata1();
             this->y=p.getdata2();
         }
         void display()
         {
             cout<<x<<" "<<y<<endl;
         }
         
};

int main()
{
    product p1;
    item i1;
    p1.setdata(20,30);
    p1.display();
    i1=p1;         // conversion from product type to item type
    i1.display();
    

    return 0;
}

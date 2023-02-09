/******************************************************************************
4. Create Product class and convert Product type to Item type using casting operator
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


class item{
       int x;
       int y;
    public: 
       item()
       {
         cout<<"item default called"<<endl;
       }
        item(int x)
        {  
            cout<<"item parameterized called"<<endl;
            this->x=x;
            this->y=x;
        }
       
        
         void display()
         {
             cout<<x<<" "<<y<<endl;
         }
         
};
class product{
        int x;
        int y;
        
    public:
       void setdata(int x,int y)
       {
           this->x=x;
           this->y=y;
       }
      
        operator item()
        {  
            cout<<"product type cast operator called"<<endl;
            return x;
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

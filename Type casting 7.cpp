/******************************************************************************
7. Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
Time t1(2,30);
t1.display();
Minute m1;
m1.display();
m1=t1 // Fetch minute from time
t1.display();
m1.display();
return 0;
}

*******************************************************************************/

#include <iostream>

using namespace std;

class Time{
       int hour;
       int min;
    public:
        Time(int hour,int min)
        {
             this->hour=hour;
            this->min=min;
           
        }
        int getdata()
        {
            return min;
        }
        void display()
        {
            cout<<"hours ="<<hour<<" "<<"minutes = "<<min<<endl;
        }
};
class Minute{
      int min;
      int sec;
      public:
         Minute()
         {
             
         }
         void operator =(Time t)
         {
             this->min=t.getdata();
             this->sec=t.getdata()/60;
             
         }
         void display()
         {
             cout<<" minutes ="<<min<<" "<<"seconds ="<<sec<<endl;
         }
         
};
int main()
{
    Time t1(2,30);
    t1.display();
    Minute m1;
    m1.display();
    m1=t1;
    m1.display();

    return 0;
}

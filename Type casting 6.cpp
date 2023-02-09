/******************************************************************************
6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
int ) to Time class.

Example-
int main()

{
int duration;
cout<<”Enter time duration in minutes”;
cin>>duration;
Time t1 = duration;
t1.display();
return 0;
}

*******************************************************************************/

#include <iostream>

using namespace std;


class Time{
    int s;
    public:
       Time(int x)
       {
           this->s=x*60;
       }
       void display()
       {
           cout<<"time in seconds is "<<s<<endl;
       }
};

int main()
{
   int duration;
   cout<<"Enter time duration in minutes"<<endl;
   cin>>duration;
   Time t1=duration;
   t1.display();

    return 0;
}

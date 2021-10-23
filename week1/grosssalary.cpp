#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
     int gsal,sal;
    cout<<"enter the salary  ";
    cin>>sal;

    if ( sal<=10000)
          
     {
       gsal=sal + 0.2*sal + 0.8*sal;
       cout<<"gross salary is  "<<gsal; 

     }
    else if (sal>10000 && sal<=20000) 
      {
          gsal=sal + 0.25*sal + 0.9*sal;
          cout<<" gross salary is "<<gsal;
      } 
     else if( sal>20000 )
     {
         gsal= sal + 0.3*sal + .95*sal;
         cout<<" gross salary is "<<gsal;
     }
     return 0;
}
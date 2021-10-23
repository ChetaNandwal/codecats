#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main()
{
 system("clear");
 int a,b,c,x1,x2;
 cout<<"enter the coeffecients of the quadratic equation  ";
 cin>>a>>b>>c;

 if((b*b-4*a*c)<0)
     {
     cout<<" no real roots ";

     }
 else
      {
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);

        cout<<"the two roots are   "<<endl<<x1 <<endl<< x2;
      } 
return 0;

}
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int y,num,i,a,x=0;
    cout<<"enter the number to be checked ";
    cin>>num;
    a=num;

    while(num!=0)
    {
        x=num%10;
        num=num/10;
        y=y+x*x*x;
    }
    
    if(y==a)
     cout<<"the number is an armstrong number ";
     else
     cout<<"it is not an armstrong number ";

}


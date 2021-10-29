#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int  num, pow,i,x=1;
    cout<<"enter the number and the power to be found out ";
    cin>>num>>pow;
    for(i=0;i<pow;i++)
    {
        x=x*num;
    }
    cout<<x;
}
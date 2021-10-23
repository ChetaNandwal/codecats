#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int a,b,c;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"largest number is=  "<<a;
        }
        else 
        {
            cout<<"largest number is=  "<<c;
        }
        
    }
    else 
    {
        if (b>c)
        {
            cout<<"largest is ="<<b;
        }
        else{
            cout<<"largest is  "<<c;
        }

    }
    return 0;
}
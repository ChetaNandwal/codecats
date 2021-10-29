#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int  i,x,a;
    cout<<"enter number to be checked ";
    cin>>x;
    
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            a+=1;
            break;
        }
                
    }
    if(a==0)
    {
        cout<<"number is a prime ";

    }
    else
    {
    cout<<"number is not a prime number";
    }



}
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int  i,x;
    cout<<"enter number to be checked ";
    cin>>x;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            cout<<"not a prime";
             break;
        }
        else cout<<"is a prime";
        break;
    }


}
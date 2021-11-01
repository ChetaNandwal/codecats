#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int  i,x,z,count,a[8],j;
    cout<<"enter the nuber of elements you want to enter ";
    cin>>x;

    cout<<"enter the numbers ";
    for(i=0;i<x;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<x;j++)
    {

    
    for(i=2;i<a[j]/2;i++)
    {
        if(a[j]%i==0)
        {
            z+=1;
            break;
        }
                
    }
    if(z==0)
    {
        //cout<<"number is a prime ";
         count+=1;
    }
    }
    cout<<" "<<count;



}
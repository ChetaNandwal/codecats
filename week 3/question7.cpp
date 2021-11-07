#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int a[10],b,large,size,small,i; 
    cout<<"enter the size of array ";
    cin>>size;

    cout<<"enter the elements ";
    for(i=0;i<size;i++)

    {
      cin>>a[i];
    }
        
    b=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]>=b)
        {
            large=a[i];
        }
        if(a[i]<=b)
        {
            small=a[i];
        }
    }
cout<<"largest is "<<large<<" smallest  is "<<small;

}
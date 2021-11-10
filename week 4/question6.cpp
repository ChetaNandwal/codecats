
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int size;
    cout<<"enter the size of array ";
    cin>>size;

    int count=0,num,i,j,a[size];

    cout<<"enter the sorted array ";
    for(i=0;i<size;i++)
    {
    cin>>a[i];
    }

    cout<<"enter the element to be searched ";
    cin>>num;

    for(i=0;i<size;i++)
    {
        if (a[i]==num)
        {
            cout<<i;
            count++;
        }
        
    }
    if(count==0)
    {
        for(i=0;i<size;i++)
             {
                 if(num>a[i]  &&   num<a[i+1])
                 {
                     cout<<i+1;
                 }
             }
    }
    
}
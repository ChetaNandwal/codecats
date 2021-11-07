#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int count=0,a[50],i,size,element;
    cout<<"enter the size of array  ";
    cin>>size;
    cout<<"enter the elements of array ";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element to be checked ";
    cin>>element;
    for(i=0;i<size;i++)
    {
        if(a[i]==element)

    {
        count+=1;
    }
    }
    cout<<"frequency of "<<element<<" is  "<<count;
}
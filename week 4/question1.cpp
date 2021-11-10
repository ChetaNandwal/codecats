#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the no. of elements to be enetered";
    cin>>size;
    int i,a[size];
    cout<<"enter the elements ";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=size-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
}
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int n,x=0,i;
    
    cout<<"enter the number of natural no. to be added  ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" ";
         x+=i;
    }
    cout<<"sum is "<<x;
}
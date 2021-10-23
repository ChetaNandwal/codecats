#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int a,b;
    cout<<"enter the number to be checked   " ;
    cin>>a>>b;
    if(a>b)
    {
        cout<<" greater is  "<<a;
    }
    else   cout<<"greater is "<<b;
    return 0;
}
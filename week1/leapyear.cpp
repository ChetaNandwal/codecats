#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int year;
    cout<<"enter the year   " ;
    cin>>year;
    if(year%4==0)
    {
     cout<<"year is a leap year";   
    }
    else cout<<"it is not a leap year" ; 
    return 0;
}
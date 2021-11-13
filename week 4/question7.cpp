#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
   long  int x,j,i;

    cout<<"enter the initial position ";
    cin>>x;
    cout<<"enter the number of jumps ";
    cin>>j;
    

    for(i=1;i<=j;i++)
    {
   
        if(x%2==0)
        {
           x=x-i;
        }
        else x+=i;
    }
    cout<<"final position is: "<<x;
}

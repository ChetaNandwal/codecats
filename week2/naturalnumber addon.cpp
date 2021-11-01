
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int  num,i,count,odd;
    cout<<"enter the number upto you want tp add ";
    cin>>num;

    for(i=0;i<=num;i++)
    {

        if(i%2==0)
        {
            count+=i;
        }
        else
        {
            odd+=i;
        }
    }
    cout<<"sum of even numbers is "<<count<<" and of the odd numbers is "<<odd;

}
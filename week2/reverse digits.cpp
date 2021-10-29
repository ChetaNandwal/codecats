#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int y,num,i,a,x=0;
    cout<<"enter the number to be reversed ";
    cin>>num;
    

    while(num!=0)
    {
        x=num%10;
        num=num/10;
        cout<<x<<endl;
    }
    

}


#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int a[8]={2000,500,200,100,50,20,10,1},i,x=0,num,amount;

    cout<<"enter the amount ";
    cin>>amount;
    for(i=0;i<8;i++)
    {
        num=amount/a[i];
        cout<<"no. of  "<<a[i]<<" notes = "<<num<<endl;
        amount=amount-num*a[i];
        x+=num;
    }
    cout<<x;
}
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int i,j,row;
     cout<<"enter the number of rows ";
     cin>>row;
     for(i=0;i<row;i++)
     {
       for(j=0;j<=i;j++)
       {
           printf("*");
       }
     cout<<"\n";
     }
}
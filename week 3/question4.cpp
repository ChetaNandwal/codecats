#include<iostream>
using namespace std;
int main()
{
    int i,j,row;
    cout<<"enter no. of rows ";
    cin>>row;
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
           if((i+j)==(row-1) || i==j)
           cout<<"*";
           else
           cout<<" ";
        }
        cout<<"\n";
    }
}
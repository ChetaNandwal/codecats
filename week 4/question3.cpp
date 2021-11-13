#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{

    system("clear");
    int i,l,j,a[5],b[5];

    cout<<"enter the elements ";
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
for(j=0;j<2;j++)
{
 {
    
    for(i=0;i<=3;i++)
    {
        b[i+1]=a[i];
    }
    
    b[0]=a[4];
}
    for(l=0;l<5;l++)
    {
        a[l]=b[l];
    }
}
    
    
    for(i=0;i<5;i++)
    cout<<b[i]<<" ";

}

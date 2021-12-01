#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{

    system("clear");
    int i,l,n,k,j,a[10],b[10];
    cout<<"enter size of array ";
    cin>>n;

    cout<<"enter the elements ";
    for(i=0;i<=n;i++)
    {
        cin>>a[i];
    }

    cout<<"how many times you want to shift ";
    cin>>k;

for(j=0;j<k;j++)
{
   b[0]=a[n-1];
   {
     
    for(i=0;i<(n-1);i++)
    {
        b[i+1]=a[i];
    }
    
   
 }
 
    for(l=0;l<n;l++)
    {
        a[l]=b[l];
    }
}
    
    
    for(i=0;i<n;i++)
    cout<<b[i]<<" ";

}

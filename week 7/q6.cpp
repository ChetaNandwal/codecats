#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    system("clear");
    int n;
    cout<<" ENTER THE SIZE OF THE MATRIX "<<endl;
    cin>>n;
     
     int i,j;
    int a[n][n];
    cout<<" ENTER THE ELEMENTS OF THE ARRAY "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

int count=0;
   for(j=0;j<=(n-1);j++)
    {
        for(i=0;i<n && j<n ;i++)
        {
            cout<<a[i][j]<<"\t";
            j++;
        }
       count++;
       j=(count-1);
    }
        
           
        
            
        
}
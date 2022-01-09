#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int m,n;
    
    cout<<" ENTER ROWS AND COLUMNS OF THE MATRIX "<<endl;
    cout<<" ROWS :> "<<endl;
    cin>>m;
    cout<<" COLUMNS :> "<<endl;
    cin>>n;

    int a[m][n];
    int i,j;

    cout<<" ENTER MATRIX";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
      
    
  
   
for(j=0;j<n;j++)
{
    if(j%2==0)
   {
    for(i=0;i<m;i++)
    {
         cout<<a[i][j]<<"\t";
    }
   }
   else 
   {
       for(i=(m-1);i>=0;i--)
       {
           cout<<a[i][j]<<"\t";
       }
   }
}




}
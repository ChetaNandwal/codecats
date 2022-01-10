#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n;
    cout<<" ENTER SIZE OF THE ARRAY "<<endl;
    cin>>n;
     int a[n][n];
       int i,j;
    cout<<"  ENTER THE ELEMENTS OF THE ARRAY "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
    
        
    }
   
  
    int dir=0;

    while(true)
    {
        dir = (dir + a[i][j]) % 4;
         
         if(dir==0)
         j++;
         else if(dir==1)
         i++;
         else if(dir==2)
         j--;
         else if(dir==3)
         i--;

         if(i<0)
         {
             i++;
             break;
         } 
         else if(j<0)
         {
             j++;
             break;
         }
         else if(i==(n-1))
         {
             i--;
             break;
         }
         else if(j==(n-1))
         {
             j--;
             break;
         }

    }
cout<<i<<"\t"<<j;

}
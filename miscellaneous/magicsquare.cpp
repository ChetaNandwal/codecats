
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("clear");
    int n;
    cout<<" ENTER ORDER OF MATRIX ";
    cin>>n;
    int a[n][n];
    int i,j,mid=0;

    mid=(n*n+1)/2;

  
    int x1=n/2;
    int x2=(n-1);


    for(i=0;i<n;i++)
    {
        if(i%2==0) x1=(x1+1)%n;
       else x2=(x2+1)%n;   

        for(j=0;j<n;j++)
        {
            if(i==0 && j==0) { a[i][j]=mid+n/2;}

             
            else  if(j==0) a[i][j]=( a[i-1][n-1] - 1) ;
             
             else if(j==x1 || j==(x2+1))
                     {
                           a[i][j]=a[i][j-1] - 2;            
                             if(a[i][j]<=0)
                             {
                                  a[i][j]=a[i][j]+ ( n*n );
                             } 
                     }
             else{ 
             a[i][j]=a[i][j-1]-(n+2);
                           if(a[i][j]<=0)
                             {
                                  a[i][j]=a[i][j]+ ( n*n );
                             } 
             }
        }
       
    }

 for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
cout<<"\n";
    }






}
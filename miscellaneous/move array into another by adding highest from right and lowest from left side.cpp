#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{     
    int n=0;
    cout<<" ENETER THE SIZE OF THE ARRAY ";
    cin>>n;

    int i,j;
    int a[n];
    int b[n];
int x=0,y=0,k=0;


      cout<<" ENTER ELEMENTS OF THE ARRAY ";
      for(i=0;i<n;i++)
      cin>>a[i];


    for(i=0;i<n;i++)
    {
      if(i<(n-1))
      {  
          x=a[i+1];
        for(j=i+1;j<n;j++)
        {
             
            if(x<a[j+1])
             x=a[j+1];
        }
        y=a[0];
        for(k=0;k<=i-1;k++)
        {
            if(y>a[k+1])
            y=a[k+1];
        }
      
        if(i==0)
        {
               b[i]=x;
        }
       else if(i>0 && i<=8)
       {
            
            

            b[i]=x+y;
        }
      }

        if(i==(n-1))
         b[i]=y;






    }



for(i=0;i<n;i++)
    cout<<b[i]<<"\t";

}


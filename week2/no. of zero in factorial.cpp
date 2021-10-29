#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
     system("clear");
    int x=5,a[5],i,j,n,count=0,y=0,b[50];
    cout<<"enter the no. of entries ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }

    for(i=0;i<n;i++)
    {
        count=0;
        x=5;
         for(j=0;j<=a[i];j++)
         {
           

            if(x<=a[i])
            {
                count+=a[i]/x;
            x=x*5;
            
            }

            else
            {
             break;
            }
             
        }
 
     cout<<count<<endl;
    }

}

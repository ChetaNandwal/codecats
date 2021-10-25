#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int c,y=0,x=0,z;
    int a[50][50],i,j;
    cout<<"enter rows and columns  ";
    cin>>c;

    for(i=0;i<c;i++)
    {

        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    
for(i=0;i<c;i++)
{ 
    for(j=0;j<c;j++)
    {  
        if(i=j)
        {
           
            x+=a[i][j];
        }
    }
    x+=a[0][0];
}
for(i=0;i<c;i++)
{
    for(j=0;j<c;j++)
    {
        
       if((i+j)==(c-1))
       {
          
        y+=a[i][j];
        //cout<<a[i][j];
       } 
        
    }
    
}

cout<<y-x;

return 0;
} 
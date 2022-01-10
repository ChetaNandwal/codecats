
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
system("clear");
    int n,m;
    cout<<" ENTER ROWS AND COLUMNS OF THE ARRAY "<<endl;
    cin>>n>>m;

    int a[n][m];
     int i,j;

    cout<<" ENTER ELEMENTS OF THE ARRAY "<<endl;
     
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    int count=0;
   
    
    for(i=0;i<n;i++)
    {
         for(int k=0;k<count;k++)
            cout<<"\t";

        for(j=count;j<m;j++)
        { 
           

            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
        count++;

       
    }

    
    

}
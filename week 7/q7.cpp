#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    system("clear");
    int n;
    cout<<" ENTER THE SIZE OF THE ARRAY "<<endl;
    cin>>n;

    int a[n][n];
    int i,j;

    cout<<" ENTER THE ELEMENTS OF THE ARRAY "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

        int num=0;
        int count=0;
        
        cout<< " ENTER THE ELEMENT  YOU WANT TO FIND "<<endl;
        cin>>num;

   for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(a[i][j]==num)
           {
               cout<< " ELEMENT FOUND AT ("<<i<<","<<j<<")";
               break;
           } 
        }
    }

   
   

}
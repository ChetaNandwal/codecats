#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
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
    int res=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                res=res + a[i][j];
            }
        }
    }
int ld=0;
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==(n-1))
            {
                ld=ld + a[i][j];
            }
        }
    }
 
    cout<<" SUM OF RIGHT DIAGONAL = "<<res<<" AND LEFT DIAGONAL = "<<ld;


}

#include<iostream>

using namespace std;
int main()
{
   
    int i,j,n,x;
    cout<<"enter the no. of rows ";
    cin>>n;

    for (i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            cout<<" ";
        }
        for(x=1;x<=(2*i-1);x++)
        {
        cout<<"*";
        }
        cout<<"\n";
    }
}

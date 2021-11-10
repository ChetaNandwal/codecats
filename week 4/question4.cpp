#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int num;
    cout<<"enter the number of elements you want to enter ";
    cin>>num;
    int i,j,a[num],sum;

    cout<<"enter the elements ";
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }

    cout<<"enter the sum you want to check ";
    cin>>sum;

    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            if((a[i]+a[j])==sum)
            cout<<i<<" "<<j<<endl;
        }
    }
}
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int num;
system("clear");
    cout<<"enter the size of the array ";
    cin>>num;

    int i,j,temp=0,a[num];

    cout<<"enter the elements ";
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }

        
    }
    cout<<"sorted array is ";
    for(i=0;i<num;i++)
    {
        cout<<a[i]<<"\t";
    }
}
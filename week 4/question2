#include<iostream>
using namespace std;
int hsh[20];
int main()
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n];
    cout<<"enter the elements ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        hsh[a[i]]++;
    }
    
    for(int i=0;i<=n;i++)
    {
        if(hsh[i]!=0)
        {
            cout<<"frequency of "<<i<<" is : "<<hsh[i]<<endl;
        }
    }
}


#include<iostream>
using namespace std;
int main()
{
    int *f,i,a=1,n;
    cout<<"enter the number ";
    cin>>n;
    f=&a;

    for(i=1;i<=n;i++)
    {
        *f=(*f)*i;
    }
    cout<<a;
}
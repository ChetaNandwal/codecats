#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int i,a[50],even=0,odd=0,num,epos=0,opos=0,count=0;
    cout<<"enter the number of elements ";
    cin>>num;

    cout<<"enter the elements ";
    for(i=0;i<num;i++)
    {
        cin>>a[i];
        count+=a[i];
    }
    for(i=0;i<num;i++)
    {
        if(a[i]%2==0)
        {
            even+=a[i];
        }
        else
        {
            odd+=a[i];
        }

    }
    for(i=0;i<num;i++)
    {
        if(i%2==0)
        {
            epos+=a[i];
        }
        else
        {
            opos+=a[i];
        }
    }
    
    cout<<"sum of the elements "<<count<<endl;
    cout<<"sum of even numbers  is "<<even<<" and odd numbers is "<<odd<<endl;
    cout<<"sum of even position elements is  "<<epos<<"and odd numbers is  "<<opos<<endl;
}

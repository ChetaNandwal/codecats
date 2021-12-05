
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    string s1;
    cout<<"enter the string ";
    cin>>s1;
    if(s1.at(0)=='0')
    {
        cout<<"not a duck number ";
    }
    else
    {
    int count =0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1.at(i)=='0')
        {
            count++ ;
          break;
        }
    }
    if(count==0)cout<<"it is not a duck number ";
    else cout<<"it is  a duck number ";
    }
}
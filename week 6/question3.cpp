#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int hsh[26]={0};
    string s1;
    int index=0;
    int i,j,k=0;
    cout<<"enter the string ";
    cin>>s1;
    cout<<"enter the least number a character  is appearing in the string ";
    cin>>k;
    for(i=0;i<s1.size();i++)
    {
        index=s1[i]-97;
        hsh[index]++;
    }
     
    for(i=0;i<s1.size();i++)
    {
        if(hsh[s1[i]-97]>=k)
        {
            cout<<s1[i];
        }
        
    }


}

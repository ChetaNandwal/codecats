#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
 system("clear");
    string s1,s2;
    int count=0,i,j;
    cout<<"enter the jewels ";
    cin>>s1;
   // cout<<s1;
    cout<<"enter the stones ";
    cin>>s2;
    for(i=0;i<=s1.size();i++)
    {
        for(j=0;j<s2.size();j++)
        {
            if(s1[i]==s2[j])
            {
                count++;
            }
        }
    }
cout<<count;
}
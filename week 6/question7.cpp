
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    string s1,s2;
    int i,hsh[26]={0},hsh1[26]={0};
    int count=0;
    cout<<"enter string s1 ";
    cin>>s1;
    cout<<"enter string s2 ";
    cin>>s2;
    for( i=0;i<=s1.size();i++)
    {
         int index = s1[i] -'a';
         hsh[index]++;
    }
   for(i=0;i<=s2.size();i++)
    {
         int x = s2[i] -'a';
         hsh1[x]++;
    }
    for(i=0;i<26;i++)
    {
         // cout<<hsh[i];
        if ((hsh[i]-hsh1[i]) >3 || (hsh[i]-hsh1[i])<(-3)   )
        {
           count++;
            break;
        } 
        
    } 
    if(count==1) cout<<"FALSE";
    else cout<<"TRUE";

}
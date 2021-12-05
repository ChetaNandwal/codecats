#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    string str;
    int i,hsh[26]={0};
    cout<<"enter the string ";
    getline(cin,str);
   // cout<<str.size()<<endl;
    for(i=0;i<str.size();i++)
    {
        int index = str[i]-'a';
         hsh[index]++ ;
    }
   /* for(i=0;i<26;i++)†5 {
        if(hsh[i]!=0)
        {
            char x=i+'a';
            cout<<"frequency of "<<x<<" : "<<hsh[i]<<endl;
        } }*/

    string str1;
    int hsh1[26]={0};
    cout<<"enter the second string ";
    getline(cin,str1);
   // cout<<str.size()<<endl;
    for(i=0;i<str1.size();i++)
    {
        int index = str1[i]-'a';
         hsh1[index]++ ;
    }
int count=0,j;
    for(i=0,j=0;i<26 && j<26;i++,j++) 
    {
        if(hsh[i]!=hsh1[j])
        {
            count++;
        }
    }
    if(count==0)cout<<"it is a good string ";
    else cout<<"not a good string";
}
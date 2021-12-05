
#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
    system("clear");
     string s1;
     cin>>s1;
     for(int i=0;i<s1.size();i++)
     {
         if(s1.at(i)=='(' && s1.at(i+1)==')')
         {
             cout<<"o";
             i=i+1;
         }
         else if(s1.at(i)=='(' && s1.at(i+1)=='a' && s1.at(i+2)=='l' && s1.at(i+3)==')')
         {
             cout<<"al";
         i=i+3;
         }
         else cout<<s1.at(i);
     }
}
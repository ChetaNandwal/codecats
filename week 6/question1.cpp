
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
    system("clear");
    int count=0;
    string s1,s2;
    
    cout<<"enter string 1 ";
    getline(cin,s1);
    cout<<"enter string 2 ";
    getline(cin,s2);
    
    for(int i=0;i<s2.size();i++)
    {
        count=0;
         for(int j=0;j<s1.size();j++)
         {
              if(s2.at(i)==s1.at(j))
              {
                  count++;
                  break;
              }
         }
             
         if(count==0)
         {
             cout<<s2.at(i)<<"\n";}
         }
         
    }

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int num; 
     cout<<"enter thw week day(1-7) ";
     cin>>num;

     switch(num)
     {
         case 1:
         cout<<"monday";
         break;
         case 2:
         cout<<"tuesday";
         break;
         case 3:
         cout<<"wednesday";
         break;
         case 4:
         cout<<"thursday";
         break;
         case 5:
         cout<<"friday";
         break;
         case 6:
         cout<<"saturday";
         break;
         case 7:
         cout<<"sunday";
         break;
         default:
         cout<<"wrong input";
     }
     return 0;
}
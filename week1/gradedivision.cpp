#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
 system("clear");
    int m,p,c,b,com,per;
    cout<<"enter marks for mathematics  ";
    cin>>m;
    cout<<"enter marks for physics      ";
    cin>>p;
    cout<<"enter marks for chemistry    ";
    cin>>c;
    
    cout<<"enter marks for biology      ";
    cin>>b;
    cout<<"enter marks for computer     ";
    cin>>com;
       
    per=(m+p+c+b+com)/5;
    if(per>=90) 
    cout<<"grade A ";
    else if(per>=80 && per<90)
    cout<<"grade B";
    else if(per>=70 && per<80)
    cout<<"grade C";
    else if(per>=60 && per<=70)
    cout<<"grade D";
    else if(per>=40 && per<60)
    cout<<"grade E";
    else 
    cout<<"grade F";
    return 0; 
}
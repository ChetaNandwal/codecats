#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    char x;
    cout<<"enter an element  ";
    cin>>x;
    if((x>='a' && x<='z') || (x>='A' && x<='Z'))
    {
        cout<<"entered element is a character ";
    }
    else if(x<='9' && x>='1')
    {
     cout<<"entered element is a numeric character ";

    }
    else 
    {
    cout<<"it is a symbol";
    }
    return 0;
}

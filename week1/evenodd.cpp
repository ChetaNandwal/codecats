#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int num;
    cout<<"enter the number to be checked";
    cin>>num;
    if(num%2==0)
    {
        cout<<"the number enterd is even";

    }
    else{
        cout<<"the number is odd";
    }
    return 0;
}

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    long int z=1,i,x;
    cout<<"factorial of the number  ";
    cin>>x;
    for(i=1;i<=x;i++)

    {  
        z=z*i;
    
    }
    cout<<z;
}
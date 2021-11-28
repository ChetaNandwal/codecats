
#include<iostream>
using namespace std;
int *fn(int *p1,int *p2)
{
    if (*p1>*p2)
    return p1;
    else 
    return p2;
}
int main()
{
    int x,y;
    int *ptr;
    cout<<"enter two numbers ";
    cin>>x>>y;
    ptr=fn(&x,&y);
    cout<<"greater is "<<&ptr;
    
}

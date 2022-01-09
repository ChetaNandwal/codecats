#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    
    int i = 0, j = 0;
    int n ,m;

    cout<<" ENTER NO OF ROWS AND COLUMNS :: "<<endl;
    cout<<" ROWS "<<endl;
    cin>>n;
    cout<<" COLUMNS "<<endl;
    cin>>m;

    int a[n][m];
    int minr = 0, minc = 0;
    int maxr = (n - 1), maxc = (m - 1);
    int count = 0, tne = n * m;
    
    cout<<" ENTER THE MATRIX "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][m];
        }
    }
    
     while (count < tne)
    {
        for (j = minr , i = minr; j <= maxr; j++)
        {
            cout << a[i][j] << "\t";
            count++;
        }
        minr++;

        for (i = minr, j = maxr; i <= maxr; i++)
        {
            cout << a[i][j] << "\t";
            count++;
        }
        maxc--;

        for (j = maxc, i = maxr; j >= minc; j--)
        {
            cout <<  a[i][j] << "\t";
            count++;
        }
        maxr--;

        for (i = maxr , j = minc; i >= minr; i--)
        {
            cout << a[i][j] << "\t";
            count++;
        }
        minc++;
    }
}
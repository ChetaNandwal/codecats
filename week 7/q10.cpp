
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cout << " ENTER THE SIZE OF THE MATRIX " << endl;
    cin >> n;

    int a[n][n], b[n][n];
     int c[n][n];
    int i, j;
    
    cout << "  ENTER ELEMENTS OF FIRST MATRIX " << endl;
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    
    cout << "  ENTER ELEMENTS OF SECOND  MATRIX " << endl;
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }
    
   
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << c[i][j] << "\t";
        }
        cout << "\n";
    }
}
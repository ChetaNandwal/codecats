#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    int i = 0, j = 0;
    int n;
    cout << " ENTER THE SIZE OF THE ARRAY " << endl;
    cin >> n;
    int a[n][n];

    cout << " ENTER THE ELEMENTS OF THE ARRAY " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout<<" AFTER ROTATING 90 DEGREES "<<endl;
    for (j = 0; j < n; j++)
    {
        for (i = (n - 1); i >= 0; i--)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}
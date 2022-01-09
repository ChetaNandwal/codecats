#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int s;
    cout<<"  ENTER SIZE OF THE MATRIX "<<endl;
    cin>>s;
    int a[s][s] ; 
    int b[s][s] ;
    int c[s][s] ;
    int i, j;
    int k = 0, l = 0, m = 0, n = 0;



     cout<<" ENTER FIRST MATRIX "<<endl;
     for (i = 0; i < s; i++)
    {
        for (j = 0; j < s; j++)  
            {
                cin>>a[i][j];
            }
    }
    cout<<" ENTER SECOND MATRIX "<<endl;
    for (i = 0; i < s; i++)
    {
            for (j = 0; j < s; j++)
            {
                cin>>b[i][j];
            }
    }



    for (i = 0; i < s; i++)
    {
        n=0;
        for (j = 0; j < s; j++)
        {
            c[i][j] = a[k][l] * b[m][n] + a[k][l + 1] * b[m + 1][n];

            n++;
        }

        k++;
    }




cout<<" RESULT :>"<<endl;
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < s; j++)
        {
            cout << c[i][j] << "\t";
        }
        cout << "\n";
    }
}
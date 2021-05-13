#include<iostream>
using namespace std;

int main()
{
    /*#ifndef ONLINE_ JUDGE
        freopen(_Filename: "input.txt", _Mode: "r", _File:stdin);
        freopen(_Filename: "output.txt", _Mode: "w", _File:stdout);
    #endif*/

    int n, m;
    cin >> n >> m;
    int array[n][m];

    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
        
    }

    cout << "Matrix is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
            
}
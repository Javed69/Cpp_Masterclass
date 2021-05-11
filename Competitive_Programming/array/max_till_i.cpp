/*
Approach
1.Keep a variable max which stores the maximum tiil the ith element
2.Iterate over the array and update max = max(max, a[i])
*/

#include<iostream>
using namespace std;

int main()
{   
    int mx = -19999999;
    int n;
    cin>>n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, array[i]);
        cout<<mx<<endl;
    }
    
    return 0;
}
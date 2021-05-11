// Google Kickstart Question
// Brute Force :
// 1.Iterate over all elements and check if it is record breaking day or not.
// Note. To check iif a a[i] is a record breaking day, we have to iterate over a[0],a[1],.....,a[i-1].
// Time complexity for this operation : O(n)
// Over all time complexity : O(n^2)

// optimised approach:
// for step(1) : we need to check if a[i] > {a[i-1],a[i-2],...,a[0]}
// For this we will need to keep a variable max, which will store the maximum value till a[i].
// Then we need need to check,
// a[i] > max
// a[i] > a[i+1] ,{ if i+1 < n}
// update max , max = max(max, a[i]
// step(1) time complexity reduces to O(1)
// Over all time complexity : O(n)


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n+1];
    array[n] = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
     
    if (n ==1)
    {
        cout << "1" << endl;
        return 0;
    }

    int ans = 0 ;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (array[i] > mx && array[i] > array[i+1])
        {
            ans++;
        }
        mx = max(mx, array[i]);
    }
    
    cout << ans << endl;
    
    return 0;
}
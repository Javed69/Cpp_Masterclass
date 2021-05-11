// Google Facebook Amazon Visa
// Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S
// Burte Force
// Find the sum ogf all possible subarrays.If any of the sum equates to S , output the starting and ending index of the array.
// Time Complexity : O(n^2)

// Optimized:
// keep 2 pointers start and end and a variable currSum form start to end.
// Increment end till currSum + a[end] > S.
// start increasing start unt currSum <= S.
// Time Complexity : O(n)

#include<iostream>
using namespace std;

int main()
{
    int n, s;
    cin>>n>>s;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    int i = 0, j = 0, start = -1, end = -1, sum = 0;

    while (j < n && sum+array[j] <= sum)
    {
        sum += array[j];
        j++;
    }

    if(sum == s)
    {
        cout << i+1 << " " << j << endl;
        return 0;

    }
    
    while(j<n)
    {
        sum += array[j];
        while (sum > s)
        {
            sum -= array[i];
            i++;
        }
        if (sum == s)
        {
            start = i+1;
            end = j+1;
        }
        j++;        
    }
    cout << start << " " << end << endl;
    return 0;
}
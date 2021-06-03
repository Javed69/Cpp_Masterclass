/*
Minimum AND xor OR
Given an array A of N integers. Find out the minimum value of the following expression for all valid i, j.

(Ai and Aj) xor (Ai or Aj), where i != j.

Input format

First line: A single integer T denoting the number of test cases
For each test case:
First line contains a single integer N, denoting the size of the array.
Second line contains N space separated integers A1,A2,...,An
Output format

For each test case, print a single line containing one integer that represents the minimum value of the given expression

Constraints
1 <= T <= 10e3
1 <= N <= 10e5
0 <= Ai <= 10e9 

Note: Sum of N overall test cases does not exceed 10e6 

Sample Input
2
5
1 2 3 4 5
3
2 4 7

Sample Output
1
3

Explanation
For test case #1, we can select elements  and , the value of the expression is , which is the minimum possible value. Another possible pair is 4 and 5.

For test case #2, we can select elements 4 and 7, the value of the expression is , which is the minimum possible value.


*/





// C++ program for the above approach
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// Function to find the minimum
// value of XOR of AND and OR of
// any pair in the given array
int maxAndXor(int arr[], int n)
{
	int ans = INT_MAX;

	// Sort the array
	sort(arr, arr + n);

	// Traverse the array arr[]
	for (int i = 0; i < n - 1; i++) {

		// Compare and Find the minimum
		// XOR value of an array.
		ans = min(ans, arr[i] ^ arr[i + 1]);
	}

	// Return the final answer
	return ans;
}

// Driver Code
int main()
{
	// Given array
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0 ; i<n; i++)
        {
            cin >> arr[i];
        }

        int N = sizeof(arr) / sizeof(arr[0]);

        
	    // Function Call
	    cout << maxAndXor(arr, N) << endl;
    }
	
	return 0;
}

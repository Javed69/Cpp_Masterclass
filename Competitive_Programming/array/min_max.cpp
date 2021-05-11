#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];

    for(int i = 0; i < n; i++){
        cin>>array[i];
    }
    
    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for(int i = 0; i < n; i++){
        maxNo = max(maxNo, array[i]);
        minNo = min(minNo, array[i]);
    }
    
    cout << maxNo << " " << minNo << endl;
    
    return 0;
}
//Subsequences
//A subsequence is a sequence tthat can be derived an array by selecting zero or more elements without changing the order of the remaining elements.
//Number of subsequences of an array with n elements = 2^n

//Subarray
//Continuous part of the array
//Number of subarrays of an array with n elements = nC2 + n = n * (n+1) / 2
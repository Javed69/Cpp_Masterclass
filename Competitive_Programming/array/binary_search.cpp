//Complexity - O(logn)
#include<iostream>
using namespace std;


int binarySearch(int array[], int n, int key)
{
    int start = 0;
    int end = n;
    while(start < end){
        int mid = (start +end)/2;
        if(array[mid] == key)
            return mid;
        else if(array[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
        
    }
    return -1;
}


int main()
{
    int n;
    cinn>>n;

    int array[n];
    for(int i = 0; i<n; i++)
        cinn>>array[i];
    

    int key;
    cinn>>key;
    cout<<binarySearch(array, n, key)<<endl;

    return 0;
}

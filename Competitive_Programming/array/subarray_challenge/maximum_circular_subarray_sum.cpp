#include<iostream>
#include <climits>
using namespace std;

int kadane(int array [], int n)
{
    int currentsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum += array[i];
        if(currentsum < 0)
        {
            currentsum = 0;
        }
        maxsum = max(maxsum,currentsum);
    }
    return maxsum;
}



int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array [i];
    }
    
    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(array, n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += array[i];
        array[i] = -array[i];
    }
    
    wrapsum = totalsum + kadane(array,n);

    cout<<max(wrapsum,nonwrapsum)<<endl;
    return 0;
}
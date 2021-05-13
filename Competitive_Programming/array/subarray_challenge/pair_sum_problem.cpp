#include <iostream>
using namespace std;


bool pairSum(int array[], int n, int k)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; i++)
        {
            if(array[i] + array[j] == k)
            {
                cout << i << " " << j << endl;
                return true;
            }
        }
        
    }
    return false;
}


int main()
{
    int array[] = {2,4,7,11,14,16,20,21};
    int k = 31;
    
    pairSum(array,8,k);

    return 0;
}


// Optimized Code
// if array is not sorted it should be sorted first
#include <iostream>
using namespace std;



bool pairSum(int array[], int n, int k)
{
    int low = 0;
    int high = n-1;

    while(low < high)
    {
        if (array[low] + array[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if(array[low] + array[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
        
    }

    return false;
}





int main()
{
    int array[] = {2,4,7,11,14,16,20,21};
    int k = 31;
    
    pairSum(array,8,k);

    return 0;
}

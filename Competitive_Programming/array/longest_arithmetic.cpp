//Google Kickstart Question
//An arithmetic array is an array that contains at least ttwo integers and the differences between consecutive integers are equal.
//For example [9, 10], [3, 3 ,3] anns [9, 7 , 5, 3] are arithmetic arrays while [1, 3, 3, 7], [2 , 1, 2] are not arithmetic arrays.
// 1 sec = 10^8 operations(approx)


//Intuition and approach
//1.Loop over the array and find the answer
//Maintain the following variables:
//1.Previous Common Difference(pd)
//2.Current Arithmetic Subarray length(curr)
//3.Max arithmetic subarray length(ans)

#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int array[n];

  for (int  i = 0; i < n; i++)
  {
    cin >> array[i];
  }

  int ans = 2;
  int pd = array[1] - array[0];
  int j = 2;
  int curr = 2;

  while (j < n)
  {
    if (pd == array[j] - array[j-1])
    {
      curr++;
    }
    else
    {
      pd = array[j] - array[j-1];
      curr = 2;
    }
    ans = max(ans , curr);
    j++;
  }
  
  cout << ans << endl;
  return 0; 
  
}
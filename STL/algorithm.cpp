#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout << binary_search(v.begin(),v.end(),5) << endl;

    cout << "lower bound" << lower_bound(v.begin(),v.end(),4) - v.begin() << endl;
    cout << "Upper bound" << upper_bound(v.begin(),v.end, 4) - v.begin() << endl;

    int a = 4;
    int b = 6;

    cout << max(a,b) << endl;

    cout << min(a, b) << endl;
    
    swap(a,b);

    string a = "abcd";
    reverse(a.begin, a.end());
    cout << "String -> " << a << endl;

    rotate(v.begin(),v.begin() + 1 , v.end());

    sort(v.begin(), v.end());
}
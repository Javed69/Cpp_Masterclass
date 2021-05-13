#include <iostream>
using namespace std;

int main()
{

    // check palndorme
    int n;
    cin >> n;

    char array[n+1];
    cin >> array;

    bool check = true;

    for (int i = 0; i < n; i++)
    {
        if (array[i] != array[n-1-i])
        { 
            check = false;
            break;
        }
    
    }

    if(check == true)
    {
        cout << "Word is a psalindrome" << endl;
    }
    else
    {
        cout << "word is a palindrome" << endl;
    }
    

    return 0;

}
#include <iostream>
using namespace std;

int main()
{
    // largest word in a sentance
    int n;
    cin >> n;
    cin.ignore();
     
    char array[n+1];

    cin.getline(array, n);
    cin.ignore();

    int i = 0;
    int currentLen = 0, maxLen = 0;
    int st = 0, maxst = 0;

    while(1)
    {

        if (array[i] == ' ' || array[i] == '\0')
        {
            if (currentLen > maxLen)
            {
                maxLen = currentLen;
                maxst = st;
            }
            currentLen = 0;

        }
        else
        {
          currentLen++;  
        }
        

        if (array[i] == '\0')
        {
            break;
        }
        
        i++;
    }

    cout << maxLen << endl;
    for (int i = 0; i < maxst; i++)
    {
        cout << array[i+maxst] << endl;
    }
    

    return 0;
}
#include<iostream>
using namespace std;

int main()
{   
    // Declaration
    string str;
    cin >> str;
    cout << str << endl;


    // Input from user
    string str;
    getline(cin, str);
    cout << str << endl;

    // Different function in string
    string s1 = "fam";
    string s2 = "ily";

    s1.append(s2);
    cout << s1 << endl;
    cout << s1 + s2 << endl;
    cout << s1[1] << endl;

    // Clear function in string
    string abc = "sadsfghfg dfdgfdhf dsfgfdghf"
    abc.clear();

    // Compare function in string
    string s1 = "abc";
    string s2 = "xyz";
    if(s1.compare(s2) == 0)
    {
        cout << "Strings are equal" << endl;
    }
    cout << s2.compare(s1) << endl;


    // Empty function in string
    string s1 = "abc";
    cout << s1 << endl;

    s1.clear();

    if(!s1.empty())
    {
        cout << "String is not empty" << endl;
    }

    // Erase function in string
    string s1 = "nincompoop";

    s1.erase(3, 3);
    cout << s1 << endl;

    // Find function in string
    string s1 = "sdfgdfhf"
    cout << s1.find("com") << endl;

    // Insert function in string
    string s1 = "nincompoop";
    s1.insert(2, "lol");
    cout << s1 << endl;

    // Length in string
    cout << s1.size() << endl;
    cout << s1.length() << endl; // Both function same

    // Print
    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << endl;
    }
    
    // Sub string 
    string s = s1.substr(6, 4);
    cout << s << endl;
    return 0;
}
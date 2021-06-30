#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int , string> m;

    m[1] = "alpha";
    m[2] = "coder";
    m[3] = "java";

    m.insert({5 , "bheem"});

    for(auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    } 

    cout << "Find 13" << m.count(13) << endl;

    m.erase(13);
    cout << "after erase" << endl;
    for(auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find();

    for (auto i = it; i!=m.end(); i++)
    {
        cout << (*i).first << endl;
    }

}
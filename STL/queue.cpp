#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("alpha");
    q.push("coder");
    q.push("java");

    cout << "first element" << q.front() << endl;
    q.pop();
    cout << "second element" << q.front() << endl;

    cout<< "size after pop" << q.size() << endl;
    
}
// Virtual functions with no definition
// They start with virtual keyword wnd ends with = 0
// Syntax virtual return_type function_name() = 0;

#include<iostream>
using namespace std;

class Parent
{
    public:
    virtual void print() = 0;
};

class Child : public Parent
{
    public:
    void print()
    {
        cout << "Child" << endl;
    }
};

int main()
{
    Parent *obj1;
    Child obj2;
    obj1 = &obj2;
    
    obj1 -> print();
    
    return 0;
}
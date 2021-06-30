// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Parent
{
    public:
    void print()
    {
        cout << "Parent" << endl;
    }
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
// Object cannot be created for Abstract class
// Must contain one pure virtual function in the base class
// Definition of virtual function must be provided in derived class otherwise it will also be an abstract class
#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void show() = 0;
};

class Derived : public Base
{
    public:
    void show()
    {
        cout << "Virtual Function Definition" << endl;
    }
};

int main()
{
    Base *obj1;
    Derived obj2;
    obj1 = &obj2;
    
    obj1 -> show();
    
    return 0;
}
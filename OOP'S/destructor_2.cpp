#include<iostream>
using namespace std;
class Test
{
    private:
    ~Test() {}
    friend void destructor_test(Test*);
};

void destructor_test(Test* ptr)
{
     delete ptr;
}
int main()
{
    Test* ptr = new Test;
    destructor_test(ptr);
    return 0;
       
}

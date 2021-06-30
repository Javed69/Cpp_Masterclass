// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Object
{
    public:
    static void print()
    {
        cout << "Static function is running" << endl;
    }
    
};

int main() {
   Object :: print();
}
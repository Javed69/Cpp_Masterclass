// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Object
{
    public:
    Object()
    {
        cout << "Inside Constructor" << endl;
    }
    ~Object()
    {
        cout << "Inside Destructor" << end;
    }
};

int main() {
   if (1)
   {
       static Object obj;
   }
   cout << "End of main" << endl;
}
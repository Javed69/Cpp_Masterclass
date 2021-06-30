// Online C++ compiler to run C++ program online
// Defining Class's Member function as const
// Syntax: return_type function_name() const;
#include <iostream>
using namespace std;
class Sample
{
    public:
    int i;
    Sample(int x)
    {
        i = x;
    }
    int alpha() const
    {
        cout << i << endl;
    }
    int beta()
    {
        i++;
        cout << i << endl;
    }
};

int main() {
    
   Sample s1(10);
   const Sample s2(20);
   s1.alpha();
   s2.alpha();
   cout << s1.i << " " << s2.i << endl;
   s1.beta();
   s2.beta();
   
}
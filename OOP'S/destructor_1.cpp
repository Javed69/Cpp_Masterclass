#include<iostream>
using namespace std;
class Supermarket
{
    public:
    int customer_ID, product_purchased;
    Supermarket()
    {
        cout << "Constructor is called" << endl;
    }
    ~Supermarket()
    {
        cout << "Destructor is called";
    }
};
  
int main()
{
    Supermarket customer_1;
    return 0;    
}

#include<iostream>
using namespace std;
class Supermarket
{
    public:
    int customer_ID, product_purchased;
    Supermarket(int x, int y)
    {
        customer_ID = x;
        product_purchased = y;
    }
};

int main()
{
    Supermarket customer_1(1963, 7);
    cout << customer_1.customer_ID << endl;
    cout << customer_1.product_purchased << endl;
    return 0;    
}

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
    Supermarket(const Supermarket &cust)
    {
        customer_ID = cust.customer_ID;
        product_purchased = cust.product_purchased;
    }
};

int main()
{
    Supermarket customer_1(1963, 7);
    Supermarket customer_2(customer_1);
    cout << customer_2.customer_ID << endl;
    cout << customer_2.product_purchased << endl;
    return 0;    
}

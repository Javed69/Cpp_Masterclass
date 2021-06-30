#include<iostream>
using namespace std;
class Supermarket
{
    public:
    int customer_ID, product_purchased;
    Supermarket();
   
};
Supermarket :: Supermarket()
{
        customer_ID = 10;
        product_purchased = 10;
}
int main()
{
    Supermarket customer_1;
    cout << customer_1.customer_ID;
    cout << customer_1.product_purchased;
    return 0;    
}

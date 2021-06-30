#include <iostream>
using namespace std;
class Circle{
    public:
    double rad;
    public:
    double area(){
        return 3.14 * rad * rad;
    }
};

int main() {
    Circle obj;
    obj.rad = 1;
    cout << "Area: " << obj.area();
}
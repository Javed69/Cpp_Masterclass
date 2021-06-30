// Any object or function outside the class cannot access the private members
// Can be accessed only by the functions inside the class and friend functions.
// By default all members of a class are private
#include <iostream>
using namespace std;
class Circle{
    private:
    double rad;
    private:
    double area(){
        rad = 1;
        return 3.14 * rad * rad;
    }
};

int main() {
    Circle obj;
    cout << "Area: " << obj.area(); // Can't be accessed
}
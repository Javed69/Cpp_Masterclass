#include<iostream>
using namespace std;
class Point
{
    private:
    int x, y;
    public:
    Point(int x1, int y1) {
        x = x1;
        y = y1;
    }
    Point(const Point &p2){
        x  =p2.x;
        y = p2.y;
    } 
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    
};
  
int main()
{
    Point p1(10, 15);
    Point p2(p1);
    cout << p1.getx() << endl;
    cout << p1.gety() << endl;
    cout << p2.getx() << endl;
    cout << p2.gety() << endl;
    
    return 0;    
}

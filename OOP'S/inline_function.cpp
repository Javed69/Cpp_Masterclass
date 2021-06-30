#include <iostream>
using namespace std;
inline int Max (int x, int y)
{
    return (x>y)?x:y;
}
int main() {
    
    cout << "Max(10, 10): " << Max(20, 10) << endl;
    cout << "Max(10, 10): " << Max(0, 200) << endl;
    cout << "Max(10, 10): " << Max(100, 1010) << endl;
    return 0;
    
}
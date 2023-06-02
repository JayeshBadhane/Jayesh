#include <iostream>
using namespace std;
struct point { float x; float y; };
int main()
{
    point p1, p2, p3;
    cout << " Enter p1 coordinate :";
    cin >> p1.x >> p1.y;
    cout << " Enter p2 coordinate :";
    cin >> p2.x >> p2.y;
    p3.x = p1.x + p2.x;
    p3.y = p2.x + p2.y;
    cout << "The sum point p3.x is :" << (p3.x) << endl;
    cout << "The sum point p3.y is :" << (p3.y) << endl;
    cout << "sum of two coordinate :(" << (p3.x) << " , " << (p3.y) << ")" << endl;
    cout << "\ndistance between 'x' coordinate (" << (p1.x - p2.x) << ")";
    cout << "\ndistance between 'y' coordinate (" << (p1.y - p2.y) << ")";
    return 0;
}

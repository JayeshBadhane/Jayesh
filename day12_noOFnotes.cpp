#include <iostream>
using namespace std;

long int nofrs(long int n)
{
    long int a, b, c, d, e, z, one, two, five, ten, tventy, fifty, handret, fiveh;

    fiveh = (n / 500);
    a = n % 500;
    cout << "Notes of 500 is: " << fiveh << endl;
    handret = (a / 100);
    z = a % 100;
    cout << "Notes of 100 is: " << handret << endl;
    fifty = (z / 50);
    b = z % 50;
    cout << "Notes of 50 is:" << fifty << endl;
    tventy = (b / 20);
    c = b % 20;
    cout << "Notes of 20 is:" << tventy << endl;
    ten = (c / 10);
    d = c % 10;
    cout << "Notes of 10 is:" << ten << endl;
    five = (d / 5);
    e = d % 5;
    cout << "coine of 5 is:" << five << endl;
    two = (e / 2);
    one = e % 2;
    cout << "coine of 2 is:" << two << endl;
    cout << "coine of 1 is:" << one << endl;
}
int main()
{
    int n;
    cout << "Enter Rs";
    cin >> n;
    nofrs(n);

    return 0;
}
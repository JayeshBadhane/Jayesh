#include <iostream>
#include <fstream>
using namespace std;
class complex
{
    double r, i;

public:
     complex() {}
    complex(double real, double imag)
    {
        r = real;
        i = imag;
    }
    void show()
    {
        cout << "complex number is: (" << r << ")+i(" << i << ")" << endl;
    }

    complex operator-(complex z)
    {
        complex res;
        res.r = z.r - r;
        res.i = z.i - i;
        return res;
    }
    complex operator+(complex z)
    {
        complex res;
        res.r = r + z.r;
        res.i = i + z.i;
        return res;
    }
    friend ostream & operator<<(ostream &, complex &);
    friend istream & operator>>(istream &, complex &);
};
istream & operator>>(istream &in, complex &z)
{
    cout << "enter real part" << endl;
    in >> z.r;

    cout << "enter imagenari part" << endl;
    in >> z.i;
    return in;
}
ostream & operator<<(ostream &out, complex &z)
{
    out << "complex number is: (" << z.r << ")+i(" << z.i << ")" << endl;
    return out;
}
int main()
{
    complex c1, c2, c3, c4;
    cout << "enter frist num" << endl;
    cin >> c1;
    cout << "enter second num" << endl;
    cin >> c2;
    cout << c1;
    cout << c2;
    c3 = c1 + c2;
    cout <<"adition of "<< c3;
    c4 = c1 - c2;
    cout <<"subtraction of "<< c4;

    return 0;
}
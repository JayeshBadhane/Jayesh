#include <iostream>
using namespace std;

int main()
{
    int x;
    float div;
    cout << "Enter an number:";
    cin >> x;
    
        if (x % 5 == 0)
        {
            div = x / 5;
            cout << "number is divisible by 5" << endl;
            cout << "Division = " << div<< endl;
        }
        if (x % 11 == 0)
        {
            div = x / 11;
            cout << "number is divisible by 11" << endl;
            cout << "Division = " << div<< endl;
        }
    if ((x % 5 == 0) && (x % 11 == 0))
    {
        cout << "number is divisible by 5 and 11" << endl;
    }
    else
    {

        cout << "Given no is not divisible by 5 and 11 "<< endl;
    }

    return 0;
}
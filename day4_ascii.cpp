// C++ program to print
// ASCII Value of Character
#include <iostream>
using namespace std;
 
// Driver code
int main()
{
     char c;
    cout<<"Enter Charector to Calculet ASCII value and size of ASCII value & size of Charactor ";
    cin>>c;
    cout << "The ASCII value of " <<c << " is " << int(c)<<endl;
    cout<<"Size of char ("<<c<<") is: "<<sizeof(c)<<endl;
    cout<<"Size of int("<<c<<") is: "<<sizeof(int(c))<<endl;
    cout<<"Size of float("<<c<<") is: "<<sizeof(float(c))<<endl;
    cout<<"Size of double("<<c<<") is: "<<sizeof(double(c))<<endl;
    return 0;
}

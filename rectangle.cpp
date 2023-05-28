#include <iostream>
using namespace std;
int main()
{   
    int v, ch;
    float length, width;
    do
    {
    cout << "Enter length and width calculat area and perimeter";
    cin >> length >> width;

    do
    {
        int choice;
        
        cout << "Enter your choice \n 1.For to Calculat Area of Rectanle\n 2.For to Clculat Primeter of Rectangle ";
        cin >> choice;
        if (choice == 1)
        {
            double area;
            area = length * width;
            cout << "Area of Rectangle is: " << area << endl;
        }
        else
        {
            double peri;
            peri = 2 * (length + width);
            cout << "Perimeter of Rectangle is: " << peri << endl;
        }

        cout << "Do you want to continue if yes Enter 1";
        cin >> ch;
    } while (ch ==1 );
    cout<<endl;

       cout << endl;  cout << "Do you want to continue if yes Enter 1";
        cin >> v;
    } while (v == 1);
    cout << endl;

    return 0;
}

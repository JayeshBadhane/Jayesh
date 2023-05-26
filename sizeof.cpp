#include<iostream>
using namespace std;

int main()
{
    // demonstet the sizeof() operator

    int a;
    float b;
    char c;
    double d;
    struct student
    {
        char name[30];
        int rollno;
        int marks;

    }s;
    cout<<"sizeof int: "<<sizeof(a)<<endl;
    cout<<"sizeof float: "<<sizeof(b)<<endl;
    cout<<"sizeof char: "<<sizeof(c)<<endl;
    cout<<"sizeof struct: "<<sizeof(s)<<endl;
    cout<<"sizeof double: "<<sizeof(d)<<endl;
     return 0;
}
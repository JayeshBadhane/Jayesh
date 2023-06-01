#include<iostream>
using namespace std;

int main()
{
    int rollno;
    char name[30];
    float avr,per, total=0;
    int marks,n;
    cout<<"Enter your name ";
    cin>>name;
    cout<<"Enter your Roll number ";
    cin>>rollno;
    cout<<"Enter the Subject Count for Calculating Persentage ";
    cin>>n;
    cout<<"Enter "<<n<<" Subject Marks for Calculating Percentage: ";
    for (int i = 1; i <= n; i++)
    {   
        cout<<"Subject "<<i<<endl;
        cin>>marks;
        total+=marks;
    }
    
    avr= (total/n);
    per=(total*100)/(n*100);
    cout<<"Your Total Marks is: "<<total<<endl;
    cout<<"Your Average Marks is: "<<avr<<endl;
    cout<<"Your Total Percentage is: "<<per<<"%"<<endl;
return 0;
}

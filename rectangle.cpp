#include<iostream>
namespace std;
int main()
{
  int choice 
  float length,width;
  do{
  cout<<"Enter length and width calculat area and perimeter";
  cin>>length>>width;
  cout<<"Enter your choice \n 1.For to Calculat Area of Rectanle\n 2.For to Clculat Primeter of Rectangle ";
  cin>>choice;
  do
  {
     if(cloice==1)
     {
       double area;
       area= length*width;
       cout<<"Area of Rectangle is: "<<area<<endl;
    }
    else
    {
      double peri;
      peri=2(length+width);
      cout<<"Perimeter of Rectangle is: "<<pari<<endl;
    }
    char ch;
    cout<<"Do you want to continue if yes Enter y or Y";
    cin>>ch;
  }
  while(ch==y/Y)
    cout<<endl;
     char v;
    cout<<"Do you want to continue if yes Enter y or Y";
    cin>>v;
  }
   while(v==y/Y)
    cout<<endl;
  
    return 0;
}

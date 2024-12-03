//function is very important part of the top-down structure prograamming..
#include<iostream>
using namespace std;

inline int product(int ,int ,int );

int main()
{
  int num1,num2,num3;
  cout<<"Enter first number , second number & third number:-"<<endl;
  cin>>num1>>num2>>num3;
  cout<<"The product is = "<<product(num1,num2,num3)<<endl;

return 0;
}
inline int  product (int a,int b,int d)
{
    return a*b*d;
}
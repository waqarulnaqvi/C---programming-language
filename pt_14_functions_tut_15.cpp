//function is very important part of the top-down structure prograamming..
#include<iostream>
using namespace std;
// function prototyping:-
// Syntax:- type function-name (arguments);
// int sum (int a,int b,int d);// function prototyping //yeah assuritiy deta hai program ko ki sum aage hai..
//yeah concept sabse pehle c++ language me aaya tha uske baad jaake c language ne bhi isko adopt kar liya..

// int sum (int a, b,int d);Not Acceptable..
// int sum (int a, b, d);Not Acceptable..
// int sum ( a, b, d);Not Acceptable..

int sum(int ,int ,int );//Acceptable..
int sum(int ,int ,int );//Acceptable..
int sum1(int ,int ,int );//Acceptable..//function not exist but it run due to function prototyping..
// int sum(int w,int ,int );//Acceptable..
// int sum(int w,int w,int );//Not Acceptable to same name function..
int sum(int w,int w1,int );//Not Acceptable to same name function..
//function prototyping is basically a template to declare and define a function..

void g();//Acceptable..
void g(void);//Acceptable..

int sum2();//Acceptable..
int sum2(void);//Acceptable..

int main()
{
      cout<<"The sum2 is = "<<sum2()<<endl;
     g();
    
  int num1,num2,num3;
  cout<<"Enter first number , second number & third number:-"<<endl;
//   cin>>num1>>num2>>"print";//Error..
  cin>>num1>>num2>>num3;
//   num1,num2 &num3 are actual parameters..
  cout<<"The sum is = "<<sum(num1,num2,num3)<<endl;
  g();

return 0;
}
int sum (int a,int b,int d)
{// Formal parameters a,b, &d will be taking values from actual parameters num1,num2 &num3..
    // int c=a+b+d;
    // return c;
    return a+b+d;
}

int sum2 ()
{
   int a=12,b=13,d=14;
    return a+b+d;
}

void g()
{
    cout<<"Hello, Good morning"<<endl;
}
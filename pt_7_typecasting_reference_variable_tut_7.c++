#include<iostream>
using namespace std;
float d=35.78;
// int d=34;
// (::) it is called a scope resolution operator..
int main()
{//    Built in data type in c++
// "<<" - it is called a insertion operator..
//Insertion operator print the output..
//">>" is called Extraction operator..
// Extraction operator take input from the user .. 
// int a,b,c,d;
// cout<<"Enter the value of a :"<<endl;
// cin>>a;
// cout<<"Enter the value of b :"<<endl;
// cin>>b;
// cout<<"Enter the value of c :"<<endl;
// cin>>c;
// d=a+b+c;
// cout<<"The sum d is "<<a+b+c<<endl;
// cout<<"The sum d is "<<d<<endl;
// cout<<"global d is "<<::d<<endl;//with the help of scope resolution operator we can print the value of global d..
// float d=34.34;//Error can't repeat two element with the same name..

//*******float, double & long double Literals ********
float e=12.23f;
// 12.23 :- by default it is a double..
// if you want 12.23 be a floating point number than print 12.23f..
long double f=233.23l;//l lagane ka fark or difference tab hum dekh paayenge jab hum function ko load karenge..
cout<<"The value of e is :"<<e<<endl<<"The value of f is :"<<f<<endl; 
cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;//by default it take double.. 
cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

//******Reference variable *************
float x=334;//if you change the value of x the value of y will automatically change..
float &y= x;//y is a reference variable which point x..
cout<<x<<endl;
cout<<y<<endl;

// ******Typecasting********
int a=22;
float b=22.34;
// cout<<"The value of a is with typecasting = "<<float(a)<<endl;
// cout<<"The value of a is without typecasting = "<<(a)<<endl;
// cout<<"The value of b is with typecasting = "<<(int)b<<endl;
// cout<<"The value of b is without typecasting = "<<b<<endl;
// typecasting is simply a converting one data type into another data type..
int c=int (b);//run..
// int c=int d;//Error 


cout <<"The expression is "<<a+ b<<endl;
cout <<"The expression is "<<a+ int(b)<<endl;
cout <<"The expression is "<<a+ (int)b<<endl;
return 0;
}
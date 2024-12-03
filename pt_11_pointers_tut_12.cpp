#include<iostream>
using namespace std;
int main()
{
int a=
14;//run//if you change the value of a than other value will change automatically..
int *p=&a;//dereferrencing(indirection) to get the value of a..
int **c=&p;//pointer to pointer// once deferrencing to get the value of p which is in the form of address of a, twice  dereferrencing(indirection) to get value of a..
// c is storing the address of the address..
// it is a that type of pointer which store the address of another pointer..
// & (Address of) operator..
cout <<"The address of a = "       <<p<<endl;//Address of a..
// compiler ignore whitespaces..
cout <<"The address of a = "<<&a<<endl;//Address of a..
cout <<"The value at address of p = "<<c<<endl;//Address of a..
cout <<"The value at address value_at(value_at(c)) is "<<*c<<endl;//Address of a..

// * (value at )dereferencing or indirection operator..
cout <<"The value of a = "<<*p<<endl;
cout <<"The value of a = "<<a<<endl;
cout<<"The value of a = "<<**c<<endl;

return 0;
}
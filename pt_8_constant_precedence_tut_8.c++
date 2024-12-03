#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // Constants in c++:-
 const int m=34;
//  m=323; constant value can't change..

// Manipulator in C++:-
// eg:- endl,setw contain iomanip package..
int a =34,b=2683,c=564;
cout<<"The value of a is without setw: "<<a<<endl;
cout<<"The value of b is without setw: "<<b<<endl;
cout<<"The value of c is without setw: "<<c<<endl;

cout<<"The value of a is with setw: "<<setw(4)<<a<<endl;
cout<<"The value of c is with setw: "<<setw(4)<<c<<endl;
cout<<"The value of b is with setw: "<<setw(4)<<b<<endl;
/*
setw output:-
The value of a is with setw:   34
The value of c is with setw:  564
The value of b is with setw: 2683
it right justify the output..
*/
return 0;
}
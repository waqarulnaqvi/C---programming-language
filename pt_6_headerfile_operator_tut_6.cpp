#include<iostream>
// iostream is a system header file..which contain std::cout function etc..
/*
There are 2 types of header file in c:
1)System header files:It comes with the compiler 
#include<iostream>
2)User defined header file:It is written by the programmer..
#include<this.h> :-this will produce an error if this.h is not present in the current directory..
for more details search on the google "cpp reference header file"..
depricate means yeah ab use ni hoti hai yeah pehle use hoti thi iski jagha pe ab kxh or aa gaya hai..
*/
// #include<this.h> //it is a user define header file..
using namespace std;
int main()
{ int a=4,b=345;
  cout<<"operator in c++"<<endl;
  cout<<"operator in c++"<<endl;
//   endl also move you to the new line..

//Comparison Operator..
// true=1 & false=0
cout<<"the value of a==b is "<<(a==b)<<endl;
cout<<"the value of a<=b is "<<(a<=b)<<endl;
cout<<"the value of a>=b is "<<(a>=b)<<endl;
cout<<"the value of a!=b is "<<(a!=b)<<endl;
cout<<"the value of a>b is "<<(a>b)<<endl;
cout<<"the value of a<b is "<<(a<b)<<endl;
    return 0;
}
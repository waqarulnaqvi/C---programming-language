/*iostream is a input output stream 
and stream means in io stream is a sequence of byte
*/
// G++ is a 64bit compiler..
//character is also a number..
#include<iostream>
using namespace std;
int main()
{
int num1,num2;
// "<<" - it is called a insertion operator..
//Insertion operator print the output..
cout<<"Enter the value of num1\n";
cin>>num1;//">>" is called Extraction operator..
// Extraction operator take input from the user .. 
cout<<"Enter the value of num2\n";
cin>>num2;
cout<<"The sum is "<<num1+num2;
return 0;
}
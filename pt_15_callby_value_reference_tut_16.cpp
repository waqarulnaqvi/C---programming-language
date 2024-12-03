// ek baar function ko execute hone ke baad uski value destroy ho jaati hai means formal parameters value destroy ho jaati hai function execute hone ke baad..
#include<iostream>
using namespace std;

//Call by value
void swap(int a ,int b)
{
    int t=a;
    a=b;
    b=t;
   // return; //This is optional..
}

//Call by reference using pointer reference
void swap_pointer(int* a ,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
   // return; //This is optional..
}

//Call by reference using reference variable
int   swap_reference(int  &a ,int &b)//return by reference
{//if more than 2 return is give than first return will be executed..
    int c=120;
    int t=a;
    a=b;
    b=t;
// return c; //This is optional..
//return value of c and swap the a &b..
}

//Call by reference using reference variable & return by reference
int  & swap_return_reference(int  &a ,int &b)
{//if more than 2 return is give than first return will be executed..
    int c=120;
    int t=a;
    a=b;
    b=t;
    // return 120;//Error..
    // return c; //Throw an error because local variable value can't change and a ,b value will swap and a value can't change..
//    return; //Error..
// The value of b will be changed if no return is given and program will run.
return a;// The value of a will be changed..
// return b;// The value of b will be changed..
}

int main()
{
 int a=3,b=5;
 //This will not swap a and b because we are using call by reference..
 /*Call by value
 cout<<"Before function call the value of a = "<<a<<" and b = "<<b<<endl;
 swap(a,b);
  cout<<"After function call the value of a = "<<a<<" and b = "<<b<<endl<<endl;
*/

//This will swap a and b using pointer reference..
/*Call by reference using pointer reference
 cout<<"Before function call the value of a = "<<a<<" and b = "<<b<<endl;
 swap_pointer(&a,&b);//hum actual parameter ka reference(address) de dete hai formal parameter me..
  cout<<"After function call the value of a = "<<a<<" and b = "<<b<<endl;
 swap_pointer(&a,&b);//hum actual parameter ka reference(address) de dete hai formal parameter me..
  cout<<"After function call the value of a = "<<a<<" and b = "<<b<<endl<<endl;
 
 cout<<"Before function call the value of a = "<<a<<" and b = "<<b<<endl;
 swap_pointer(&a,&b);//hum actual parameter ka reference(address) de dete hai formal parameter me..
 swap_pointer(&a,&b);//hum actual parameter ka reference(address) de dete hai formal parameter me..
  cout<<"After function call the value of a = "<<a<<" and b = "<<b<<endl<<endl;
  */

// This will swap a and b using reference variable..
/*Call by reference using reference variable
 cout<<"Before function call the value of a = "<<a<<" and b = "<<b<<endl;
 swap_reference(a,b);
  cout<<"After function call the value of a = "<<a<<" and b = "<<b<<endl;
//  swap_reference(&a,&b);//Error..
 swap_reference(a,b);
  cout<<"After function call the value of a = "<<a<<" and b = "<<b<<endl;
  cout<<"Function value is "<<swap_reference(a,b)<<endl;//if c will not return than the address will be printed.. 
*/

// This will swap a and b using reference variable  & return reference..
/*Call by reference using reference variable & return reference */
 cout<<"Before function call the value of a = "<<a<<" and b = "<<b<<endl;
 swap_return_reference(a,b);
  cout<<"After function call the value of a = "<<a<<" and b = "<<b<<endl;
//  swap_reference(&a,&b);//Error..
 swap_return_reference(a,b);
  cout<<"After function call the value of a = "<<a<<" and b = "<<b<<endl;
 swap_return_reference(a,b)=420;
  cout<<"After function call the value of a = "<<a<<" and b = "<<b<<endl<<endl;

return 0;
}
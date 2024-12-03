//built in data type//local and global variable..
#include<iostream>
using namespace std;
int global=3434;//global variable..
//function ke andar jo variable hota usse hum local variable kehte hai..
void sum()
{
    int a;//local variable
    std::cout<<"\"Function\" print global variable \"global\" value : "<<global;
}
int main()
{
    // cout<<"\nThe value of global variable value  is :"<<global;
    int global=12;//value will be changed local variable precedence leta hai global variable ke upar..
    global=212;//local variable value will be updated not global variable value means 12 updated to 212 not 3434 updated to 212..
    // cout<<"\nThe value of global variable is changed and now it is a:"<<global<<"\n";
int a=34,b=34;
char c='u';
// char c1='udcsc';//print output of last word with error..
// char c2='us';//print output of last word with error..
// cout<<"The value of a is :"<<a<<"\nthe value of b is :"<<b;
// std::cout<<"\nThe value of is a :"<<a<<"\nthe value of b is :"<<b;
// cout<<"\nThe value of c is :"<<c;
// cout<<"\nThe value of c1 is :"<<c1;//unexpected output not recommended..
//print output of last word with error..
// cout<<"\nThe value of c2 is :"<<c2;//unexpected output not recommended..
//print output of last word with error..
cout<<"it print local variable \"global\" value : "<<global<<"\n";

// Boolean is false=0 and true=1... 
bool a1=true;
bool a2=false;
cout<<" Boolean is  true : "<<a1<<"\n";
cout<<" Boolean is false : "<<a2<<"\n";

//It print local variable global value..
sum();//It print global variable global value.. 
return 0;
//Variable names in C++ can range from 1 to 255 character..
}
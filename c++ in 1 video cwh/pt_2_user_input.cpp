#include <iostream>
#include <string>//header file to implement some Strings function..
using namespace std;
//you can not write endl in upper case..
int add(int a,int b)
{
    return a+b;
}
class Employee{
    public:
     string name;
     int salary;

     Employee(string name,int salary,int secretpassword)
    {
        this->name=name;
        this->salary=salary;
        this->secretPassword=secretPassword;
    }

    void printDetails()//method name must be in a camel case convention..
    {
cout<<"The name of our first employee is "<<name<<" and his salary is "<<salary<<" Dollars"<<endl;//Run..
cout<<"The name of our first employee is "<<this->name<<" and his salary is "<<this->salary<<" Dollars"<<endl;//Run..
    }

  void get_Secret_Password()//we write method name as an camel case convention..
//   void secretPassword()//Error.. //function name cannot be same as variable name..
    {
        cout<<"The secret password is "<<secretPassword<<endl;
        cout<<"The secret password is "<<this->secretPassword<<endl;
    } 

 private:
   int secretPassword; //class method can directly access private access modifier.. 
   

};

class Programmer :public Employee//Implementation of inheritance in c++..
{
    public:
    int errors;
};

class Employee2{
    public:
     string name;
     int salary;

    void printDetails()//method name must be in a camel case convention..
    {
cout<<"The name of our first employee is "<<name<<" and his salary is "<<salary<<" Dollars"<<endl;//Run..
// cout<<"The name of our first employee is "<<this->name<<" and his salary is "<<this->salary<<" Dollars"<<endl;//Run..
    }
};
int main()
{

    /*
    // Taking input from the user:
    int a, b;
    cout << "Enter first number:" << endl;
    cin >> a;
    cout << "Enter second number:" << endl;
    cin >> b;
    cout<<"The function returned "<<add(a,b)<<endl<<endl;
 
    // switch (a)//Error..// c/c++ does not support enhanced switch..
    // {
    // case 1->cout<<" i am 1";
    
    // default:
    //     break;
    // }

    // Operators:
    cout << "a + b is :" << a + b << endl;
    cout << "a * b is :" << (double)a * b << endl;
    cout << "a - b is :" << a - b << endl;
    cout << "a / b is :" << (float)a / b << endl;       // Integer to float typecasting..
    cout << "b / a is :" << (long double)b / a << endl; // Integer to float typecasting..
     */

    /*1 D ARRAY:
    int arr[3]= {2,32,23};
    // int arr[3]= {2,32,23,67};//Error..
    cout<<arr[2]<<endl;
    cout<<arr[5]<<endl;//print address..

    int arr1[]= {2,32,23,56};
    cout<<arr1[2]<<endl;
    cout<<arr1[5]<<endl;//print address..
   
   int marks[6];
    for (int i = 0; i <6; i++)
    {
     cout<<"Enter the marks of "<<i+1<<"th student"<<endl;
     cin>>marks[i]; 
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<i+1<<"th student marks ="<<marks[i]<<endl;
        // cin>>marks[i]; 
        // cin>>marks[i+1]; 
    }  
*/
    
/*2D Array:
// int arr[][]={{1,2,3},
//              {3,4,3}};//Error..
// int arr[2][]={{1,2,3},
//               {3,4,3}};//Error..
// int arr[2][1]={{1,2,3},
//               {3,4,3}};//Error..
// int arr[1][3]={{1,2,3},
//               {3,4,3}};//Error..
// int arr[1][2]={{1,2,3},
//               {3,4,3}};//Error..
// int arr[2][5]={{1,2,3},
//               {3,4,3}};//Run..
// int arr[12][15]={{1,2,3},
//               {3,4,3}};//Run..
// int arr[][3]={{1,2,3},
//               {3,4,3}};//Run..
int arr[2][3]={{1,2,3},
              {3,4,3}};
  for(int i=0;i<2;i++)
  {
  for(int j=0;j<3;j++)
  {
    cout<<arr[i][j]<<"  ";
  }
  cout<<endl;
  }
  */

 /*Typecasting in c++:
 int a=34;
 float b=87.94;
cout<<(float) a/5<<endl;
cout<<(int)b; */

/*Strings/Strings function:
string name="Waqarul";
cout<<"The name is "<<name<<endl;
cout<<"The length of name is "<<name.length()<<endl;
cout<<"The name is "<<name.substr(0,0)<<endl;
cout<<"The name is "<<name.substr(5,2)<<endl;//5 se leke 2 character chalega..
cout<<"The name is "<<name.substr(4,3)<<endl;//4 se leke 3 character chalega..
// cout<<"The name is "<<name.substr(20,1)<<endl;//Error..//terminate called after throwing an instance of 'std::out_of_range' (because original length is 7)..
cout<<"The name is "<<name.substr(1,1)<<endl;
cout<<"The name is "<<name.substr(0,2)<<endl;
cout<<"The name is "<<name.substr(0,3)<<endl;
cout<<"The name is "<<name.substr(2,4)<<endl;
cout<<"The name is "<<name.substr(2,201)<<endl;
cout<<"The name is "<<name.substr(0,201)<<endl;
// cout<<"The name is "<<name.substr(-1,201)<<endl;//Error..
*/

/*Pointers:
// * is dereferencing operator which dereference the pointer..

//pointer uses:
//pointer can be used in dynamic memory allocation..
//pointer can be used by the arrays..
//pointer can be any data type int,float,double etc..
//There is also a funtion pointer..
int a=34;
int* ptra;
ptra=&a;
cout<<*ptra<<endl;//*ptra is equal to value at ptra..
cout<<"The value of a is "<<a<<endl;
cout<<"The value of a is "<<*ptra<<endl;
cout<<"The address of a is "<<&a<<endl;
cout<<"The address of a is "<<ptra<<endl<<endl;

float a1=34.3434;
float* ptra1;
ptra1=&a1;
cout<<*ptra1<<endl;//*ptra is equal to value at ptra..
cout<<"The value of a1 is "<<a1<<endl;
cout<<"The value of a1 is "<<*ptra1<<endl;
cout<<"The address of a1 is "<<&a1<<endl;
cout<<"The address of a1 is "<<ptra1<<endl;
*/

//class is a blueprint//template..
/*OOps:*/

Employee har("Waqarul constructor",3434,420420420);
// har.name="harry";
// har.salary=100;
// har.secretPassword=3434;//Error..//you can not directly update variable of class which declared private..
// cout<<"The name of our first employee is "<<har.name<<" and his salary is "<<har.salary<<" Dollars"<<endl;
har.printDetails();
har.get_Secret_Password();
// cout<<har.secretPassword;//Error..//because it declared private..

cout<<endl;


Employee2 waq;
waq.printDetails();
waq.name="harry";
waq.salary=100;
waq.printDetails();

    return 0;
}
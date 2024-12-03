/*
//To chech g++ is installed:
g++//Enter 
if ->Result:
g++.exe: fatal error: no input files
compilation terminated.//g++ is installed..
else ->Result
any result//g++ is not installed..

//To complile c++ program in command prompt..
 g++ pt_1_main.cpp 
.\pt_1_main.exe//Run..
.\a.exe//run...

pt_1_main.exe//Error..
a.exe//Error..
//you can not write endl in upper case..
*/
#include<iostream>//it is a pre-processor command..//pre-processing command kehta hai program ke compile hone me jo sabse pehle pre-processing hoti hai wo kar do..
using namespace std;//using namespace std likhne se humme namespace baar baar ni likhna hoga..
//you can not write endl in upper case..
int main()
{
    std::cout<<"Hello world";//cout kehta hai print kar do output console me..
    cout<<"Hello world Waqarul"<<endl;//cout kehta hai print kar do output console me..
    cout<<"Hello world azaan"<<endl;//cout kehta hai print kar do output console me..
    int a,b,c;
    //Variable name can be start with letter or underscore..
    short _sa=9;//Variables are case sensitive in c++..
    short Sa=45;
    cout<<_sa<<endl;

    // camelCase Notation/Convention:(variable name uses)
    int marksInMaths=34;
    cout<<"The marks of the student in maths is :"<<marksInMaths<<endl;

    string harry="Waqarul";
    cout<<harry<<endl;

    //here below data type size/precession is in a increasing order:
    short a1;
    int const b2 =34;//because of const b2 variable value won't be updated//changed..
    long const c3=3434;//because of const c3 variable value won't be updated//changed..
    long long d;
    float const score=34.34;//because of const score variable value won't be updated//changed..
    // score=34.34;//Error..
    double score2=34.34;
    score2-343.343;
    long double score3=34.3434;
    cout<<"The score in float is "<<score<<endl;
    cout<<"The score in double is "<<score2<<endl;
    cout<<"The score in long double is "<<score3<<endl;

    return 0;
}
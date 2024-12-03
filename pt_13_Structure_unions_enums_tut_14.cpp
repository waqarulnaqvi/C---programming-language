#include <iostream>
using namespace std;
// Structure is a user defined data type which is used to merge different differnt data type and used them in a single structue..
typedef struct employee
{
    int eId;//4
    char favChar;//1
    float salary;//4
}ep;//structure uses 4+1+4=9 memory space..
// union is almost similar as structure but they provide better memory management compare to structure..
union money{//union shared memory between rice ,car & pounds and make the union size same as the largest data type of the union..
    int rice;//4
    char car;//1
    float pounds;//4
};//union uses 4 memory space..
int main()
{
    /*Stucture:-
    // struct employee harry,shubham;//Run
    ep  harry,shubham;//Run
    // struct employee rohan;//Run
    ep  rohan;//Run

    harry.eId = 11;
    harry.favChar = 'a';
    harry.salary = 2343424;
    
    shubham.eId = 12;
    shubham.favChar = 'b';
    shubham.salary = 23434245;

    rohan.eId = 12;
    rohan.favChar = 'c';
    rohan.salary = 2343426;

    cout<<"The value is "<<harry.salary<<endl;
    cout<<"The value is "<<harry.favChar<<endl;
    cout<<"The value is "<<harry.eId<<endl<<endl;

    cout<<"The value is "<<shubham.salary<<endl;
    cout<<"The value is "<<shubham.favChar<<endl;
    cout<<"The value is "<<shubham.eId<<endl<<endl;

    cout<<"The value is "<<rohan.salary<<endl;
    cout<<"The value is "<<rohan.favChar<<endl;
    cout<<"The value is "<<rohan.eId<<endl<<endl;
    */
   /*Union:-
   union money m1,m2;
   union money m3;

   m1.pounds=233;
   m1.car='a';
   m1.rice=34;//in teeno me se jo last me value likhi hai ussi ko access or run kar sakte hai zyada tar time...
//    union me in teeno data type me se ek time me sirf ek hi memory use kar sakte hai...

   cout<<m1.rice<<endl;
   cout<<m1.car<<endl;
   cout<<m1.pounds<<endl;*/

   /*Enum */
   enum Meal {breakfast ,lunch ,dinner};//now Meal is a data type..
   Meal m1=breakfast;
   Meal m4=breakfast;
   Meal m2=lunch;
   Meal m3=dinner;

//    cout<<m1<<endl;
//    cout<<m2<<endl;
//    cout<<m3<<endl;
//    cout<<m4<<endl<<endl;

   cout<<(m1==0)<<endl;//True
   cout<<(m2==3)<<endl;//false
   cout<<(dinner==2)<<endl;//True
   cout<<(m4==0)<<endl<<endl;//True

//    cout<<breakfast<<endl;
//    cout<<lunch<<endl;
//    cout<<dinner<<endl<<endl;

    return 0;
}
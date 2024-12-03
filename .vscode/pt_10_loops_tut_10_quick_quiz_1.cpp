//(ctrl + c) to stop the loop in the terminal..
#include<iostream>
using namespace std;
int main()
{
    //for loop:-
    // cout<<"printing value using loop";
    // for(int i=0;i<5;i++)
    // // for(initialization;condition;updation)
    // // for(int i=0;3<5;i++)//infinite loop..
    // {
    //     //loop body
    //     cout<<i<<endl;
    // }

    //Infinite while loop:-
    // int i=1;
    // while(true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
 
    //do while loop:-
    //do while will run atleast once even if condition is false..

    // int i=1;
    // do{
    //     cout<<"do while loop output : "<<i<<endl;
    //     i++;
    // }
    // while(false);
     
    //  quick_quiz_1:
    //WAP to print multiplication table of 6 using do while loop.. 
    // printf("Enter a number"); it will run in c++ program..
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int i=1;
    cout<<"The table of "<<n<<" is :"<<endl;
    do{
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
        i++;
    }
    while(i<=10);
return 0;
}
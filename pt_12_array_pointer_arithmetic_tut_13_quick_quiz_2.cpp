#include<iostream>
using namespace std;
int main()
{
// int marks[2]={23,24,25,26};//Error
// int marks[4]={23,24,25,26};
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;
// cout<<marks[4]<<endl;//print the address..
// cout<<marks[5]<<endl;//print the address..
// marks[4]=420;
// marks[5]=024;
// cout<<marks[4]<<endl;
// cout<<marks[5]<<endl;
// // int marks[4];//Error//because marks name array variable already exists..
// int marks1[4];
// marks1[0]=34;
// marks1[1]=4;
// marks1[2]=3;
// marks1[3]=324;
// marks1[4]=342;
// marks1[5]=32;
// cout<<marks1[0]<<endl;
// cout<<marks1[1]<<endl;
// marks1[1]=420;
// cout<<marks1[1]<<endl;
// cout<<marks1[2]<<endl;
// marks1[2]=024;
// cout<<marks1[2]<<endl;
// cout<<marks1[3]<<endl;
// cout<<marks1[4]<<endl;//print the address..
// cout<<marks1[5]<<endl;//print the address..

//Experiment:-
// cout<<"Enter the length of the array"<<endl;
// int n;
// std::cin>>n;
// int marks[n];
// cout<<"Enter the value of array:-"<<endl;
// for(int i=0;i<n+2;i++)//run properly..
// {
//     cout<<"a["<<i<<"]"<<"=";
//     cin>>marks[i];
// }
// cout<<"array elements:"<<endl;
// for(int i=0;i<n+4;i++)//after n+2 value it will print the address of the array..
// {
//     cout<<marks[i]<<"\t";
// }
// cout<<"Enter the length of the array"<<endl;
// int n;
// std::cin>>n;
// int marks[n];
// cout<<"Enter the value of array:-"<<endl;
// for(int i=0;i<n;i++)
// {
//     cout<<"a["<<i<<"]"<<"=";
//     cin>>marks[i];
// }
// cout<<"array elements:"<<endl;
// for(int i=0;i<n;i++)
// {
//     cout<<marks[i]<<"\t";
// }

// pointer and arrays
int marks[4]={123,243,345,426};
int *p=marks;
/*
cout<<*(p++)<<endl;//first printed value than incremented..
cout<<*(++p)<<endl;//first incremented value than printed..
cout<<*(p--)<<endl;//first printed value than decremented..
cout<<*(--p)<<endl;//first decremented value than printed..
*/
cout<<*(p++)<<endl;//first printed value than incremented..
cout<<*(p)<<endl;
cout<<*(++p)<<endl;//first incremented value than printed..
cout<<*(p++)<<endl;//first printed value than incremented..
cout<<*(p++)<<endl;//first printed value than incremented..
cout<<*(p++)<<endl;//printing the address..//Random Address
cout<<*(p++)<<endl;//printing the address..//Random Address
cout<<*(p--)<<endl;//first printed value than decremented..//Random Address
cout<<*(--p)<<endl;//first decremented value than printed..//Random Address
cout<<*(p--)<<endl;//first printed value than decremented..//Random Address
cout<<*(p--)<<endl;//first printed value than decremented..
cout<<*(p--)<<endl;//first printed value than decremented..
cout<<*(p--)<<endl;//first printed value than decremented..
cout<<*(p--)<<endl;//first printed value than decremented..
cout<<*(p--)<<endl;//first printed value than decremented..//Random Address
cout<<*(p--)<<endl;//first printed value than decremented..//Random Address
cout<<*(p--)<<endl;//first printed value than decremented..//Random Address
cout<<*(p--)<<endl;//first printed value than decremented..//Random Address

// cout<<"array elements:"<<endl;
// for(int i=0;i<4;i++)//if we try to take length more than array length than address will be print..
// {
//     cout<<*(p+i)<<"\t";
// }

return 0;
}

/*
quick_quiz_2:-
WAP to input and print the value of array using while and do while loop..
*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Enter the length of the array" << endl;
//     int n;
//     std::cin >> n;
//     int marks[n];
//     cout << "Enter the value of array:-" << endl;

//     // Using while loop:-
//     // int i=0;
//     // while(i<n)
//     // {
//     //         cout<<"a["<<i<<"]"<<"=";
//     //     cin>>marks[i];
//     //     i++;
//     // }
//     // cout<<"array elements:"<<endl;
//     // int j=0;
//     // while(j<n)
//     // {
//     //         cout<<marks[j]<<"\t";
//     //     j++;
//     // }

//     // Using do while loop:-
//     int i = 0;
//     do
//     {
//         cout << "a[" << i << "]"
//              << "=";
//         cin >> marks[i];
//         i++;
//     } while (i < n);
//     cout << "array elements:" << endl;
//     int j = 0;
//     do
//     {
//         cout << marks[j] << "\t";
//         j++;
//     } while (j < n);
//     return 0;
// }

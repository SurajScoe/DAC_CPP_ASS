/*4. Write a program to accept an integer and check if it is even or odd.
*/
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;

    if(num%2==0){
        cout<<"Its an even number !!";
    }
    else{
        cout<<"Its an odd number !!";
    }

    return 0;
}
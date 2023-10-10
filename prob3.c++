/*3:Write a program to swap two numbers.*/
#include<iostream>
using namespace std;
int main()
{
    int a , b;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;

    cout<<"Before Swapping :: the value of 'a' and 'b' are "<<a<<" and "<<b<<" respectively"<<endl;

    int temp = a;
    a = b;
    b = temp;

    cout<<"After Swapping :: the value of 'a' and 'b' are "<<a<<" and "<<b<<" respectively"<<endl;

    return 0;
}
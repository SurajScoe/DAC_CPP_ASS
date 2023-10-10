/*18:Write a program to find greatest of three numbers using nested if-else.
*/

#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"Enter the number n1 : "<<endl;
    cin>>n1;
    cout<<"Enter the number n2 : "<<endl;
    cin>>n2;
    cout<<"Enter the number n3 : "<<endl;
    cin>>n3;

    if(n1>n2 && n1>n3){
        cout<<"n1 is greatest number !!"<<endl;
    }
    else if(n2>n3){
        cout<<"n2 is greatest number !!"<<endl;
    }
    else {
        cout<<"n3 is greatest number !!"<<endl;
    }
    return 0;
}
/*5. Write a program to accept a number and check if it is divisible by 5 and 7.
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    if(n%5==0 && n%7==0)
    {
        cout<<"Yes its divisible by both!!"<<endl;
    }
    else
    {
        cout<<"its not divisible by both!!"<<endl;
    }
    return 0;
}
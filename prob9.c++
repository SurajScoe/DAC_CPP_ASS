/*9:Write a program to find factorial of a given number. ex:no5  fact=5*4*3*2*1=120
*/
#include<iostream>
using namespace std;

int main()
{
    int num, fact=1;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    int temp = num;
    while(num>0){
        fact *= num;
        num--;
    }
    cout<<"The factorial of "<<temp<<"! is "<<fact<<endl;
    return 0;
}
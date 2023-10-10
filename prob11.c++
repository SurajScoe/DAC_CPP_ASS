/*11:Check if number is a prime number or not.: 
*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    bool flag = true;
    if(num==1 && num==0){
        cout<<"Its not prime number !!"<<endl;
    }
    for (int i = 2; i < num; i++)
    {
        /* code */
        if(num%i==0){
            flag = false;
        }
    }

    if(flag)
    cout<<"The given number is prime number"<<endl;
    else
    cout<<"The given number is not prime number"<<endl;
    
    return 0;
}
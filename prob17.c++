/*17:Write a program to check entered number is Armstrong number or not.
*/
#include<iostream>
using namespace std;

int main()
{
    int n,r,sum=0;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    int temp = n;
    while (n>0)
    {
        /* code */

        r = n%10;
        sum += r*r*r;
        n/=10;
    }

    if(sum==temp){
        cout<<"Its an Amstrong number"<<endl;
    }
    else{
        cout<<"Its not an Amstrong number"<<endl;
    }

    
    
    
    return 0;
}
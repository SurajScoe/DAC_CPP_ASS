/*15: Write a  program to enter a number and print its reverse.
*/

#include<iostream>
using namespace std;

int main()
{
    int n,rem,rev=0;
    cout<<"Enter the number : "<<endl;
    cin>>n;

    while(n>0){
        rem = n%10;
        rev = rev*10 + rem;
        n/=10;
    }

    cout<<"The reverser of the number is : "<<rev<<endl;
    return 0;
}
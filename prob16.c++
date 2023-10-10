/*16:Write a  program to print all Prime numbers between 1 to n. 
*/
#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n==1 || n==0)
    return false;
    for (int i = 2; i < n; i++)
    {
        /* code */
        if(n%i==0){
            return false;
        }
    }
    return true;
    
}
int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        /* code */
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    
    return 0;
}
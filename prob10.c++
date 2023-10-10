/*10:Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3
*/

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the value of n"<<endl;
    cin>>m;
    cout<<"Enter the value of m"<<endl;
    cin>>n;
    int res=1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        res *= m;
    }

    cout<<"m = "<<m<<" and"<<" n = "<<n<<" so "<<res<<endl;
    
    return 0;
}
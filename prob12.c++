/*12:Sum of series : 1+2+3+….+n*/
#include<iostream>
using namespace std;

int main()
{
    int num, sum=0;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    // for(int i=1;i<=num;i++)
    // {
    //     sum+=i;
    // }
    int res = num*(num+1)/2;
    // cout<<"Sum of series :"<<sum<<endl;
    cout<<"Sum of series :"<<res<<endl;
    return 0;
}
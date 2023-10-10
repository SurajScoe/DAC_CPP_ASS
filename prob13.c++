/*13:Check whether the number is palindrome or not?
*/

#include<iostream>
using namespace std;
int main()
{
    int num,rem,sum=0;
    cout<<"Enter the number !!"<<endl;
    cin>>num;
    int temp = num;
    while(num>0)
    {
        /* code */
        rem = num%10; // 121 ==> 1 12 ==> 2
        sum = sum*10+ rem; // 
        num/=10; // 12
    }

    if(temp==sum){
        cout<<"Its a palindrome !!"<<endl;
    }
    else{
        cout<<"Its not a palindrome !!"<<endl;
    }
    
    return 0;
}
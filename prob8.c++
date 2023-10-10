/*8. Write a  program to input angles of a triangle and check whether triangle is valid or not.
*/
#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3;
    cout<<"Enter the angles of triangle"<<endl;
    cin>>a1>>a2>>a3;

    if(a1+a2+a3==180){
        cout<<"Its a triangle !!"<<endl;
    }
    else{
        cout<<"Its not a triangle !!"<<endl;
    }

    return 0;
}
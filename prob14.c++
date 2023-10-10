/*14:Write a  program to find sum of all even and odd numbers between 1 to n. 
*/

#include<iostream>
using namespace std;

int main()
{
    int num,sumE=0,sumO=0;
    cout<<"Enter the number : "<<endl;
    cin>>num;

    for (int i = 2; i < num; i++)
    {
        /* code */
        if(i%2==0){
            sumE += i;
        }
        else{
            sumO += i;
        }
    }

    cout<<"sum of all even and odd numbers between 1 to "<<num<<" are "<<sumE<<" , "<<sumO<<" respectively."<<endl;
    
    return 0;
}
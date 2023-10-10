/*6. Write a program, which accepts annual basic salary of an employee and calculates and displays the 
Income tax as per the following rules. 
Basic: < 1, 50,000 Tax = 0
 1, 50,000 to 3,00,000 Tax = 20% 
 > 3,00,000 Tax = 30% */
#include<iostream>
using namespace std;
int main()
{
    int basicSal;
    cout<<"Enter the basic Salary of Employee !!"<<endl;
    cin>>basicSal;

    
    if(basicSal<150000)
    cout<<"Tax = 0"<<endl;
    else if(basicSal>150000 && basicSal<300000)
    cout<<"Tax = 20%"<<endl;
    else if(basicSal>300000)
    cout<<"Tax = 30%"<<endl;
    else
    cout<<"Pleas enter valid amount!!"<<endl;
    return 0;
}
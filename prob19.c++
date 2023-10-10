/*19:Create menu driven program for Pizza Shop.And display total amount,
*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"!!!--------WELCOME TO THE KHANDESHII PIZZA MENNIA----------!!!"<<endl;
    int choice,sum=0;
    cout<<"--------MENU---------"<<endl;
    cout<<"1 for onion pizza === only for 1000 rs"<<endl<<"2 for corn pizza === only for 10000 rs"<<endl<<"3 for Desi paneer pizza === only for 20000 rs"<<"4 to exit"<<endl;
    do{
        cout<<"Enter your choice !!"<<endl;
      
        cin>>choice;
        switch (choice)
        {
        case 1:
            /* code */
            sum+=1000;
            break;
        
        case 2:
            /* code */
            sum+=10000;
            break;
        
        case 3:
            /* code */
            sum+=20000;
            break;
        
        case 4:
            /* code */
            cout<<"Hope you Liked our service!!"<<endl;
            break;
        
        default:
            break;
        }
    }while(choice!=4);

    cout<<"Your total bill is : "<<sum<<endl;
    cout<<"-------------sionara visit again------------------";
    return 0;
}
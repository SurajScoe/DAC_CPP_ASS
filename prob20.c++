/*20:Accept a single digit from the user and display it in words. For example, if digit entered is 9, display Nine.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
     cout<<"Enter your single digit number !!"<<endl;
      
        cin>>n;
        switch (n)
        {
        case 1:
            /* code */
            cout<<"One"<<endl;
            break;
        
        case 2:
            /* code */
            cout<<"Two"<<endl;
            break;
        
        case 3:
            /* code */
            cout<<"Three"<<endl;
            break;
        
        case 4:
            /* code */
         cout<<"Four"<<endl;
            break;
        
        case 5:
            /* code */
         cout<<"Five"<<endl;
            break;
        
        case 6:
            /* code */
         cout<<"Six"<<endl;
            break;
        
        case 7:
            /* code */
         cout<<"Seven"<<endl;
            break;
        
        case 8:
            /* code */
         cout<<"Eigth"<<endl;
            break;

        case 9:
            /* code */
         cout<<"Nine"<<endl;
            break;
        
        default:
        cout<<"Plz Enter Valid Number !!"<<endl;
            break;
        }
    return 0;
}
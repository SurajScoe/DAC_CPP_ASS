/*7. Accept a lowercase character from the user and check whether the character is a vowel or consonant. 
(Hint: a, e, i, o, u are vowels)*/
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any lower-case Character : "<<endl;
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"Ok!! You entered the lower-case Character !!"<<endl;
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<"Yes!! its a vowel"<<endl;
        }
        else{
            cout<<"No!! its a consonant"<<endl;
        }
    }
    else{
        cout<<"Plz!! only lower-case chacter allowed"<<endl;
    }
    return 0;
}
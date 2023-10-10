/*21. Write a program, which accepts two integers and an operator as a character (+ - * / ), performs the
corresponding operation and displays the result.*/

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    char ch;
    cout << "Enter the number 1 " << endl;
    cin >> n1;
    cout << "Enter the number 2 " << endl;
    cin >> n2;
    cout << "Enter the operator (+ - * / ) " << endl;
    cin >> ch;

    switch (ch)
    {
    case '+':
        /* code */
        cout << "Addition of n1 and n2 is " << n1 + n2 << endl;
        break;

    case '-':
        /* code */
        cout << "Substraction of n1 and n2 is " << n1 - n2 << endl;
        break;

    case '*':
        /* code */
        cout << "Multiplication of n1 and n2 is " << n1 * n2 << endl;
        break;

    case '/':
        /* code */
        cout << "Division of n1 and n2 is " << n1 / n2 << endl;
        break;

    default:
        cout << "Plz Enter valid Operator !!" << endl;
        break;
    }

    return 0;
}
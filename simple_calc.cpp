#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number_1,number_2;
    char sign;
    cout<<"Enter The number: ";
    cin>>number_1;
    cout<<"Enter The Operation: ";
    cin>>sign;
    cout<<"Enter The Another Number: ";
    cin>>number_2;
    int Sum;
    switch (sign)
    {
    case '+':
        Sum=number_1 + number_2;
        cout<<"The Addition of Two numbers is "<<Sum;

        break;
    case '-':
        Sum=number_1 - number_2;
        cout<<"The Subtraction of Two numbers is "<<Sum;
        break;
    case '*':
        Sum=number_1 * number_2;
        cout<<"The Multiplication of Two numbers is "<<Sum;
        break;
    case '/':
        if(number_2 == 0)
        {
            cout<<"Math Error";
        }
        else 
        {
            Sum= number_1 / number_2;
            cout<<"The Division of Two numbers is "<<Sum;
        }
        break;

    default:
        cout<<"Operation You Given is Undefined.";
        break;
    }
}

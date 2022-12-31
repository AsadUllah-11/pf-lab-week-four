#include <iostream>
using namespace std;
void add(int number1, int number2);
void subtraction(int number1, int number2);
void multiply(int number1, int number2);
void division(int number1, int number2);
main()
{
    int number1, number2;
    cout << "Enter First Number: ";
    cin >> number1;
    cout << "Enter Second Number: ";
    cin >> number2;
    char choice;
    cout << "Enter Operator Symbol(+,-,*,/): ";
    cin >> choice;
    if (choice == '+')
    {
        add(number1, number2);
    }
    if (choice == '-')
    {
        subtraction(number1, number2);
    }
    if (choice == '*')
    {
        multiply(number1, number2);
    }
    if (choice == '/')
    {
        division(number1, number2);
    }
}
void add(int number1, int number2)
{
    int sum = number1 + number2;
    cout << "Sum is " << sum;
}
void subtraction(int number1, int number2)
{
    int subtraction = number1 - number2;
    cout << "Subtracion is " << subtraction;
}
void multiply(int number1, int number2)
{
    int multiply = number1 * number2;
    cout << "Multiplication is " << multiply;
}
void division(int number1, int number2)
{
    int division = number1 / number2;
    cout << "Division is " << division;
}

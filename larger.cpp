#include <iostream>
using namespace std;
void maximum(int number1, int number2);
void minimum(int number1, int number2);
void isEqual(int number1, int number2);
main()
{
    while (true)
    {
        int number1;
        int number2;
        cout << "Enter First Number: ";
        cin >> number1;
        cout << "Enter Second Number: ";
        cin >> number2;
        int choice;
        cout << "Enter Choice(1-3): ";
        cin >> choice;
        if (choice == 1)
        {
            maximum(number1, number2);
        }
        if (choice == 2)
        {
            minimum(number1, number2);
        }
        if (choice == 3)
        {
            isEqual(number1, number2);
        }
    }
}
void maximum(int number1, int number2)
{
    if (number1 > number2)
    {
        cout << number1 << " is Greater" << endl;
    }
    if (number2 > number1)
    {
        cout << number2 << " is Greater" << endl;
    }
}
void minimum(int number1, int number2)
{
    if (number1 < number2)
    {
        cout << number1 << " is Smaller" << endl;
    }
    if (number2 < number1)
    {
        cout << number2 << " is Smaller" << endl;
    }
}
void isEqual(int number1, int number2)
{
    if (number1 == number2)
    {
        cout << "The Numbers are Equal" << endl;
    }
    if (number1 != number2)
    {
        cout << "The Numbers are Not Equal" << endl;
    }
}
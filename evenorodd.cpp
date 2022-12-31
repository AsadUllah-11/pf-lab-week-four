#include<iostream>
using namespace std;
void isEven(int number);
main() 
{
while(true)
{
int number;
cout << "Enter Number: ";
cin >> number;
isEven(number);
}
}
void isEven(int number)
{
if (number%2==0) 
{
cout << "The Number is Even" << endl;
}
if (number%2!=0) 
{
cout << "The Number is Odd" << endl;
}
}
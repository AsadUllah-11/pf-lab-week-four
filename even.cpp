#include<iostream>
using namespace std;
void checkevenorodd(int number);
main() 
{
int number;
while(true)
{
cout << "Enter a Number: ";
cin >> number;
checkevenorodd(number);
}
}
void checkevenorodd(int number)
{
if (number%2==0)
{
cout << "Number is Even"<<endl;
}
if (number%2!=0)
{
cout << "Number is Odd"<<endl;
}
}
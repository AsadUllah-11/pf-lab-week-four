#include<iostream>
using namespace std;
void iseligible(int age);
main()
{
int age;
cout << "Enter Age: ";
cin >> age;
iseligible(age);
}
void iseligible(int age)
{
if (age>=18)
{
cout << "You are Eligible ";
}
if (age<18)
{
cout << "You are not Eligible";
}
}

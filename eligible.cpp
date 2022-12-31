#include<iostream>
using namespace std;
void isEligible(int age);
main() 
{
while(true)
{
int age;
cout << "Enter Age: ";
cin >> age;
isEligible(age);
}
}
void isEligible(int age) 
{
if (age>=18)
{
cout << "Eligible" << endl;
}
if (age<18)
{
cout << "Not Eligible" << endl;
}
}
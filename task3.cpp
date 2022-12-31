#include<iostream>
using namespace std;
void checkresult(int marks);
main()
{
int marks;
cout << "Enter your marks: ";
cin >> marks;
checkresult(marks);
}
void checkresult(int marks)
{
if (marks>=50)
{
cout << "You are Pass";
}
if (marks<50)
{
cout << "You are Fail";
}
}
#include <iostream>
using namespace std;
void displaydetails(string name,int marks,string section,float aggregate);
main()
{
	int marks;
	string name;
	cout << "Enter Your Name: ";
	cin >> name;
	cout << "Enter Your Marks: ";
	cin >> marks;
	string section;
	float aggregate;
	cout << "Enter Your Section: ";
	cin >> section;
	cout << "Enter Your Aggregate: ";
	cin >> aggregate;
	displaydetails(name,marks,section,aggregate);
}
void displaydetails(string name,int marks,string section,float aggregate)
{
	cout << "Your Name is " << name << endl;
	cout << "Your Marks are " << marks <<endl;
	cout << "Your Section is " << section << endl;
	cout << "Your Aggregate is " << aggregate;
}
	
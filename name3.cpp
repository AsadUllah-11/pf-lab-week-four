#include <iostream>
using namespace std;
void printName(string name);
main()
{
    string name;
    cout << "Enter Name: ";
    cin >> name;
    if (name != "Irzam")
    {
	cout << "Enter Name: ";
	cin >> name;
     }   
    if (name == "Irzam")
	{
	while (true)
	{
	printName(name);
	}
	}
}
void printName(string name)
{
    cout << name << endl;
}
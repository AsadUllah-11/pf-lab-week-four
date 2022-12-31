#include <iostream>
using namespace std;
void calculateBill(string day, int amount);
main()
{
    while (true)
    {
        string day;
        int amount;
        cout << "Enter Day: ";
        cin >> day;
        cout << "Enter Total Amount: ";
        cin >> amount;
        calculateBill(day, amount);
    }
}
void calculateBill(string day, int amount)
{
    float total, total1;
    if (day == "sunday")
    {
        total = (0.1 * amount);
        total1 = amount - total;
        cout << "Total Amount is " << total1 << endl;
    }
    if (day != "sunday")
    {
	float discount;
	discount = 0.05*amount;
        total = amount-discount;
        cout << "Total Amount is " << total << endl;
    }
}
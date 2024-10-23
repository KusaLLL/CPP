#include <iostream>
using namespace std;

int main() 
{
	int pkg;
	cout << "Available Packages " << endl; 
	cout << "1.Horse Riding " << endl; cout << "2.Scuba Diving" << endl; cout << "3. Water Rafting" << endl;
	cout << "Enter oackage (1-3) :"; cin >> pkg;
	if (pkg >= 1 && pkg <= 3)
	{

		switch (pkg)
		{
		case 1:
		{
			int no_of_persons, total_fee;
			cout << "YOu Selected Horse Riding (2000/=) :" << endl;
			cout << "Enter number of persons :"; cin >> no_of_persons;
			total_fee = 2000 * no_of_persons;

			cout << "Total price for " << no_of_persons << " are " << total_fee;
			break;
		}

		case 2:
		{

			int no_of_persons, total_fee;
			cout << "YOu Selected Scuba Diving (5000/=) :" << endl;
			cout << "Enter number of persons :"; cin >> no_of_persons;
			total_fee = 5000 * no_of_persons;
			cout << "Total price for " << no_of_persons << " are " << total_fee;
			break;
		}

		case 3:
		{
			int no_of_persons, total_fee;
			cout << "YOu Selected Water Rafting (7000/=) :" << endl;
			cout << "Enter number of persons :"; cin >> no_of_persons;
			total_fee = 7000 * no_of_persons;
			cout << "Total price for " << no_of_persons << " are " << total_fee;
			break;
		}


		}
		return 0;
	}

	else 
	{
		cout << "Invalid Package Please Enter Correct Package Number !!!";
	}
}
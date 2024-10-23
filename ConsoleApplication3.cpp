#include <iostream>
using namespace std;

int main() {

	double marks;
	cout << "Enter Marks :"; cin >> marks;

	if (marks >= 75 && marks <= 100) 
	{
		cout << "your Grade is A" << endl;
	}
	else if (65 >= marks <= 74) 
	{
		cout << "Your Grade is B" << endl;
	}

	else if (55 >= marks <= 64)
	{
		cout << "Your Grade is C" << endl;
	}

	else if (40 >= marks <= 54)
	{
		cout << "Your Grade is D" << endl;
	}

	else {
		cout << "Your Grade is F" << endl;
	}

	if (marks > 100) {
		cout << "Enter Valid mark" << endl;
	}
}


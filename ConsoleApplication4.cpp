#include <iostream>
using namespace std;

int main() 
{
	char shape;
	cout << "Enter the first charater for the shape R- rectangle C - circle  T - triangle :"; cin >> shape;

	switch (shape) 
	{

	case 'R':
	case 'r' :
	{
		double width, length, area;
		cout << "Enter Width :"; cin >> width;
		cout << "Enter lenghth :"; cin >> length;
		area = width * length;

		if (width > 0 && length > 0) 
		{
			cout << "Area is " << area << endl;
		}

		else 
		{
			cout << "Wrong Parameters!!!";
		}
		
		break;
	}

	case 'T':
	case 't' :
	{
		double width, height, area;
		cout << "Enter Width :"; cin >> width;
		cout << "Enter height :"; cin >> height;
		area = width * height * 0.5;

		if (width > 0 && height > 0) {
			cout << "Area is " << area << endl;
		}
		else {
			cout << "Wrong Parameters!!";
		}
		
		break;
	}
	
	case 'C' :
	case 'c' :
	{
		double radious,area;
		cout << "Enter radious :"; cin >> radious;
		area = 3.14 * radious * radious;
		
		if (radious > 0) {
			cout << "Area is " << area << endl;
		}

		else
			cout << "Wrong parameters!!!";
		
		break;

	}
	}
	return 0;
}
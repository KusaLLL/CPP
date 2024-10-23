#include<iostream>

using namespace std;

int main() {

	string student_id;
	cout << "Enter Student ID :";
	cin >> student_id;

	string name;
	cout << "Enter Student name :";
	cin >> name;

	string subject_id;
	cout << "Enter subject ID :";
	cin >> subject_id;

	string subject_name;
	cout << "Enter subject name :";
	cin >> subject_name;

	double marks;
	cout << "Enter Student marks :";
	cin >> marks;

	string grade;
	if (marks > 40) {

		grade = "A+" ;
	}

	else {
		grade = "F" ;
	}

	cout << "Student Id :" << student_id << endl;
	cout << "student name :" << name << endl;
	cout << "Subject id :" << subject_id << endl;
	cout << "Subject name :" << subject_name << endl;
	cout << "grade : " << grade << endl;
	return 0;
}
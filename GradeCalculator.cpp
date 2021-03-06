#include <iostream>
using namespace std;

// Taygun Gökdemir 
// Grade Calculator for a Class 


int main()
{
	double m1, m2, f, p; // Midterm, final and project variables.
	double average; // A variable to hold the average score.

	// User inputs.

	cout << "Please Enter Your First Midterm Result: " << endl;
	cin >> m1;
	cout << "Please Enter Your Second Midterm Result: " << endl;
	cin >> m2;
	cout << "Please Enter Your Project Result: " << endl;
	cin >> p;
	cout << "Please Enter Your Final Result: " << endl;
	cin >> f;

	// Midterm 1 & 2 (%22.5 x 2), Project Grade (%25), Final Exam (%30)

	average = m1*0.225 + m2*0.225 + p*0.25 + f*0.30; // The average calculation.

	if (average < 50)
	{
		cout << "You Got F." << ' ' // 0 - 49 is "F" 
			<< "Better Luck Next Time" << endl; //Gives a message to the user.
	}
	else if (average <= 59)
	{
		cout << "You Got D" << endl; // 50 - 59 is "D"
	}
	else if (average <= 64)
	{
		cout << "You Got C" << endl; // 60 - 64 is "C"
	}
	else if (average <= 69)
	{
		cout << "You Got C+" << endl; // 65 - 69 is "C+"
	}
	else if (average <= 74)
	{
		cout << "You Got B" << endl; // 70 - 74 is "B"
	}
	else if (average <= 79)
	{
		cout << "You Got B+" << endl; // 75 - 79 is "B+"
	}
	else if (average <= 89)
	{
		cout << "You Got A" << endl; // 80 - 89 is "A"
	}
	else if (average <= 100)
	{
		cout << "You Got A+." << ' ' // 90 - 100 is "A+"
			<< "Congratulations!" << endl; // Gives a message to the user.
	}
	else
	{
		cout << "Please Enter Your Grades on a Scale from 0-100" << endl; // Gives an error if the user enters invalid grades.
	}
	
}

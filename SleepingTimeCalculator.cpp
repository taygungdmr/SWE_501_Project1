// Sleeping Time Calculator: Calculates the total sleeping time for a person.
// Taygun Gökdemir ID: 2015719078

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// The "person" class

class person
{
private:
	string name;
	string gender;
	int hour;
	int age;
public:
	
	// Default values for the variables
	
	person()
	{
		name = "Ali";
		gender = "Male";
		hour = 6;
		age = 32;

	}
	//Constructor 
	
	person (string n, string g, int h, int a)
	{
	
		name = n;
		gender = g;
		hour = h;
		age = a;
	
	}
	
	// Set functions
	
	void setName(string n) { name = n; }
	void setGender(string g) { gender = g; }
	void setHour(int h) { hour = h; }
	void setAge(int a) { age = a; }
	void setAll(string n, string g, int h, int a)
	{
		name = n;
		gender = g;
		hour = h;
		age = a;
	}
	
	// Get functions
	
	string getName() { return name; }
	string getGender() { return gender; }
	int getHour() { return hour; }
	int getAge() { return age; }
	
	// Print function

	void printAll()
	{
		cout << "Name: " << name << endl;
		cout << "Gender: " << gender << endl;
		cout << "Hour: " << hour << endl;
		cout << "Age: " << age << endl;
		
	}
}person1;

int main()
{
	
	int hours, day, month, year, pick;
	

	person person2;
	person2.setAll("Can", "Male", 5, 14); // setAll usage
		
    // Constructor usage
	
	person person3("Dilan", "Female", 7, 21);
	
	person person4("Seren", "Female", 45, 9);
			
	person person5("Tolga", "Male", 78, 8);

	person person6("Naz", "Female", 29, 7);

	cout << "1 - Ali" << endl;	
	cout << "2 - Can" << endl;
	cout << "3 - Dilan" << endl;
	cout << "4 - Seren" << endl;
	cout << "5 - Tolga" << endl;
	cout << "6 - Naz" << endl;
	cout << "Pick Your Choices on a Scale from 1-6 : " << endl;

	cin >> pick;

	switch (pick)
	{

	case 1:
		
		hours = person1.getAge()*365*person1.getHour();
		day = hours / 24;
		month = day / 30;
		year = month / 12;
		
		cout << "General Info" << endl;
		cout << " " << endl;
		
		person1.printAll();
		
		cout <<" "<<endl;
		cout << person1.getName() << " is slept " << hours << " hours, " << day << " days, " << month << " months and " << year << " years in his whole life." << endl;
		
		break;

	case 2:
		
		hours = person2.getAge() * 365 * person2.getHour();
		day = hours / 24;
		month = day / 30;
		year = month / 12;
		
		cout << "General Info" << endl;
		cout << " " << endl;

		person2.printAll();
		
		cout << " " << endl;
		cout << person2.getName() << " is slept " << hours << " hours, " << day << " days, " << month << " months and " << year << " years in his whole life." << endl;
		break;

	case 3:

		hours = person3.getAge() * 365 * person3.getHour();
		day = hours / 24;
		month = day / 30;
		year = month / 12;

		cout << "General Info" << endl;
		cout << " " << endl;
		
		person3.printAll();
		
		cout << " " << endl;
		cout << person3.getName() << " is slept " << hours << " hours, " << day << " days, " << month << " months and " << year << " years years in her whole life." << endl;
		break;

	case 4:

		hours = person4.getAge() * 365 * person4.getHour();
		day = hours / 24;
		month = day / 30;
		year = month / 12;

		cout << "General Info" << endl;
		cout << " " << endl;
		
		person4.printAll();
		
		cout << " " << endl;
		cout << person4.getName() << " is slept " << hours << " hours, " << day << " days, " << month << " months and " << year << " years in her whole life." << endl;
		break;

	case 5:

		hours = person5.getAge() * 365 * person5.getHour();
		day = hours / 24;
		month = day / 30;
		year = month / 12;

		cout << "General Info" << endl;
		cout << " " << endl;
		
		person5.printAll();
		
		cout << " " << endl;
		cout << person5.getName() << " is slept " << hours << " hours, " << day << " days, " << month << " months and " << year << " years in his whole life." << endl;
		break;

	case 6:

		hours = person6.getAge() * 365 * person6.getHour();
		day = hours / 24;
		month = day / 30;
		year = month / 12;

		cout << "General Info" << endl;
		cout << " " << endl;
		
		person6.printAll();
		
		cout << " " << endl;
		cout << person6.getName() << " is slept " << hours << " hours, " << day << " days, " << month << " months and " << year << " years in her whole life." << endl;
		break;
		
	}


	system("pause");
  
}

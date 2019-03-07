#include <iostream>
#include <string>
#include "securityStudent.h"

SecurityStudent::SecurityStudent() {}

SecurityStudent::SecurityStudent(string ID, string First, string Last, string emailAddress, int setAge, int *numDays, Degree studentDegree) : Student(ID, First, Last, emailAddress, setAge, numDays) {

	degProg = studentDegree;
}

Degree SecurityStudent::getDegreeProgram()
{
	return degProg;
}

void SecurityStudent::Print() {

	cout << getStudentID();
	cout << "\tFirst Name: " << getFirstName();
	cout << "\t Last Name: " << getLastName();
	cout << "\t Age: " << getAge();
	cout << "\t" << "daysInCourse: {"; cout << getDaysToComplete()[0] << ", " << getDaysToComplete()[1] << ", " << getDaysToComplete()[2] << "}";
	cout << "\t Degree Program: SECURITY";
	cout << endl;
}

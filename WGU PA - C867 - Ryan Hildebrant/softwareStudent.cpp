#include <iostream>
#include <string>
#include "softwareStudent.h"

SoftwareStudent::SoftwareStudent() {}

SoftwareStudent::SoftwareStudent(string ID, string First, string Last, string emailAddress, int setAge, int *numDays, Degree studentDegree) : Student(ID, First, Last, emailAddress, setAge, numDays) {

	degProg = studentDegree;
}

Degree SoftwareStudent::getDegreeProgram()
{
	return degProg;
}

void SoftwareStudent::Print() {

	cout << getStudentID();
	cout << "\tFirst Name: " << getFirstName();
	cout << "\t Last Name: " << getLastName();
	cout << "\t Age: " << getAge();
	cout << "\t" << "daysInCourse: {"; cout << getDaysToComplete()[0] << ", " << getDaysToComplete()[1] << ", " << getDaysToComplete()[2] << "}";
	cout << "\t Degree Program: SOFTWARE";
	cout << endl;
}
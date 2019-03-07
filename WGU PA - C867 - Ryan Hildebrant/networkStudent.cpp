#include <iostream>
#include "networkStudent.h"

NetworkStudent::NetworkStudent() {}

NetworkStudent::NetworkStudent(string ID, string First, string Last, string emailAddress, int setAge, int *numDays, Degree studentDegree) : Student(ID, First, Last, emailAddress, setAge, numDays) {

	degProg = studentDegree;
}

Degree NetworkStudent::getDegreeProgram() {

	return degProg;
}

void NetworkStudent::Print() {

	cout << getStudentID();
	cout << "\tFirst Name: " << getFirstName();
	cout << "\t Last Name: " << getLastName();
	cout << "\t Age: " << getAge();
	cout << "\t" << "daysInCourse: {"; cout << getDaysToComplete()[0] << ", " << getDaysToComplete()[1] << ", " << getDaysToComplete()[2] << "}";
	cout << "\t Degree Program: NETWORK";
	cout << endl;
}


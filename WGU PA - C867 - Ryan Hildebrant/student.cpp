#include <iostream>
#include <string>
#include "student.h"

using namespace std;

// Default constructor

Student::Student() {}

//Parametrized Constructor 
Student::Student(string ID, string First, string Last, string EmailAddress, int setAge, int* numDays) {

	studentID = ID;
	firstName = First;
	lastName = Last;
	email = EmailAddress;
	age = setAge;
	daysToComplete[0] = numDays[0];
	daysToComplete[1] = numDays[1];
	daysToComplete[2] = numDays[2];
}

string Student::getStudentID()
{
	return studentID;
}

void Student::setStudentID(string ID)
{
	this->studentID = ID;
}

string Student::getFirstName()
{
	return firstName;
}

void Student::setFirstName(string First)
{
	this->firstName = First;
}

string Student::getLastName()
{
	return lastName;
}

void Student::setLastName(string Last)
{
	this->lastName = Last;
}

string Student::getEmail()
{
	return email;
}

void Student::setEmail(string EmailAddress)
{
	this->email = EmailAddress;
}

int Student::getAge()
{
	return age;
}

void Student::setAge(int setAge)
{
	this->age = setAge;
}

int * Student::getDaysToComplete()
{
	return daysToComplete;
}

void Student::setDaysToComplete(int numDays0, int numDays1, int numDays2)
{
	this->daysToComplete[0] = numDays0;
	this->daysToComplete[1] = numDays1;
	this->daysToComplete[2] = numDays2;
}

void Student::setDegree(string degree)
{
	degree = degree;
}


Degree Student::getDegreeProgram() {
	return Degree::SOFTWARE;
}

void Student::Print() {

}

//Destructor called 
Student::~Student() {}
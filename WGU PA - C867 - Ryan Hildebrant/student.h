#pragma once
#include <string>
#include "degree.h"

using namespace std;

class Student{
private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age; 
	int daysToComplete[3];

public:

	Student(); //Constructor
	

	string getStudentID(); //Accessor
	void setStudentID(string studentID); //Mutator
	string getFirstName(); 
	void setFirstName(string firstName);
	string getLastName();
	void setLastName(string lastName);
	string getEmail();
	void setEmail(string email);
	int getAge();
	void setAge(int age);
	int *getDaysToComplete();
	void setDaysToComplete(int course1, int course2, int course3);
	void setDegree(string degree);

	virtual void Print();

	Degree virtual getDegreeProgram();

	Student(string ID, string First, string Last, string EmailAddress, int setAge, int * numDays);
	
	~Student(); //Destructor
};
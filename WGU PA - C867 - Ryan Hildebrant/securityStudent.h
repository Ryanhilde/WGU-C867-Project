#pragma once
#include "student.h"

class SecurityStudent : public Student {
private:
	Degree degProg = SECURITY;
public:
	Degree getDegreeProgram() override;

	void Print();
		
		SecurityStudent();
		SecurityStudent(string, string, string, string, int, int*, Degree);
};

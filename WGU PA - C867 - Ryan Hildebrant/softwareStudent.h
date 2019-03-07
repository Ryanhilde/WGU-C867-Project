#pragma once
#include "student.h"

class SoftwareStudent : public Student {
private:
	Degree degProg = SOFTWARE;
public:
	Degree getDegreeProgram() override;

	void Print();
	
	SoftwareStudent();
	SoftwareStudent(string, string, string, string, int, int*, Degree);


};
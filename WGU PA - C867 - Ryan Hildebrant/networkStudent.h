#pragma once
#include "student.h"

class NetworkStudent : public Student {
private:
	Degree degProg = NETWORKING;
public:
	Degree getDegreeProgram() override;

	

	NetworkStudent();
	NetworkStudent(string, string, string, string, int, int*, Degree);
	
	void Print();



};
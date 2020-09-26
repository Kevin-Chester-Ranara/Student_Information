#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

class Student_Info
{
public:
	Student_Info(const std::string& Studentfile);
	void Add(std::string& subject);
	bool IsSubjectGood(std::string& subject);
private:
	std::string name;
	std::vector<std::pair<std::string, double>>  subject_grade;
};


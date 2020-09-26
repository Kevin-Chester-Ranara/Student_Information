#include "Student_Info.h"

Student_Info::Student_Info(const std::string& Studentfile)
	:
	name(Studentfile)
{
	std::ifstream in(name);
	while (!in.eof())
	{
		std::string subject;
		double grade = 0.0;
		std::string info;
		std::getline(in, info);

		std::stringstream si(info);
		si >> subject;
		si >> grade;
		subject_grade.emplace_back(subject, grade);
	}
}

void Student_Info::Add(std::string& subject)
{

}

bool Student_Info::IsSubjectGood(std::string& subject)
{
	for (auto s : subject_grade)
	{
		if (s.first._Equal(subject))
		{
			if (s.second >= 3.0)
			{
				return true;
			}
			else
				return false;
		}
		else
			return false;
	}
}

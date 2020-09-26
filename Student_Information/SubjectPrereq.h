#pragma once
#include <vector>
#include <string>

class SubjectPrereq
{
public:
	SubjectPrereq() = default;
	SubjectPrereq(std::string subject);
private:
	std::vector<std::vector<std::string>> Prerequisites;
};


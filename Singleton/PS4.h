#pragma once
#include "Filesystem.h"
#include <iostream>

using namespace std; 

class PS4 : public Filesystem {
public:
	/*PS4();
	~PS4();*/

	string read(const std::string &filename) { return "Soy PS4\n"; };
	void write(const std::string &filename, const std::string &content) { };

private:

};
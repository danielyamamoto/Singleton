#pragma once
#include "Filesystem.h"
#include <iostream>

using namespace std;

class PS3 : public Filesystem {
public:
	/*PS3();
	~PS3();*/
	
	string read(const std::string &filename) {	return "Soy PS3\n"; };
	void write(const std::string &filename, const std::string &content) { };

private:

};
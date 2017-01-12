#pragma once
#include "Filesystem.h"
#include <iostream>

using namespace std;

class XONE : public Filesystem {
public:
	/*XONE();
	~XONE();*/

	string read(const std::string &filename) { return "Soy XBOXONE\n"; };
	void write(const std::string &filename, const std::string &content) { };

private:

};
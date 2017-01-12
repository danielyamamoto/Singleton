#pragma once
#include "Filesystem.h"
#include <iostream>

using namespace std;

class XONEFilesystem : public Filesystem {
public:
	virtual string read(const string &filename) { }
	virtual void write(const string &filename, const string &content) { }
	
	//string read(const std::string &filename) { return "Soy XBOXONE\n"; };
	//void write(const std::string &filename, const std::string &content) { };

private:

};
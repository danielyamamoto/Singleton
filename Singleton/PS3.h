#pragma once
#include "Filesystem.h"
#include <iostream>

using namespace std;

class PS3Filesystem : public Filesystem {
public:
	string ps3 = "SOY PS3\n";

	//virtual string read(const string &filename) { return ps3; }
	virtual string read(const string &filename) { return "Soy PS3\n"; }
	virtual void write(const string &filename, const string &content) { }

	//string read(const std::string &filename) { return "Soy PS3\n"; };
	//void write(const std::string &filename, const std::string &content) { };

private:

};
#pragma once
#include <iostream>

class Filesystem {
public:
	static Filesystem* Instance();

	virtual std::string read(const std::string& filename) = 0;
	virtual void write(const std::string& filename, const std::string& content) = 0;

	~Filesystem() { }

private:
	Filesystem() { }
	static Filesystem* _instance;
};
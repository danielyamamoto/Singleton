// Singleton.cpp: define el punto de entrada de la aplicaci�n de consola.

#include "stdafx.h"
#include "Filesystem.h"
#include "PS3.h"

int main() {
	Filesystem *myFile;
	myFile->Instance();


	system("PAUSE");
}
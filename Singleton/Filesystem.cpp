#include "Filesystem.h"
#include "PS3.h"
#include "PS4.h"
#include "XONE.h"

Filesystem * Filesystem::Instance() {
#ifdef PLAYSTATION3
	static Filesystem* _instance = (Filesystem*)new PS3();
#elif PLAYSTATION4
	static Filesystem* _instance = (Filesystem*)new PS4();
#endif

	return _instance;
}
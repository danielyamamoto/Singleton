#include "Filesystem.h"
#include "PS3.h"
#include "PS4.h"
#include "XONE.h"

Filesystem &Filesystem::Instance() {
#if PLATFORM == PLAYSTATION3
	static Filesystem* _instance = (Filesystem*)new PS3Filesystem();
//#elif PLATFORM == PLAYSTATION4
//	static Filesystem* _instance = (Filesystem*)new PS4Filesystem();
#endif

	return *_instance;
}
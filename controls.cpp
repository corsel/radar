#include "controls.h"

// Controls class
Controls *Controls::instance = NULL;
Controls::Controls() {}
Controls *Controls::getInstance()
{
	if (Controls::instance == NULL)
		instance = new Controls();
	return instance;
}

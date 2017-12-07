#ifndef _CONTROLS_H_INCLUDED
#define _CONTROLS_H_INCLUDED

#include <stdlib.h>

class Controls // singleton
{
private:
	static Controls *instance;
	Controls(void);
public:
	static Controls *getInstance(void);
};

#endif // _CONTROLS_H_INCLUDED

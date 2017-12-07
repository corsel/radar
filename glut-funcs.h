#ifndef _GLUT_FUNCS_H_INCLUDED
#define _GLUT_FUNCS_H_INCLUDED

#include "object.h"
#include <Windows.h>
#include <gl/GL.h>

namespace GlutFuncs
{
	extern PlayerObject player;
	
	void display(void);
	void idle(void);
  void initialize(int argc, char* argv[]);
}

#endif // _GLUT_FUNCS_H_INCLUDED
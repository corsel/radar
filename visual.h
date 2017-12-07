#ifndef _VISUAL_H_INCLUDED
#define _VISUAL_H_INCLUDED

#include <Windows.h>
#include <gl/GL.h>
#include <freeglut.h>

class VisualIface // abstract class
{
private:
public:
	VisualIface(void);
	virtual void render(void) = 0;
};

class VisualPlayerObject : public VisualIface
{
private:
public:
	VisualPlayerObject(void);
	void render(void); // virtual implementation
};


#endif // _VISUAL_H_INCLUDED

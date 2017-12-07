#include "visual.h"

// VisualIface class
VisualIface::VisualIface() {}

// VisualPlayerObject class
VisualPlayerObject::VisualPlayerObject() {}
void VisualPlayerObject::render() 
{
	glScalef(1.0f, 1.0f, 1.0f);
	glColor4f(0.2f, 0.2f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(-0.09f, -0.1f);
	glVertex2f(0.0f, -0.05f);
	glVertex2f(0.09f, -0.1f);
	glVertex2f(0.0f, 0.15f);
	glEnd();
	glScalef(0.55, 0.6f, 1.0f);
	glColor4f(0.7f, 0.7f, 0.7f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(-0.09f, -0.1f);
	glVertex2f(0.0f, -0.05f);
	glVertex2f(0.09f, -0.1f);
	glVertex2f(0.0f, 0.15f);
	glEnd();
}

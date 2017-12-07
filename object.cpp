#include "object.h"

// ObjectIface class
ObjectIface::ObjectIface() {}

//PlayerObject class
PlayerObject::PlayerObject() 
{
	visual = new VisualPlayerObject();
}
void PlayerObject::update()
{
	glPushMatrix();
	glTranslatef(transport.posn.x, transport.posn.y, 0.0f);
	glRotatef(transport.rotn, 0.0f, 0.0f, 1.0f);
	visual->render();
	glPopMatrix();
}
void PlayerObject::updateTransport(Transport argTransport)
{
	transport = argTransport;
}

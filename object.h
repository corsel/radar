#ifndef _OBJECT_H_INCLUDED
#define _OBJECT_H_INCLUDED

#include "visual.h"
#include "collider.h"

class ObjectIface // abstract class
{
protected:
	Transport transport;

public:
	ObjectIface(void);
	virtual void updateTransport(Transport argTransport) = 0; // debug
};

class PlayerObject : public ObjectIface 
{
private:
	ColliderIface *collider;
	VisualIface *visual;

public:
	PlayerObject(void);
	void update(void);
	void updateTransport(Transport argTransport); // debug
};

#endif // _OBJECT_H_INCLUDED

#ifndef _ROOM_H_INCLUDED
#define _ROOM_H_INCLUDED

#include "utils.h"

class RoomIface // abstract class
{
private: 

public:
	RoomIface(void);
};

class LineRoom : public RoomIface
{
private:
	Vec2 start, end;
	float width;

public:
	LineRoom(Vec2 argStart, Vec2 argEnd, float argWidth);
};
#endif // _ROOM_H_INCLUDED

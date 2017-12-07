#include "room.h"

// Room class
RoomIface::RoomIface() {}

// LineRoom class
LineRoom::LineRoom(Vec2 argStart, Vec2 argEnd, float argWidth)
: start(argStart), end(argEnd), width(argWidth) {}

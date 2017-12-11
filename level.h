#ifndef _LEVEL_H_INCLUDED
#define _LEVEL_H_INCLUDED

#include "object.h"
#include "room-iface.h"
#include <vector>

class Level
{
private:
  std::vector<ObjectIface> objectVector;
  std::vector<RoomIface> roomVector;

public:
  Level(void);
  void render(void);
};

#endif // _LEVEL_H_INCLUDED
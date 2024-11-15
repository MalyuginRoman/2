#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include "object.h"

class EventManager
{
public:
    EventManager();
    ~EventManager();

    bool init(objectList* list);
    bool execute(objectList* list);

private:
    class EventManagerP* imp;
};

#endif // EVENTMANAGER_H

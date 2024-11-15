#include <QCoreApplication>
#include <iostream>
#include "EventManager.h"
//#include "object.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // logic
    // player
    // agent

    objectList* list = new objectList;
    EventManager* manager = new EventManager;

    int count = 5;
    for(int i = 0; i < count; i++)
    {
        int id = i;
        int velocity = 10 * i;
        int angular = 45 * i;
        int angularVelocity = 0;
        int placeX = list->defaultPlaceX();
        int placeY = list->defaultPlaceY();
//        int i = 2;
//        list->add(i, 10 * i, 45 * i, 0, 0, 0);
        list->add(id, velocity, angular, angularVelocity, placeX, placeY);
        qDebug() << "addObject:" << list->count();
        qDebug() << id << "," << velocity << "," << angular << "," << angularVelocity<< "," << placeX<< "," << placeY;
    }

    bool isOk = manager->init(list);
    if(!isOk) return false;

    isOk = manager->execute(list);
    if(!isOk) return false;

/*    list->reset();
    qDebug() << "list_reset";*/

    return a.exec();
}

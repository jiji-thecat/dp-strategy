#ifndef COMPARATOR_H
#define COMPARATOR_H

#include "gyudon.h"

class Comparator
{
public:
    Comparator();
    virtual int compare(Gyudon &gyudon1, Gyudon &gyudon2) = 0;
};

#endif // COMPARATOR_H

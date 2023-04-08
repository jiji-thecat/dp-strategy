#ifndef ONIONCOMPARATOR_H
#define ONIONCOMPARATOR_H

#include "gyudon.h"

class OnionComparator
{
public:
    OnionComparator();
    OnionComparator(OnionComparator &OnionComparator);
    ~OnionComparator();
    int compare(Gyudon &gyudon1, Gyudon &gyudon2);
};

#endif // ONIONCOMPARATOR_H

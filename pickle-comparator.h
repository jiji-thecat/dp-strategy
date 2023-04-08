#ifndef PICKLECOMPARATOR_H
#define PICKLECOMPARATOR_H

#include "gyudon.h"

class PickleComparator
{
public:
    PickleComparator();
    PickleComparator(PickleComparator &PickleComparator);
    ~PickleComparator();
    int compare(Gyudon &gyudon1, Gyudon &gyudon2);
};

#endif // PICKLECOMPARATOR_H

#ifndef PICKLECOMPARATOR_H
#define PICKLECOMPARATOR_H

#include "comparator.h"
#include "gyudon.h"

class PickleComparator : Comparator
{
public:
    PickleComparator();
    PickleComparator(PickleComparator &PickleComparator);
    ~PickleComparator();
    int compare(Gyudon &gyudon1, Gyudon &gyudon2);
};

#endif // PICKLECOMPARATOR_H

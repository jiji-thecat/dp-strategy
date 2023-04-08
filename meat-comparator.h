#ifndef MEATCOMPARATOR_H
#define MEATCOMPARATOR_H

#include "gyudon.h"

class MeatComparator
{
public:
    MeatComparator();
    MeatComparator(MeatComparator &meatComparator);
    ~MeatComparator();
    int compare(Gyudon &gyudon1, Gyudon &gyudon2);
};

#endif // MEATCOMPARATOR_H

#include "pickle-comparator.h"

PickleComparator::PickleComparator()
{

}

PickleComparator::PickleComparator(PickleComparator &PickleComparator)
{

}

PickleComparator::~PickleComparator()
{

}

int PickleComparator::compare(Gyudon &gyudon1, Gyudon &gyudon2){
    if(gyudon1.pickle > gyudon2.pickle)
    {
        return 1;
    } else if(gyudon1.pickle < gyudon2.pickle)
    {
        return 0;
    }
    return -1;
}

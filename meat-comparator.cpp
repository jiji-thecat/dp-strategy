#include "meat-comparator.h"

MeatComparator::MeatComparator()
{

}

MeatComparator::MeatComparator(MeatComparator &meatComparator)
{

}

MeatComparator::~MeatComparator()
{

}

int MeatComparator::compare(Gyudon &gyudon1, Gyudon &gyudon2){
    if(gyudon1.meat > gyudon2.meat)
    {
        return 1;
    } else if(gyudon1.meat < gyudon2.meat)
    {
        return 0;
    }
    return -1;
}

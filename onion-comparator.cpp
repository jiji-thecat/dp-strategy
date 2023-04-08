#include "onion-comparator.h"

OnionComparator::OnionComparator()
{

}

OnionComparator::OnionComparator(OnionComparator &OnionComparator)
{

}

OnionComparator::~OnionComparator()
{

}

int OnionComparator::compare(Gyudon &gyudon1, Gyudon &gyudon2){
    if(gyudon1.onion > gyudon2.onion)
    {
        return 1;
    } else if(gyudon1.onion < gyudon2.onion)
    {
        return 0;
    }
    return -1;
}

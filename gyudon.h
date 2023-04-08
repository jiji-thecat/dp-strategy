#ifndef GYUDON_H
#define GYUDON_H


class Gyudon
{
public:
    Gyudon(int meat, int onion, int pickle);
    Gyudon(Gyudon &gyudon);
    ~Gyudon();
    int meat = -1;
    int onion = -1;
    int pickle = -1;
};

#endif // GYUDON_H

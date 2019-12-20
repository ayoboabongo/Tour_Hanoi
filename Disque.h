#ifndef DISQUE_H_INCLUDED
#define DISQUE_H_INCLUDED

using namespace std;
class Disque
{
private :
    int diametre ;

public :
    Disque(int d);

    int getDiametre();

    void afficherDisque();
};

#endif // DISQUE_H_INCLUDED

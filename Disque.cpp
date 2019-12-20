#include "Disque.h"
#include <iostream>

using namespace std;

 Disque::Disque(int d)
    {
        this->diametre=d;
    }

int Disque::getDiametre()
    {
        return diametre ;
    }

void Disque::afficherDisque()
    {
        cout<<diametre;
    }

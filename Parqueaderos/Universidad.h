#include <iostream>
#include <vector>
#include "Persona.h"

using std::vector;

class Universidad
{
    private:
        vector<Persona> personas;

    public:
        Universidad();
        void recaudarParqueadero();
};
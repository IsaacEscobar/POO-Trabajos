#include "Persona.h"

class Colaborador: public Persona
{
    private:
        string cargo;
        float salarioActual;

    public:
        Colaborador();
        string getCargo();
        void setCargo(string cargo);
        float getSalarioActual();
        void setSalarioActual(float salarioActual);

        void incrementarSalario(float porcentaje);
};
#include "Persona.h"

class Estudiante: public Persona
{
    private:
        float promedioAcumulado;
        string carrera;

    public:
        Estudiante();
        float getPromedioAcumulado();
        void setPromedioAcumulado(float promedioAcumulado);
        string getCarrera();
        void setCarrera(string carrera);

        void estaEnPrueba();
};
#include <iostream>
#include <string>

using std::string;

class Persona
{
    protected:
        string documento;
        string nombreCompleto;
        string username;

    public:
        Persona();
        string getDocumento();
        void setDocumento(string documento);
        string getNombreCompleto();
        void setNombreCompleto(string nombreCompleto);
        string getUsername();
        string setUsername(string username);

        void mostrar();
        float pagarParqueadero();
};
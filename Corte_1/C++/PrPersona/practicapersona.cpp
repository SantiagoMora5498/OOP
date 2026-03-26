#include <iostream>
#include <string>
using namespace std;

class Persona {
public:
    string nombre;
    int edad;

    // Metodo Saludar
    void saludar() {
        cout << "Hola, mi nombre es " << nombre << " y tengo " << edad << " años." << endl;
    }

    // Metodo Responder
    void responder() {
        cout << "Mucho gusto, yo soy " << nombre << " y mi edad es " << edad << "." << endl;
    }
};

int main() {
    Persona p1;
    Persona p2;

    p2.nombre = "Carlos";
    p2.edad = 19;

    p1.nombre = "Elena";
    p1.edad = 23;

    cout << "Presentacion:\n";
    p1.saludar();
    p2.responder();   
    return 0;
}
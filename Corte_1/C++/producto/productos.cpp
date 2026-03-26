#include <iostream>
#include <string>

using namespace std;

class Inventario {
public:
    string ref_nombre;
    double val_unitario;

    // Constructor inicializador (vacio)
    Inventario() {
        ref_nombre = "N/A";
        val_unitario = 0.0;
    }

    // Constructor para registro rapido
    Inventario(string nom) {
        ref_nombre = nom;
        val_unitario = 0.0;
    }

    // Constructor con parametros completos
    Inventario(string nom, double precio) {
        ref_nombre = nom;
        val_unitario = precio;
    }

    void reporte() {
        cout << ">>> Producto: " << ref_nombre << endl;
        cout << ">>> Costo: $" << val_unitario << endl;
    }
};

int main() {
    // Definicion de los 3 objetos solicitados
    Inventario prod1("Mouse", 47000);
    Inventario prod2("Memoria USB", 25000);
    Inventario prod3("Teclado Mecanico", 155000.0);

    // Salida de datos con formato mas limpio
    cout << "--- ESTADO ACTUAL DEL INVENTARIO ---" << endl;
    
    prod1.reporte();
    cout << "-----------------------" << endl;
    
    prod2.reporte();
    cout << "-----------------------" << endl;
    
    prod3.reporte();
    cout << "-----------------------" << endl;

    return 0;
}
#include <iostream>
using namespace std;

class Vec {
public:
    int v[5];

    // Carga de datos rapida
    void datos() {
        v[0] = 10;
        v[1] = 20;
        v[2] = 30;
        v[3] = 40;
        v[4] = 50;
    }

    // Suma de elementos
    int suma() {
        int s = 0;
        for (int i = 0; i < 5; i++) {
            s += v[i];
        }
        return s;
    }

    // Promedio con cast
    double prom() {
        return (double)suma() / 5;
    }

    // Mostrar el arreglo en linea
    void ver() {
        for (int i = 0; i < 5; i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Vec obj;
    
    obj.datos();
    obj.ver();
    
    cout << "Suma = " << obj.suma() << "\n";
    cout << "Prom = " << obj.prom() << "\n";
    
    return 0;
}
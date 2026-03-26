#include <iostream>

using namespace std;

class TableroNumerico {
public:
    int valores[2][2];

    // Método para inicializar con datos de prueba
    void rellenarDatos() {
        valores[0][0] = 7; valores[0][1] = 9;
        valores[1][0] = 2; valores[1][1] = 8;
    }

    // Muestra el contenido por consola
    void mostrarMatriz() {
        for (int fila = 0; fila < 2; ++fila) {
            for (int col = 0; col < 2; ++col) {
                cout << valores[fila][col] << " ";
            }
            cout << endl;
        }
    }

    // Calcula el total de los componentes
    int obtenerSumaTotal() {
        int acumulado = 0;
        for (int r = 0; r < 2; r++) {
            for (int c = 0; c < 2; c++) {
                acumulado += valores[r][c];
            }
        }
        return acumulado;
    }
};

int main() {
    TableroNumerico objetoMatriz;
    
    objetoMatriz.rellenarDatos();
    objetoMatriz.mostrarMatriz();
    
    int resultado = objetoMatriz.obtenerSumaTotal();
    cout << "Total de la suma: " << resultado << endl;
    
    return 0;
}
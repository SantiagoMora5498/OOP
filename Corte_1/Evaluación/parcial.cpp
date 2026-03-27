#include <iostream>
#include <string>

using namespace std;

// Clase Estudiante (Requisito 3)
class Estudiante {
public:

    //Atributos de Clase (Requisito 4)
    string codigo; 
    string nombre;
    int edad;


    //Sobrecarga de Constructores (Requisito 6)
    // Constructor Inicial
    Estudiante() {
        codigo = "0";
        nombre = "Nadie";
        edad = 0;                                     
    }
    //Constructor al recibir información
    Estudiante(string c, string n, int e) {
        codigo = c;
        nombre = n;
        edad = e;
    }
};

// Arreglo de tamaño fijo dentro de una clase, en este caso, la clase sistema (Requisito 7-8-9)
class Sistema {
public:

    
    Estudiante lista[10]; 
    float notas[10][3];
    int contador;

    // Método para Limpiar datos
    void limpiar() {
        contador = 0;
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 3; j++) {
                notas[i][j] = 0;
            }
            lista[i] = Estudiante();
        }
        cout << "Sistema reiniciado con exito!" << endl;
    }

    //Método para Limpiar matriz
    Sistema() {
        limpiar(); // Llama al método limpiar para inicializar todo en cero al empezar
    }

    //Método comprobar códigos
    bool ecodigo(string c) {
        for (int i = 0; i < contador; i++) {
            if (lista[i].codigo == c) {
                return true; 
            }
        }
        return false;
    }

};


int main() {
    // Mensaje de Bienvenida (Requisito 1)
    cout << "============BIENVENIDO AL SISTEMA DE NOTAS CONDOR============" << endl;

    Sistema miRepo; 
    int opcion = 0;

    // Menú Principal (Requisito 2)
    while (opcion != 8) {
        cout << "=======MENU=======\n1. Registrar\n2. Ver lista\n3. Buscar\n4. Poner notas\n5. Promedio\n6. Ver Matriz\n7. Reiniciar Datos\n8. Salir" << endl;
        cout << "Opcion Elegida: ";
        cin >> opcion;

        if (opcion == 1) {
            if (miRepo.contador < 10) {
                string c, n; int e;
                cout << "Codigo: "; cin >> c;

                if (miRepo.ecodigo(c)) {
                    cout << "[Error] El codigo " << c << " ya esta registrado." << endl;
                } else {
        

                    cout << "Nombre: "; cin.ignore(); getline(cin, n);
                    cout << "Edad: "; cin >> e;
                    while (e < 0 || e > 100) {
                        cout << "[Error] La edad debe estar entre 0 y 100." << endl;
                        cout << "Ingrese una edad valida: ";
                        cin >> e;
                    }

                    miRepo.lista[miRepo.contador] = Estudiante(c, n, e);
                    miRepo.contador++;
                    cout << "Listo! Datos Guardados" << endl;
                }
    
            } 
                else {
                    cout << "Limite de capacidad alcanzado!!" << endl;
                }
        }
        else if (opcion == 2) {
            cout << "\n--- LISTA TOTAL EN MEMORIA (10 ESPACIOS) ---" << endl;
            for (int i = 0; i < 10; i++) { 
                cout << i+1 << ". " << miRepo.lista[i].nombre 
                    << " [Codigo: " << miRepo.lista[i].codigo << "]" << endl;
            }
        }              
        else if (opcion == 3) {
            string buscado;
            cout << "Codigo: "; cin >> buscado;
            for (int i = 0; i < miRepo.contador; i++) {
                if (miRepo.lista[i].codigo == buscado) {
                    cout << "Es: " << miRepo.lista[i].nombre << endl;
                }
            }
        }
        else if (opcion == 4) {
            string cod;
            cout << "Codigo del estudiante: "; cin >> cod;
            for (int i = 0; i < miRepo.contador; i++) {
                if (miRepo.lista[i].codigo == cod) {
                    for (int j = 0; j < 3; j++) {
                        cout << "Nota " << j+1 << ": ";
                        cin >> miRepo.notas[i][j]; // Matriz
                    }
                }
            }
        }
        else if (opcion == 5) { //Promedio
            string cod;
            cout << "Ingrese el codigo del estudiante para el promedio: "; 
            cin >> cod;
            bool encontrado = false;
                for (int i = 0; i < miRepo.contador; i++) {
                    if (miRepo.lista[i].codigo == cod) {
                        encontrado = true;
                        float suma = 0;
                        for (int j = 0; j < 3; j++) {
                            suma = suma + miRepo.notas[i][j];
                        }
                    float promedio = suma / 3;
                    cout << "El promedio de " << miRepo.lista[i].nombre << " es: " << promedio << endl;
                    }
                }
            if (!encontrado) {
                cout << "Estudiante no encontrado." << endl;
            }
        }
        else if (opcion == 6) {

            
            // Mostrar la matriz
            for (int i = 0; i < miRepo.contador; i++) {
                cout << miRepo.lista[i].nombre << " -> ";
                for (int j = 0; j < 3; j++) {
                    cout << "[" << miRepo.notas[i][j] << "] ";
                }
                cout << endl;
            }
        }
        else if (opcion == 7) {
            miRepo.limpiar(); // Opción de reiniciar datos
        }
    }

    return 0;
}
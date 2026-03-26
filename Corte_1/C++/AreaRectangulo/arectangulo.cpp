#include <iostream>
using namespace std;

class Rectangulo {
public:
    double base;
    double altura;

    Rectangulo(double b, double h){
        base = b;
        altura = h;
    }

    double area(){
        return base * altura;
    }

    double perimetro(){
        return 2*base + 2*altura;
    }
};

int main() {
    Rectangulo r1(7.0, 9.0);

    cout << "Base = " << r1.base << "\n";
    cout << "Altura = " << r1.altura << "\n";
    cout << "Area = " << r1.area() << "\n";
    cout << "Perimetro = " << r1.perimetro() << "\n";
    return 0;
}
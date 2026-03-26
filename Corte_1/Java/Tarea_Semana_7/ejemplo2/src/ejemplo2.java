public class ejemplo2 {

    //Crear Clase Rectangulo
    static class rectangulo {
        //Definir variables base y altura como doubles, la variable rectangulo definirla como base y altura
        public double base;
        public double altura;
        public rectangulo(double b, double h) {
        
            //Definir base como b, y altura como h
            base = b;
            altura = h;
        }

        //Definir el método area como base*altura
        public double area() {
            return base * altura;
        }
        //Definir el método perimetro como 2*(base+altura)
        public double perimetro(){
            return 2*(base+altura);
        }
        //Definir el método cuadrado
        public void cuadrado(){
            
            if (base == altura) {
                System.out.println("Debido a los lados ingresados, la figura es un cuadrado");
            }else{
                System.out.println("Debido a los lados ingresados, la figura no es un cuadrado");
            }
        }
    }

    public static void main(String[] args) {
        rectangulo r1 = new rectangulo(5.0, 4.0);
        System.out.println("Base: " + r1.base);
        System.out.println("Altura: " + r1.altura);
        System.out.println("Area: " + r1.area());
        System.out.println("Perimetro: " + r1.perimetro());
        r1.cuadrado();
    }
}
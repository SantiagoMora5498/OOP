class FiguraRectangulo {
    public double largo;
    public double ancho;

    
    public void configurar(double l, double a) {
        largo = l;
        ancho = a;
    }

    
    public double calcularArea() {
        double area = largo * ancho;
        return area;
    }

    
    public double calcularPerimetro() {
        return 2 * (largo + ancho);
    }

    public void imprimirDatos() {
        System.out.println("--- Medidas del Rectangulo ---");
        System.out.println("Largo: " + largo + " cm");
        System.out.println("Ancho: " + ancho + " cm");
    }
}

public class rectangulo {
    public static void main(String[] args) {
        FiguraRectangulo miRect = new FiguraRectangulo();

        
        miRect.configurar(15.5, 8.2);

        miRect.imprimirDatos();
        
        System.out.println("El area obtenida es: " + miRect.calcularArea());
        System.out.println("El perimetro total es: " + miRect.calcularPerimetro());
    }
}
class articulos {
    public String desc;
    public double precio_ref;

    // Constructor 1: Por defecto
    public articulos() {
        this.desc = "Sin Registrar";
        this.precio_ref = 0.0;
    }

    // Constructor 2: Solo nombre
    public articulos(String n) {
        this.desc = n;
        this.precio_ref = 0.0;
    }

    // Constructor 3: Completo
    public articulos(String n, double p) {
        this.desc = n;
        this.precio_ref = p;
    }

    public void verDetalles() {
        System.out.println("Item: " + desc + " | Precio: $" + precio_ref);
    }
}

public class producto {
    public static void main(String[] args) {
        // Los 3 productos
        articulos a1 = new articulos();
        articulos a2 = new articulos("Mouse Gamer");
        articulos a3 = new articulos("Monitor 24 pulg", 650000.0);

        System.out.println("LISTADO DE PRODUCTOS:");
        System.out.println("---------------------");
        a1.verDetalles();
        a2.verDetalles();
        a3.verDetalles();
    }
}
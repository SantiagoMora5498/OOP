class datosp {
    public String nombre;
    public int edad;

    public void saludar() {
        System.out.println("Hola, me llamo " + nombre + " y mi edad es " + edad);
    }

    public void responder() {
        System.out.println("Que tal, yo soy " + nombre + " y tengo " + edad + " años");
    }

}

public class Persona {
    public static void main(String[] args) {
        datosp p1 = new datosp();
        datosp p2 = new datosp();

        p2.nombre = "Carlos";
        p2.edad = 19;

        p1.nombre = "Elena";
        p1.edad = 23;

        System.out.println("--- Dialogo ---");
        p1.saludar();
        p2.responder();

        
    }
}
public class ejemplo1 {

    //Crear Clase Persona
    static class Persona {
        //Definir Variables Usadas
        public String nombre;
        public int edad;
        public String nombre2;
        public int edad2;

         //Método Cumpleaños
        public void cumpleaños(){
            edad = edad + 1;
        }
        //Método Saludar
        public void saludar() {
            System.out.println("Hola, mi nombre es " + nombre + " y tengo " + edad + " años de edad.");
        }
        //Método Responder
        public void responder(){

            if (edad2 >= 18) {

                System.out.println("Hola " + nombre + ", un placer, yo me llamo " + nombre2 + " y tengo " + edad2 + " años de edad, por eso soy mayor de edad.");
            }else{

                System.out.println("Hola " + nombre + ", un placer, yo me llamo " + nombre2 + " y tengo " + edad2 + " años de edad, por eso soy menor de edad.");
            }
        }
       
    }
    public static void main(String[] args) {
        Persona p1 = new Persona();
        p1.nombre = "Santiago";
        p1.edad = 18;
        p1.cumpleaños();
        p1.saludar();
        p1.nombre2 = "Camilo";
        p1.edad2 = 19;
        p1.responder();
    }
}
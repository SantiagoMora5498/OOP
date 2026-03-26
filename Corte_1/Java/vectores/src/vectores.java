public class vectores {
    // Arreglo de tamaño 5
    public int[] v = new int[5];

    // Carga de datos rapida
    public void datos() {
        v[0] = 10;
        v[1] = 15;
        v[2] = 54;
        v[3] = 22;
        v[4] = 32;
    }

    // Suma simple
    public int suma() {
        int s = 0;
        for (int i = 0; i < 5; i++) {
            s += v[i];
        }
        return s;
    }

    // Promedio con cast a double
    public double prom() {
        return (double) suma() / 5;
    }

    // Imprimir en linea
    public void ver() {
        for (int i = 0; i < 5; i++) {
            System.out.print(v[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        vectores obj = new vectores();
        
        obj.datos();
        obj.ver();
        
        System.out.println("Suma = " + obj.suma());
        System.out.println("Prom = " + obj.prom());
    }
}
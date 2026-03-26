public class ejemplo3 {
    static class arreglos{
        
        //Metodo Suma
        public static int suma(int[] a) {
            int total = 0;
            for (int x : a) {
                total += x;
            }
            return total;
        }

        //Metodo Promedio
        public static double promedio(int[] a) {
            int total = suma(a);
            return (double) total / a.length;
        }

        //Método Valor Máximo
        public static int vmax(int[] a) {
            int max = a[0];

            for (int x : a) {
                if (x > max) {
                    max = x;
                }
            }

            return max;
        }

        //Metodo Pasar
        public static int Pasar(int[] a, int notap) {
            int contador = 0;

            for (int x : a) {
                if (x >= notap) {
                contador++;
            }
    }

    return contador;
}
    }
    public static void main(String[] args) {
        int[] notas = {80, 75, 90, 60, 95};
        int total = arreglos.suma(notas);
        int max = arreglos.vmax(notas);
        int paso = arreglos.Pasar(notas, 80);
        double avg = arreglos.promedio(notas);
        System.out.println("Suma: " + total);
        System.out.println("Promedio: " + avg);
        System.out.println("El valor máximo es: " + max);
        System.out.println("Las notas que pasan son: " + paso);

    }
}


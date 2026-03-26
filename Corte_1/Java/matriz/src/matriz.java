public class matriz {
    public int[][] datos = new int[2][2];

    public void cargarValores() {
        datos[0][0] = 7; datos[0][1] = 9;
        datos[1][0] = 2; datos[1][1] = 8;
    }

    public void mostrarContenido() {
        for (int f = 0; f < 2; f++) {
            for (int c = 0; c < 2; c++) {
                System.out.print(datos[f][c] + " ");
            }
            System.out.println();
        }
    }

    public int calcularTotal() {
        int suma = 0;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                suma += datos[i][j];
            }
        }
        return suma;
    }

    public static void main(String[] args) {
        matriz obj = new matriz();
        obj.cargarValores();
        obj.mostrarContenido();
        System.out.println("Resultado de la suma: " + obj.calcularTotal());
    }
}
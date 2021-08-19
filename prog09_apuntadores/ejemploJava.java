public class arrayApp {
    public static void rellenar(int lista[]){
        Random rand = new Random();
        for(int i=0;i<lista.length;i++){
            // random
            lista[i] = rand.nextInt(51); 
        }
    }

    public static void mostrar(int lista[]){
        for(int i=0; i<lista.length; i++){
            System.out.print(lista[i]+" ");
        }
        System.out.println();
    }

    public static void main() {
 
        //Esto es opcional
        int TAMANIO=10;
 
        int num[]=new int[TAMANIO];
 
        //Invocamos las funciones
        rellenar(num);
        mostrar(num);
    } 
}
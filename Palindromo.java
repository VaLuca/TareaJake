import java.util.Scanner;

public class Palindromo{

 	public static void main(String[] args){
 		
       	String palabra="";
 		String palabra_invertida="";
 		int x;

        System.out.println("\t\t\n\nPROGRAMA QUE VERIFICA SI UNA CADENA ES UN PALINDROMO\n\n\n");
        System.out.println("IMPORTANTE: La cadena debe ir sin espacios \n\n");
        System.out.print("Escribe una cadena para verificar si es un palindromo:");
        Scanner scan = new Scanner(System.in);
        palabra= scan.nextLine();             
 
        for (x = palabra.length()-1; x>=0; x--){
       		 palabra_invertida = palabra_invertida + palabra.charAt(x);
       	}
			 if  (palabra.equalsIgnoreCase (palabra_invertida)){
				 System.out.println("Es un palindromo");
			 }
			 else{
			 System.out.println("No es un palindromo");
			 } 
		
	}
}
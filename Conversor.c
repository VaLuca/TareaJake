#include <stdio.h> 

int conversion(int N){
	if (N != 0){
		conversion(N / 2);
		printf("%d",N%2);
	}
}

int main(){
	int decimal;
	printf("\n\t\tPrograma que convierte un numero decimal a binario\n\n");
	printf("\n Ingrese el numero a convertir : ");
	scanf("%d", &decimal);
	printf("\n\nSu equivalente en binario es: ");
	conversion(decimal);
	getch();
	return 0;
}

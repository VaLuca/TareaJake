#include <stdio.h>
#include <string.h>

int main()
{
	int palindromo = 1;
	int i, j;
	char palabra[40];

	printf("\t\tPROGRAMA QUE VERIFICA SI UNA CADENA ES UN PALINDROMO\n\n\n");
	printf("IMPORTANTE: La cadena debe ir sin espacios \n\n");
	printf("Escribe una cadena para verificar si es un palindromo: ");
	fflush(stdout);
	gets(palabra);
	j = strlen(palabra) - 1;
	for (i = 0; i<strlen(palabra) / 2; i++, j--) {
			if (*(palabra + i) != *(palabra + j)) {
			palindromo = 0;
			break;
		}
	}
	if (palindromo)
		printf("\n Es un palindromo");
	else
		printf("\n No es un palindromo");
	getchar();
	return (0);
}

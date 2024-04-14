/*Esto es para buscar la primera aparicion de lo que buscas*/

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main()
{
//	const char cadema[] = "el programa funciona";
	char cadena[100];
	char n;


	printf("Coloca la palabra o oracion que quieres poner: ");
	fgets(cadena, sizeof(cadena), stdin);
//	int h;
//	h = 'w';
	
	printf("Ahora pon lo primero que quieres buscar: ");
//	fgets(start, sizeof(start), stdin);
	scanf(" %c", &n);

	printf("Con el original programa: %s\n", strchr(cadena, n));
	printf("Con el ft_strchr: %s\n", ft_strchr(cadena, n));
	return 0;
}

/*	if (computer)
	{
		printf("Caracter encontrado: %s\n", *computer);
	}
	else
	{
		printf("Ni pio");
	}
	return 0;
}*/

#include <string.h>
#include <stdio.h>
#include "../libft.h"

int main()
{
	char cadena[100];
	int l;
	char cont[100];
	size_t len;
	char imput[100];

	printf("Coloca algo largo: ");
	fgets(cadena, sizeof(cadena), stdin);


	printf("Coloca un solo caracter: ");
	fgets(cont, sizeof(cont), stdin);
	l = cont[0];

	printf("Ahora solo pon el tamaño de busqueda: ");
	fgets(imput, sizeof(imput), stdin);
	sscanf(imput, "%zu", &len);


	
	char *result = ft_memchr(cadena, l, len);
	if (result != NULL)
	{
		printf("se encontro esto: %s\n", result);
	}
	else
	{
		printf("ni se encontro nada master :(");
	}
	return 0;
}

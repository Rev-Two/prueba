//Devuelve la primera ocurrencia que encuentre en str//


#include <stdio.h>
#include <string.h>
#include "../libft.h"
#include <stdlib.h>


int main()
{
	const char *haystack = "Este es un ejemplo de cadena de texto.";
	const char *buscador = "ejemplo";

///	char cadena_p[100];
///	char cadena_bs[100];
//	size_t l;
//	char imput[100];

	
//	printf("Coloca cualquier cosa: ");
//	fgets(cadena_p, sizeof(cadena_p), stdin);
//
//	printf("Coloca lo que quieres buscar: ");
//	fgets(cadena_bs, sizeof(cadena_bs), stdin);
//
//	printf("Ahora pon el numero maximo de busqueda: ");
//	fgets(imput, sizeof(imput), stdin);
//	l = imput[0];
//	sscanf(imput, "%zu", &l);
//	puntero = cadena_p;
//	buscador = cadena_bs;
	
	char *posicion = ft_strnstr(haystack, buscador, ft_strlen(haystack));
	if (posicion)
	{
		printf("La subcadena \"%s\" esta ubicada en la posicion %ld\n", buscador, posicion - haystack);
	}
	else
	{
		printf("No se encontro nada");
	}
	return 0;
}

/*
	if (result != NULL)
	{
		printf("resultado es:  %s\n", result);
	}
	else
	{
		printf("no se encontro nada");
	}
	return 0;
}*/

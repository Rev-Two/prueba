#include <stdio.h>
#include "../libft.h"
#include <stdlib.h>

int main()
{
	const char *palabra;
	const char *busca;
	char p[100];
	char b[100];

	printf("Pont algo pero repitiendo algo a los costados: ");
	fgets(p, sizeof(p), stdin);
	palabra = p;

	printf("Pon lo que quieres eliminar de los costados: ");
	fgets(b, sizeof(b), stdin);
	busca = b;

	char *campe = ft_strtrim(palabra, busca);
	if (campe)
	{
		printf("esto es: %s\n", campe);
		free(campe);
	}
	else
	{
		printf("error");
	}
	return 0;
}

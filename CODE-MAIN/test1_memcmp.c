

#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	char cadema1[100];
	char cadema2[100];
	char imput[100];
	size_t len;

	printf("Ingresa la primera string: ");
	fgets(cadema1, sizeof(cadema1), stdin);
	strtok(cadema1, "\n");

	printf("Ahora sigue la siguiente string: ");
	fgets(cadema2, sizeof(cadema2), stdin);
    strtok(cadema2, "\n");

	printf("Ahora cuanto vas a medir: ");
	fgets(imput, sizeof(imput), stdin);
	sscanf(imput, "%zu", &len);

	sleep(1);

	int comprobar;
	comprobar = ft_memcmp(cadema1, cadema2, 4);
	printf("Esta es la diferencia: %d\n", comprobar);
	return 0;
}

//compara bloques de memoria, no se detiene por caracter nulo//

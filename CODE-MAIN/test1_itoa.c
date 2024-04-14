#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int main()
{
    int numero;

	printf("Algo simple para itoa: ");
	scanf("%d", &numero);

    char *cadena = ft_itoa(numero);
	printf("esto para tu char master: %s\n", cadena);
	free(cadena);
}

#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char dest[100];
	char src[100];
	size_t i;
	char imput[100];
	printf("Ingresa algo que entrara en src: ");
	fgets(src, sizeof(src), stdin);

	printf("\nIngresa un numero que quieras mover: ");
	fgets(imput, sizeof(imput), stdin);
	sscanf(imput, "%zu", &i);

	printf("\nSi quieres, ingresa algo en dest, puedes hacer ahora: ");
	fgets(dest, sizeof(dest), stdin);

	printf("Retornable que nos da ft_strlcat es: %zu\n", ft_strlcat(dest, src, i));
	return 0;
}

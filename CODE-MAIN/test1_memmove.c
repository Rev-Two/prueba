#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	char src[100];
	char dest[100];
	size_t i;
	char imput[100];

	printf("Ingresa algo que ira en src: ");
	fgets(src, sizeof(src), stdin);

	printf("Coloca algo en destino: ");
	fgets(dest, sizeof(dest), stdin);

	printf("Ahora indica cuantos tienes que mover de src a destino: ");
	fgets(imput, sizeof(imput), stdin);
	sscanf(imput, "%zu", &i);

	printf("\n\n\n");
	printf("-Lo que nos da el memmove oficial: %s\n", memmove(dest, src, i));
	printf("\n-Lo que nos da ft_memmove es: %s\n", ft_memmove(dest, src, i));
	return 0;
}

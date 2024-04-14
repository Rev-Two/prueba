#include <stdio.h>
#include "../libft.h"

int main()
{
	char usuario[100];

	printf("Ingresa algo y te dire el largo: ");
	fgets(usuario, sizeof(usuario), stdin);

	printf("Su largo es de: %lu\n", ft_strlen(usuario));
	return 0;
}


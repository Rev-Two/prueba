#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int main()
{
	char l;

	printf("Ingrese una letra mayuscula para pasarla a mayuscula con esta varita: ");
	scanf("%c", &l);

	l = ft_tolower(l);

	printf("\nAQUI TU MINUSCULA :D : ");
	printf("\n%c\n", l);

	return 0;
}

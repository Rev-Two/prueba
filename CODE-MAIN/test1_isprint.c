#include <stdio.h>
#include "../libft.h"

int main()
{
	char caracter;

	printf("Ingresa un imprimible: ");
	scanf("%c", &caracter);

	if(ft_isprint(caracter))
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}

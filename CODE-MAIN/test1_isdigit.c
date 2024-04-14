#include <stdio.h>
#include "../libft.h"

int main()
{
	char numero;

	printf("ingresa un numero: ");
	scanf("%c", &numero);

	if (ft_isdigit(numero))
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}




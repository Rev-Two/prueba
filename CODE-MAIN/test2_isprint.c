#include <stdio.h>
#include "../libft.h"

int main()
{
	char imprimir[1000];

	printf("Escribe algo largo: ");
	scanf("%s", imprimir);
	
	int i = 0;
	while (imprimir[i] != '\0')
	{
		if (ft_isprint(imprimir[i]))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		i++;
	}
	return 0;
}

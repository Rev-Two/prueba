#include <stdio.h>
#include "../libft.h"

int main()
{
	char palabra[1000];
	
	printf("escribe una palabra o oracion: ");
		scanf("%s", palabra);

	int i = 0;
	while (palabra[i] != '\0')
	{
		if (ft_isalpha(palabra[i]))
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

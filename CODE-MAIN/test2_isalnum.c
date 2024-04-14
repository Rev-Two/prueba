#include <stdio.h>
#include "../libft.h"

int main()
{
	char cade[10000];

	printf("ingresa una serie de caracteres: ");
	scanf("%s", cade);
	int i = 0;
	while (cade[i] != 0)
	{
		if (ft_isalnum(cade[i]))
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


#include <stdio.h>
#include "../libft.h"

int main()
{
	char alpha;
	printf("ingresa una letra: ");
	scanf("%c", &alpha);

	if (ft_isalpha(alpha))
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}

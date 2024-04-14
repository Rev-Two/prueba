#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

void	print_char(unsigned int tester, char *c)
{
	printf("esto sale en la posicion %u: %c\n", tester, *c);
}

int main()
{
	char str[100];
	printf("Coloca algo: ");
	fgets(str, sizeof(str), stdin);

	unsigned int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ft_striteri(str, &print_char);
//	printf("esto sale en la posicion %u: ", i);

	return 0;
}

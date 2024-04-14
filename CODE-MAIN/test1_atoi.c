#include <stdlib.h>
#include <stdio.h>
#include "../libft.h"

int main()
{
	char s[100];
	int i;

	printf("Es una funcion atoi, asi que ya sabes que hacer :) : ");
	fgets(s, sizeof(s), stdin);

	i = ft_atoi(s);

	printf("Tu char se convirtio en un tipo int\n");
	printf("int i = %d\n", i);
	if (i == 0)
	{
		printf("(En caso de que te salio cero aun cuando pusiste numeros, el problema es que usaste una combinacion de + y -. Este atoi es el comportamiento original, no del C4.)\n");
	}
	return 0;
}

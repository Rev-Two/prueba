#include <stdio.h>
#include "../libft.h"
#include <ctype.h>

int main()
{
	char c;

	printf("Te pedire que ingreses una letra minuscula y la convierto en mayuscula: ");
	scanf("%c",&c);

	c = ft_toupper(c);

	printf("¡Tu letra ahora es mayuscula!: \n%c\n", c);
	return (0);
}

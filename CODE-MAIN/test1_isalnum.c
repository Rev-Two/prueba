#include <stdio.h>
#include "../libft.h"

int main()
{
	char isal;

	printf("ingresa UN caracter o digito: ");
	scanf("%c", &isal);
	
	if (ft_isalnum(isal))
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}

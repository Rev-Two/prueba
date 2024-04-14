#include <stdio.h>
#include "../libft.h"
int main()
{
	char numero[10000];
	printf("Ingresa una serie de numeros: ");
    scanf("%s", numero);
	int i = 0;
	while (numero[i] != 0)
	{
    	if (ft_isdigit(numero[i]))
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

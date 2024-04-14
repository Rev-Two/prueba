/*En simpes palabras, aplica la funcion de (f*) en cada caracter de la cadena y crea una nueva con malloc, da como resultante el caracter cual sufrio aplicaciones de f*/

#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

char	memset_number(unsigned int tester, char c) //Ejemplo de funcion que aplica//
{
	if (c >= '0' && c <= '9')
	{
		c = '-';
		tester++;
		return c;
	}
	else
		return c;
}

int	main(void)
{
	const char *input;
	char caden[100];

	printf("Pon algo que contenga nummeros: ");
	fgets(caden, sizeof(caden), stdin);
	input = caden;

	char *result;
	result = ft_strmapi(input, memset_number);

	if (result)
	{
		printf("Resultado: %s\n", result);
		free(result);
	}
	else
	{
		printf("Error al asignar memoria.\n");
	}
	return 0;
}

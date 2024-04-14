#include <stdlib.h>
#include <stdio.h>
#include "../libft.h"
#include <ctype.h>

int main()
{
	char s[100];
	printf("Ingresa lo que quieres que se vea: ");
	fgets(s, sizeof(s), stdin);

	if (s[0] == '\n')
	{
		printf("Lo dejaras vacio? te retornara a nada, te lo juro por dieguito maradona\n");
		fgets(s, sizeof(s), stdin);
	}

	int file;
	printf("Ahora pon el numero del descriptor cual donde escribir: ");
	scanf("%d", &file);

	ft_putendl_fd(s, file);
	
	printf("Funcion terminada");

	return 0;
}

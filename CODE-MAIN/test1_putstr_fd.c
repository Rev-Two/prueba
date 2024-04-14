#include <stdlib.h>
#include <stdio.h>
#include "../libft.h"

int main()
{
	char c[100];
	int fl;
	printf("Ingresa lo que quieres que se vea: ");
	fgets(c, sizeof(c), stdin);
	printf("Ahora pon el numero del descriptor cual donde escribir: ");
	scanf("%d", &fl);
	
	ft_putstr_fd(c, fl);
    printf("\n");

	if (fl == 0)
		printf("Usaste la entrada estandar, stdin!");
	if (fl == 1)
		printf("Usaste la salida estandar, stdout!");
	if (fl == 2)
		printf("Usaste el Error estandar, stderr!");

	return 0;
}

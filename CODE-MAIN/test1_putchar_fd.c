#include <stdlib.h>
#include <stdio.h>
#include "../libft.h"

int main()
{
	char c;
	int fl;
	printf("Ingresa el caracter que quieres que se escriba: ");
	scanf("%c", &c);
	printf("Ahora pon el numero del descriptor cual donde escribir: ");
	scanf("%d", &fl);

	ft_putchar_fd(c, fl);
	printf("\nTodo correcto");
	return 0;
}

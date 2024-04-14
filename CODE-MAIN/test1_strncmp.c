#include <string.h>
#include <unistd.h>
#include "../libft.h"
#include <stdio.h>

int main()
{
	char cadena1[100];
	char cadena2[100];
	size_t len;
	char imput[100];

	printf("Hagamos una competencia por quien la tiene mas pequeña!");
	printf("\n\nIngresa el primer string: ");
	fgets(cadena1, sizeof(cadena1), stdin);
	strtok(cadena1, "\n");

	printf("\nBien, ahora ingresa el otro competidor (string): ");
	fgets(cadena2, sizeof(cadena2), stdin);

	printf("Bien hecho! Ahora solo indica el numero de caracteres que se van a medir: ");
	fgets(imput, sizeof(imput), stdin);
	sscanf(imput, "%zu", &len);

	printf("\nAhora a empezar la competencia ;D");
	sleep(1);
	
	int comprobar = ft_strncmp(cadena1, cadena2, len);
	printf("\nla diferencia es: %d\n", comprobar);
	printf("\n(Si el numero negativo, significa que el segundo string es mas grande que el primero)");
	return 0;
}
/*

	const char cadena1[] = "hola";
	const char cadena2[] = "holu";
	int comprobar;
	comprobar = ft_strncmp(cadena1, cadena2, 6);
	printf("presenta esto: %d\n", comprobar);
	return 0;
}*/

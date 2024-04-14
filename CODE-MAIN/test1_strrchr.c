#include <stdio.h>
#include <string.h>
#include "../libft.h"
#include <stdlib.h>
#include <string.h>


int main()
{
	char str[100];
	char n;

	
	printf("Coloca una oracion: ");
	fgets(str, sizeof(str), stdin);

	printf("Ahora pon lo ultimo que quieres buscar: ");
	scanf(" %c", &n);
//	fgets(n, sizeof(n), stdin);
	
//	char *computer = ft_strchr(str, n);

    printf("con el original programa: %s\n", strrchr(str, n));
    printf("con el ft de programa: %s\n", ft_strrchr(str, n));
    return 0;
}

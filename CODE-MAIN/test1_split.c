#include <stdio.h>
#include "../libft.h"
#include <stdlib.h>

int main(void)
{
    const char *texto;
	char nombres[100];
	int i = 0;

	printf("Pon nombres que la unica divicion entre ellos es un \",\" : ");
	fgets(nombres, sizeof(nombres), stdin);
	texto = nombres;

    char **resultado = ft_split(texto, ',');

    if (resultado)
    {
        while(resultado[i])
        {
            printf("Palabra %d: %s\n", i + 1, resultado[i]);
            free(resultado[i]);
			i++;
        }
        free(resultado);
    }
    else
    {
        printf("Error al dividir el texto.\n");
    }

    return 0;
}

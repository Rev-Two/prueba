#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int main(void)
{
    const char *original;
    const char *completa;
	char caden[100];
	char plet[100];

	printf("Pon algo: ");
	fgets(caden, sizeof(caden), stdin);
	original = caden;

	printf("Pon aqui lo que quieres agregar de mas: ");
    fgets(plet, sizeof(plet), stdin);
	completa = plet;

    char *result = ft_strjoin(original, completa);
    if (result)
    {
        printf("Substring: %s\n", result);
        free(result); // No olvides liberar la memoria asignada
    }
    else
    {
        printf("Error al crear la subcadena.\n");
    }

    return (0);
}

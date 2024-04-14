#include <stdio.h>
#include <string.h>
#include "../libft.h"
#include <stdlib.h>


int main()
{
	const char *puntero;
	char caden[100];
	printf("Pon algo: ");
	fgets(caden, sizeof(caden), stdin);

	puntero = caden;
	char *clon = ft_strdup(puntero);

	if (clon != NULL)
	{
        printf("Cadena original: %s\n", puntero);
        printf("Cadena duplicada: %s\n", clon);
        free(clon);
    } else 
	{
        printf("Error al duplicar la cadena.\n");
    }
    return 0;
}

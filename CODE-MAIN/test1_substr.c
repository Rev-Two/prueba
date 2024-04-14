#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

int main(void)
{
    const char *original = "Hello, world! This is a test string.";
	unsigned int start_index = 7;
	size_t subtring = 12;
/*
	char org[100];
	char start[100];
	char end[100];

	printf("Escribeme algo largo como ejemplo: ");
 	fgets(org, sizeof(org), stdin);

	original = org;
	printf("\nDame una posicion donde va a empezar el string: ");
	fgets(start, sizeof(start), stdin);
	start_index = (unsigned int)start;

	printf("Ahora dame la ultima posicion que dara fin al string: ");
	fgets(end, sizeof(end), stdin);
	subtring = (size_t)end;
*/	
	char *result = ft_substr(original, start_index, subtring);
    if (result)
    {
        printf("Substring: %s\n", result);
        free(result); // No olvides liberar la memoria asignada
    }
    else
    {
        printf("Error al crear la subcadena.\n");
    }

    return 0;
}

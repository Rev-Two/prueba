#include <stdio.h>
#include "../libft.h"
#include <string.h>
#include <stdlib.h>
int main()
{
	int n;
	int m;
	printf("Ingresa el numero de cadenas que quieres armar: ");
	scanf("%d", &n);
//	strtok(&n, "\n");
	printf("Ahora que tabla de multiplicar quieres: ");
	scanf("%d", &m);	

    int*matriz;
	matriz = (int*)ft_calloc(n, sizeof(int));
	if (matriz == NULL)
	{
        printf("Error al asignar memoria.\n");
        return 1;
	}
	int i = 0;
    while (i <= n)
	{
		matriz[i] = i * m;
        printf("tabla de %d x %d:  %d\n", i, m, matriz[i]);
		i++;
    }
    free(matriz);

    return 0;
}

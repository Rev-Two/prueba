#include <stdio.h>
#include "../libft.h"
#include <string.h>
#include <ctype.h>

int main()
{
	char src[1000];
	char dest[1000];
	size_t i;
	char imput[1000];

	printf("Este es el tes1, asi que veremos que se transporte el src dentro de un dst con espacios de memoria\n");
	printf("\nColoca algo que vaya en src: ");
	fgets(src, sizeof(src), stdin);
	/*if (!src)
	{
		printf("src esta vacio, seguro que quieres dejarlo vacio?\n");
		printf("Coloca algo en src, no lo volvere a repetir: ");
		gets(src,sizeof(src), stdin);
	}*/
	printf("¿Cuanto quieres transladar a dst?: ");
	fgets(imput, sizeof(imput), stdin);
	sscanf(imput, "%zu", &i);
	if (!i)
	{
		printf("Si no pondras nada, lo hare yo, 4.");
		i = 4;
	}
	printf("el \"dst\" contiene un espacio de 100\n");
	printf("entonces su palabra entra perfectamente!");
	ft_memcpy(dest, src, i);
	printf("lo que ft_memcpy nos da: \n%s\n", dest);

	return 0;
}









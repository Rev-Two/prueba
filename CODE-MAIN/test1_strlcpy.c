#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char dest[1000];
	char src[1000];
	size_t i;
	char imput[100];

	printf("Dame algo que este en src: ");
	fgets(src,sizeof(src), stdin);

	printf("Dame cuanto quieres ingresar: ");
	fgets(imput, sizeof(imput), stdin);
	sscanf(imput, "%zu", &i);

	ft_strlcpy(dest, src, i);
	printf("%s\n", dest);
	return 0;
}

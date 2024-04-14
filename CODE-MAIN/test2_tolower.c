#include <stdio.h>
#include "../libft.h"
#include <ctype.h>
#include <unistd.h>

int main()
{
	char str[100];
	int i = 0;

	printf("Dame algo con mayuscula para que notes que sirvo!: \n");
	fgets(str, sizeof(str), stdin);

	printf("Tu palabra es: ");

	while (str[i] != '\0')
	{
		str[i] = ft_tolower(str[i]);
		printf("%c", str[i]);
		i++;
	}
	printf("\n\n");
	printf("(No soy como mi antecesora)");
	return (0);
}

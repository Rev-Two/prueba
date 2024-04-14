#include <stdio.h>
#include "../libft.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	char str[100];
	size_t i;
	char digit[100];

	printf("Atencion!: El señor main no esta para salvarte\n");
	sleep(1);
	printf("\n1");
	sleep(1); //
	printf("\n2");
	sleep(1);
	printf("\n3");
	sleep(1);
	printf("\n");
	sleep(1);

	printf("\n\nLest go!!\n");
	system("sleep 2");
	system("clear || cls");

	printf("Necesito que pongas algo: ");
	fgets(str, sizeof(str), stdin);

	printf("\nBien, ahora pon un numero: ");
	fgets(digit, sizeof(digit), stdin);
	sscanf(digit, "%zu", &i);

	printf("Felicidades, tu resultado es: %s\n", ft_memset(str, '-', i));

	sleep(1);
	printf("\n\nTe dije que el main no te iba a salvar esta vez!");
	return 0;
}

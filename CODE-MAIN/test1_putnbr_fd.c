#include <stdio.h>
#include "../libft.h"
#include <unistd.h>

int main()
{
	char ctr[100];
	int i;
	int psc = 0;
	printf("Ingrese solamente numeros: ");
	fgets(ctr, sizeof(ctr), stdin);
	sscanf(ctr, "%d", &i);

	if (!i || (i >= '0' && i <= '9'))
	{
		psc= psc + 1;
		printf("\nBro, solo era numeros .-.");
		sleep(1);
		printf("\nTas bien.. ?");
		sleep(1);
		printf("\n\n");
	}

	int file;
	printf("\nAhora el numero del descriptor: ");
	scanf("%d", &file);

	ft_putnbr_fd(i, file);

	if (psc == 1)
	{
		sleep(1);
		printf("\n\nERA UNOS NUMERITOS\n");
	}
	else
	{
		printf("\n\nFinal del codigo!");
	}
	return 0;
}

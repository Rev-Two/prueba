#include <stdio.h>
#include "../libft.h"
#include <string.h>
#include <ctype.h>

int main()
{
	char str[1000];
	size_t i;
	char imput[1000];
	int paciencia = 3;
	int O = 0;

	printf("Ingresa algo que quieras poner: ");
	fgets(str, sizeof(str), stdin);
	if (str[0] == '\n' || isspace(str[0]))
	{
		printf("Ah, conque no se le ocurre nada? No hay problema!");
		printf("\nHagamos que pusiste \"Hola mundo\". ¿Okey? ¡Okey! ;)\n\n");
		strcpy(str, "Hola mundo");
	}
	printf("ingresa el numero de remplazo: ");
	fgets(imput, sizeof(imput), stdin);
	sscanf(imput, "%zu", &i);

	while((!i && O == 0) || imput[0] == '-')
	{
		paciencia = paciencia - 1;
		
		if(imput[0] == '0') 
		{
			printf("Really?. . un CERO?!- Okey.\n");
			paciencia = 999;
			O = 1;
		}
		if(imput[0] == '-')
		{
			printf("\n\nOYE, como vas a poner numero negativos master >:C");
			printf("\nMe causas el mismisimo error ese de ¨hay mi segmento, lo deje aqui y se me desbordo pipipipi¨");
			printf("\nNo, no se puede con negativos. Fin de la discusion.");
			printf("\n\n-procede a devolverle 0 epicamente-");
			return (0);
		}
		if (paciencia == 2)
		{
			printf("ingresa un numero o no habra cambios. : ");
			fgets(imput, sizeof(imput), stdin);
			sscanf(imput, "%zu", &i);
//			i = ft_atoi(imput);
		}
		if(paciencia == 1)
		{
			printf("\nSi no vas a poner nada, que sentido tiene la funcion? >:C");
			printf("\n\n Anda, te dare otra oportunidad, pon UN NUMERO: ");
			fgets(imput, sizeof(imput), stdin);
			sscanf(imput, "%zu", &i);
//			i = ft_atoi(imput);
		}
		if (paciencia == 0)
		{
			printf( "\n. . .\n");
			O = 1;
		}
	}
	printf("\nEl resultado del ft_menset: %s\n", ft_memset(str, '-', i));

	printf("El resultado del memset original: %s\n", memset(str, '-', i));
//--estos mensajes extras--

	if (paciencia == 3)
		printf("\n\nWow, del mas frustrante, paso a ser el mas entretenido de hacer en testeo");
	if (paciencia == 2)
		printf("\n\nAunque no lo creas, me demore mi tiempo en este en especifico");
	if (paciencia == 1)
		printf("\n\n¿Ves?. No era muy dificil escribir un numero corriente");
	if (paciencia == 0)
		printf("\n\n¿Buscabas hacer un error a proposito? JA! \nFRANCHESCO SIEMPRE VA UN PIE MAS ADELANTE FIIIIUIUUUUUURRRR");

	if (paciencia > 3) //Ojo, secret por graciosito//
	{
		printf("\nNingun cambio, igualito como lo dejaste.");
		printf("\n\nEste es un mensaje especial para los amantes de los ceros!");
	}
	return 0;
}

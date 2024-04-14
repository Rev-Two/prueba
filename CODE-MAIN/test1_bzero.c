#include <stdio.h>
#include "../libft.h"
#include <string.h>
#include <ctype.h>

int main()
{
	char cadena[1000];
	char imput[1000];
	size_t i;
	int paciencia = 3;
	int O = 0;

	printf("Ingresa lo que quieres modificar: ");
	fgets(cadena, sizeof(cadena), stdin);
	if (cadena[0] == '\n' || isspace(cadena[0]))
	{
		printf("¿Nada?. Bueno. Hagamos que pusiste un \"hola mundo\" !!");
		ft_strlcpy(cadena, "hola mundo", sizeof(cadena));
	}
	printf("\nAhora pon un numero de cuantos quieres eliminar: ");
	fgets(imput, sizeof(imput), stdin);
	sscanf(imput, "%zu", &i);

	while((!i && O == 0) || imput[0] == '-')
	{
		paciencia = paciencia - 1;
		if (imput[0] == '0')
		{
			printf(". . .No dire nada nadita");
			paciencia = 999;
			O = 1;
		}
		if (imput[0] == '-')
		{
			printf("Hoy estamos mente negativa");
			printf("\n -le devuelve 0-");
			return (0);
		}
		if (paciencia == 2)
		{
			printf("A graciosito nos salio\n");
			printf("Pon noma el digito antes que me baje la paciencia a -2 : ");
			fgets(imput, sizeof(imput), stdin);
			sscanf(imput, "%zu", &i);
		}
		if (paciencia == 1)
		{
			printf("-se enoja en computadora-\n");
			printf("Sabes que es UN NUMERO?\n Dame un numero por el amor al git: ");
			fgets(imput, sizeof(imput), stdin);
			sscanf(imput, "%zu", &i);
		}
		if (paciencia == 0)
		{
			printf("Sabes que? Hagamos que tu numero es \"5\" ;) ");
			i = 5;
		}
	}
	printf("Esto es lo que hace la funcion ft_bzero: \n");
	ft_bzero(cadena, i);
	printf("--------\n");
    for (size_t i = 0; i < 10; ++i)
    {
        printf("%c", cadena[i]);
    }
	printf("\n--------\n");
	//Ahora el tema de mensajes//
	
	if (paciencia <= 3)
	{
		if (paciencia <= 2)
		{
			if (paciencia <= 1)
			{
				if (paciencia == 0)
				{
					printf("\ntonotos");
					return (0);
				}
				printf("\nBuen chico -baja el palo-");
				return (0);
			}
			printf("Gracias por su colaboracion");
			return (0);
		}
		printf("\nY asi funciona la funcion!. .");
		printf("\n\nNo entres al main..");
		return (0);
	}
	return 0;
}	

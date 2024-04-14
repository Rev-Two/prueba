#include <stdio.h>
#include "../libft.h"
#include <ctype.h>
#include <unistd.h>

//comienzo//

int main()
{
	char str[100];
	int i = 0;
	char poreljajas[1];
	int activador;
//
	printf("Te pedire que ingreses algo que contiene minusculas y las convierto en mayusculas: ");
	fgets(str,sizeof(str), stdin);
	printf("\nAhora tu palabra se transformara en mayuscula a la cuenta de.. ");
	sleep(1);
	printf("\n3");
	sleep(1);
	printf("\nWHAIT!");
	sleep(1);
	printf("¿Quieres que cuente en regresiva o consecutiva?");
	printf("\n\nPon un numero si es una regresiva o si es letra entonces consecutiva");
	printf("\n (En caso que ni sea UNA letra y ni UN numero, lo hare de golpe) \n");
	scanf("%s", poreljajas);

//	fgets(poreljajas, sizeof(poreljajas), stdin);
//	sscanf(poreljajas, "%d", &o);

	if(ft_isalpha(poreljajas[0]))
	{
		activador = 1;
	}
	else
		if(ft_isdigit(poreljajas[0]))
		{
			activador = 2;
		}
//	if (!(ft_isdigit(poreljajas[0]) || (ft_isalpha(poreljajas[0]))))
	else
	{
		activador = 3;
	}

//mucho floro//
	
	if (activador == 1)
	{
		printf("\nOK! una una consecutiva :) ");
		sleep(1);
		printf("\n1");
		sleep(1);
		printf("\n2");
		sleep(1);
		printf("\n3");
		sleep(1);
	}
	if (activador == 2)
	{
		printf("\nVale, una regresiva :)"); 
		sleep(1);
		printf("\n3");
		sleep(1);
		printf("\n2");
		sleep(1);
		printf("\n1");
		sleep(1);
	}
	if (activador == 3)
	{
		printf("\nAh conque ninguno. Bueno, aqui va!");
		sleep(1);
	}

//Ahora recien la funcion de toupper//

	printf("\n\n");
	printf("¡Hora buena!. Ahora tu palabra completamente en mayuscula!: ");

	while(str[i] != '\0')
	{
		str[i] = ft_toupper(str[i]);
		printf("%c", str[i]);
		i++;
	}

//extra//
	if (activador == 1)
		printf("Si escogiste el de contar en consecutiva, significa que eres una persona ordenada y puntual ;)");
	if (activador == 2)
		printf("\nEscogiste el de regresiva, eso significa que eres una persona estresada. Osea.. Te gusta que el tiempo te este pisando los talones. No te culpo, yo soy igual");
	if (activador == 3)
		printf("\nSolo te adelantaste, eres una persona ocupada que el tiempo es lo mas importante para uno mismo");

	printf("\n\n (Usaba psicologia en codigo, lol) ");
	return (0);
}

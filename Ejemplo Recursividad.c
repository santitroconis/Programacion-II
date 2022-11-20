// EJEMPLO DE UNA FUNCION RECURSIVA

#include<stdio.h>
#include<conio.h>

int potencia(int, int);

int main()
{
	int base, exponente;
	
	printf("    >>> CALCULADORA DE POTENCIAS <<<   \n\n\n");
	
	printf("Ingrese la base de la potencia: ");
	scanf("%d", &base);
	
	printf("Ingrese el exponente de la potencia: ");
	scanf("%d", &exponente);
	
	printf("\nLa potencia de %d elevado a la %d es igual a: %d", base, exponente, potencia(base,exponente));
	
	getch();
	return 0;
}

int potencia(int x, int y)
{
	int pot;
	
	//CASO BASE
	if(y==1)
	{
		pot = x;
	}
	//CASO RECURSIVO
	else
	{
		pot = x * potencia(x, y-1);
	}
}

// Programación II    //Santiago Troconis
// Asignación N2

/* Este programa debe preguntarle al usuario que tipo de operación quiere realizar (si el usuario digita una opción
invalida el sistema debe alertarlo indicando que la opción no está en la cesta mencionada y debe mostrarle el menú
de elección nuevamente hasta escoja una de las opciones correctas). Luego el programa debe pedir dos números y ejecutar
la acción que el usuario eligió. Todo esto debe hacerse con funciones, declarando los prototipos, definiéndolas y
llamando estas funciones desde el método main.   */

#include<stdio.h>
#include<math.h>
#include<conio.h>

int sw, x, y, res;
float dx, dy, dres; 


int main()
{
	int  suma (int x, int y)
	{
		int res;
		res = x + y;
		return res;
	}
	
	int  resta (int x, int y)
	{
		int res;
		res = x - y;
		return res;
	}
	
	int  multiplicacion (int x, int y)
	{
		int res;
		res = x * y;
		return res;
	}
	
	float  division (float dx, float dy)
	{
		float dres;
		dres = dx / dy;
		return dres;
	}

	do
	{
	
		
	printf("\n         >>> Suma - Resta - Multiplicacion - Division <<<\n\n\n");
	printf("Seleccione el numero correspondiente a la operacion a realizar\n");
	printf("1. Suma  \n2. Resta  \n3. Multiplicacion  \n4. Division   ");
	
	printf("\n     >>> OPCION #");
	scanf("%d", &sw);
	
	switch(sw)
		{
			case 1:
			
				printf("\n\n\n  >>> SUMA <<<\n\n");
				printf("Introduce el primer valor\n");
				scanf("%d", &x);
				printf("Introduce el segundo valor\n");
				scanf("%d", &y);
				printf("El resultado de la suma es igual a %d", suma(x,y));
			
			break;
			
			case 2:
			
				printf("\n\n\n  >>> RESTA <<<\n\n");
				printf("Introduce el primer valor\n");
				scanf("%d", &x);
				printf("Introduce el segundo valor\n");
				scanf("%d", &y);
				printf("El resultado de la resta es igual a %d", resta(x,y));
			
			
			break;
			
			case 3:
			
				printf("\n\n\n  >>> MULTIPLICACION <<<\n\n");
				printf("Introduce el primer valor\n");
				scanf("%d", &x);
				printf("Introduce el segundo valor\n");
				scanf("%d", &y);
				printf("El resultado de la multiplicacion es igual a %d", multiplicacion(x,y));
				
			break;
			
			case 4:
			
				printf("\n\n\n  >>> DIVISION <<<\n\n");
				printf("Introduce el primer valor\n");
				scanf("%f", &dx);
				printf("Introduce el segundo valor\n");
				scanf("%f", &dy);
				printf("El resultado de la division es igual a %.1f", division(dx,dy));
			
			break;
			
			default:
			
				printf("\nIndroduzca un valor valido... (Numero entre el 1 y el 4)\n\n\n");
			
			break;
			
		}		
	}
	
	while (sw < 1 || sw > 5);
		
		
		
		
	getch();
	return 0;
}







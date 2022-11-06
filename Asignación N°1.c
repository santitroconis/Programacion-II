// Programación II      // Santiago Troconis
// Asignacion N1        // C.I: 30.605.144

/*Hacer un programa que pida dos matrices del mismo tamaño y que luego las sume. el programa debe ser capaz de
mostrar el resultado por consola (tener cuidado con las validaciones de los números de filas y columnas de la
segunda matriz… es decir el número de filas y columnas de la segunda matriz debe des igual a los de la primera matriz).*/

#include<stdio.h>
#include<conio.h>

int i, j, k, l, m, n;
int muno [20][20], funo, cuno;
int mdos [20][20], fdos, cdos;
int msum [20][20],   f3,   c3;

int main()
{
	
	printf("\n-- SUMA DE MATRICES --\n\n");
	
	printf("Ingrese la cantidad de filas de sus matrices\n");
	scanf("%d", &funo);
	
	printf("Ingrese la cantidad de columnas de sus matrices\n");
	scanf("%d", &cuno);
	
	f3=fdos=funo;
	c3=cdos=cuno;
	
	//printf("Filas 1 = %d , Filas 2 = %d , Filas 3 = %d\n", funo, fdos, f3 );
	//printf("Col 1 = %d , Col 2 = %d , Col 3 = %d", cuno, cdos, c3 );
	
	printf("\n");
	
	//Matriz N1 - Asignar valores
	
		for(i=0; i<funo; i++)
		{
			
			for(j=0; j<cuno; j++)
			{
				printf("Ingresa el valor para la posicion [%d][%d] de la primera matriz\n", i+1,j+1);
				scanf("%d", &muno[i][j]);
			}	
		}
		
	// Mostrar Matriz N1	
		
		for(i=0; i<funo; i++)
		{
			for(j=0; j<cuno; j++)
			{
				printf("\nMatriz N1 [%d][%d] = %d \n", i, j, muno[i][j]);
			}	
		}
		
	printf("\n\n");
	
	printf("\n");
	
	//Matriz N2 - Asignar valores
	
		for(k=0; k<fdos; k++)
		{
			for(l=0; l<cdos; l++)
			{
				
				printf("Ingresa el valor para la posicion [%d][%d] de la segunda matriz\n", k+1,l+1);
				scanf("%d", &mdos[k][l]);
			}
		}
	printf("\n");

	//Mostrar Matriz N2
	
		for(k=0; k<fdos; k++)
		{
			for(l=0; l<cdos; l++)
			{
				printf("\nMatriz N2 [%d][%d] = %d \n", k+1, l+1, mdos[k][l]);
			}	
		}
	
	printf("Quedando la suma de matrices de esta forma:\n\n");
	
		for(m=0; m<f3; m++)
		{	
			for(n=0; n<c3; n++)
			{
				
				printf("[%d][%d] = %d + %d\n", m+1, n+1, muno[m][n], mdos[m][n]);
				
				msum[m][n] = muno[m][n] + mdos[m][n];
			}	
		}
	
	printf("----- RESULTADO -----\n\n");
	
		for(m=0; m<f3; m++)
		{	
			printf("\n");
			
			for(n=0; n<c3; n++)
			{
				
				printf("[%d][%d] = %d	", m+1, n+1, msum[m][n]);
				
				 
			}	
		}
	printf("\n");
	
	
	getch();
	return 0;
}


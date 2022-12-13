//Santiago Troconis 
//C.I: 30.605.144

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/* NOMBRE, NACIONALIDAD, EDAD, NACIMIENTO, CEDULA */

int ine, ind, ied, ifnac, ica;
int sw, ca, ed, fnac[1][3];
char nombre[50], apellido[50], nd[15];


//ESTRUCTURANDO

struct ne
{
	char nombre[50];
	char apellido[50];	
};

struct info
{
	struct ne info;
	char nd[15];
	int ed;
	int fnac [1][3];
	int ca;
}infop[1];

int main()
{

do
{
//INGRESAMOS
	
printf("\n\n  >>> INFORMACION \n1. Nombre\n2. Apellido\n3. Nacionalidad\n4. Edad\n5. Fecha de nacimiento\n6. Cedula\n ");
scanf("%d", &sw);

	switch (sw)
	{
		case 1:
			printf("\nNombre: ");
			scanf("%s", infop[1].info.nombre);
			
			ine = 1;
		break;	
		
		case 2:
			printf("\nApellido: ");
			scanf("%s", infop[1].info.apellido);		
		break;		

		case 3: 	 
			printf("\nNacionalidad: ");
			scanf("%s", infop[1].nd);	
		
			ind = 1;
			
		break;	
		
		case 4:
			printf("\nEdad: ");
			scanf("%d", &infop[1].ed);
			
			if (infop[1].ed != 0)
			{
				ied = 1;
			}
			
		break;	
		
		case 5:
			printf("\nFecha de nacimiento");
		
			printf("\nDia: ");
			scanf("%d", &infop[1].fnac[0][0]);
			printf("\nMes: ");
			scanf("%d", &infop[1].fnac[0][1]);
			printf("\nAno: ");
			scanf("%d", &infop[1].fnac[0][2]);
			
			ifnac = 1;
		
		break;	
		
		case 6:
			printf("\nCedula: ");
			scanf("%d", &infop[1].ca);
			
			if (infop[1].ca != 0)
			{
				ica = 1;
			}
			
		break;

		default:
			
			if (sw<1 || sw>6)
			{
				printf("No es una opcion valida...\n-----------------------------------------------------\n\n");
			}
		break;	
	}
	
	if (ine==ind==ied==ifnac==ica){}
		else
		{
			printf("\n\n");
			if(ine!=1){  printf("*Nombre \n");  }
			if(ind!=1){  printf("*Nacionalidad \n");  }
			if(ied!=1){  printf("*Edad \n");  }
			if(ifnac!=1){  printf("*Fecha de nacimiento \n");  }
			if(ica!=1){  printf("*Cedula \n");  }
		}	
	
} while(sw<1 || sw>6 || ine!=ind!=ied!=ifnac!=ica);

	printf("\nLos datos recolectados son los siguientes:\n\n");
	
	printf("Nombre: %s %s\n", infop[1].info.nombre, infop[1].info.apellido);
	printf("Nacionalidad: %s\n", infop[1].nd);
	printf("Edad: %d\n", infop[1].ed);
	printf("Fecha de Nacimiento: %d/%d/%d\n", infop[1].fnac[0][0], infop[1].fnac[0][1], infop[1].fnac[0][2]);
	printf("Cedula: %d\n", infop[1].ca);

	printf("%s", infop[1].info.nombre);



	return 0;
}

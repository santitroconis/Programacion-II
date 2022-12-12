//Santiago Troconis 
//C.I: 30.605.144
#include<stdio.h>
#include<conio.h>

int Sum(int x, int y);

int main()
{
    int n1, n2;
    printf("\nEl resultado de la suma es igual a %d", sum(n1, n2));
    return 0; 
}

int sum(int x, int y)
{
    int r;
    
    printf("        >>> SUMA <<<        \n\n\nA continuacion introduzca:\nValor N1: ");
    scanf("%d", &x);
    
    printf("Valor N2: ");
    scanf("%d", &y);
    r = x + y;

    return r;

}
	




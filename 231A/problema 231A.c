#include <stdio.h>
#include <stdlib.h>

// Problema: https://codeforces.com/problemset/problem/231/A
void asignarNumeros();
void comprobar(int numeros[1][1000][1]);
int numeros [1][1000][1];
int n, conteo = 0;
int main(int argc, char *argv[]) 
{
	printf("n: ");
	scanf("%d", &n);
	asignarNumeros();
	getch();
	
	return 0;
}

void asignarNumeros()
{		
	int num1, num2, num3;
	srand(time(NULL));	
	int i, j, k;
	for(i=0;i<1; i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<1;k++)
			{	
				num1 = rand() % 2;
				num2 = rand() % 2;
				num3 = rand() % 2;
				printf("[%d][%d][%d]", num1, num2, num3);
				printf("\n");
				if((num1 == 1 && num2 == 1) || (num1 == 1 && num3 == 1) || (num2 == 1 && num3 == 1)) 
				{
					conteo++;				
				}									
			}			
		}				
	}
	printf("Total : %d", conteo);	
}



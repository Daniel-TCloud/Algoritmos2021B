#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Problema del cambio

int monedas [4] = {1, 2, 5, 10};
int pago;
int total, i = 3, cambio, aux;
int main(int argc, char *argv[]) 
{
	srand(time(NULL));	
	
	pago = 33; //rand() % 11 + 150;
	
	printf(" %d ", pago);
	printf("\n");
	
	for(i = 3; i >= 0; i--)
	{
		if(pago % monedas[i] == 0)
		{
			cambio = pago / monedas[i];
			pago = pago - (cambio * monedas[i]);
			printf(" %d  Monedas de: %d", cambio, monedas[i]);
			printf("\n");
		}
		else
		{
			cambio = pago / monedas[i];
			aux = pago / monedas[i-1];			
			if(cambio < aux)
			{
				pago = pago - (cambio * monedas[i]);
				printf(" %d  Monedas de: %d", cambio, monedas[i]);
				printf("\n");
			}
		}		
		
	}
	getch();
	
	
	return 0;
}

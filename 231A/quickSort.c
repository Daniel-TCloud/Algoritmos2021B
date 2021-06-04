#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quicksort(int listaNumeros[], int tam);
void intercambiar(int listaNumeros[], int limIzquierda, int limDerecha);


int main(int argc, char *argv[]) 
{
	
	int numeros[] = {9,8,7,6,5,4,3,2,1};
	int tamVector = sizeof(numeros)/sizeof(int);
	int i = 0;
	
	for(i = 0; i< tamVector; i++)
	{
		printf("%d ", numeros[i]);
	}
	
	printf("\n");
			
		
	quicksort(numeros, tamVector);
	for(i = 0; i < tamVector; i++)
	{
		printf("%d ", numeros[i]);
	}
	
	printf("\n");
	
	
	return 0;
}


void quicksort (int listaNumeros[], int tam)
{
	intercambiar(listaNumeros, 0, tam-1);
}

void intercambiar(int listaNumeros[], int limIzquierda, int limDerecha)
{
	int izquierda, derecha, pivote, auxiliar;
	
	izquierda = limIzquierda;
	derecha = limDerecha;
	pivote = listaNumeros[(izquierda+derecha)/2];
	
	do
	{
		while((listaNumeros[izquierda] < pivote) && (izquierda < limDerecha))
		{
			izquierda++;
		}
		while((pivote < listaNumeros[derecha]) && (derecha > limIzquierda))
		{
			derecha--;
		}
		
		if(izquierda <= derecha)
		{
			auxiliar = listaNumeros[izquierda];
			listaNumeros[izquierda] = listaNumeros[derecha];
			listaNumeros[derecha] = auxiliar;
			izquierda ++;
			derecha--;
		}
		
	}while (izquierda<=derecha);
	
	if(limIzquierda < derecha)
	{
		intercambiar(listaNumeros, limIzquierda, derecha);
	}
	if(limDerecha > izquierda)
	{
		intercambiar(listaNumeros, izquierda, limDerecha);
	}		
}

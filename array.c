#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
int usuario[] = {10,50,12,16,2};			/*declaro e inicializo array*/
int tamaño = sizeof(usuario) / sizeof(usuario[0]);	/*calculo tamaño del array (tamaño total en bytes / tamaño del primer elemnto en bytes) */
							  /*(5 elementos x 4 bytes = 20 bytes, dividido 1 elemnto de 4 bites == 5 elemnetos.)*/

int max = usuario[0]; /*tomamos el primer elemento, indice 0 como referencia para comparacion*/
int min = usuario[0]; /*tomamos el primer elemento, indice 0 como referencia para comparacion*/
int i = 1;

while (i >= 1 && i < 5)
{
	if (usuario[i] >= max)
	{	
		max = usuario[i];
	}

	if (usuario[i] <= min)
	{
		min = usuario[i];
	}
	
	i++;
}

printf("El valor MAXIMO del usuario es: %d y el MINIMO es : %d", max, min);


return (0);
}

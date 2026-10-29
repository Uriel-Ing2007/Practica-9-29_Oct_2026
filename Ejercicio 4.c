/*Angel Uriel Estrada Martinez
Practica 9
Arreglo multifuncional*/

#include <stdio.h>

int main ()
{
    int lista[10]; // Se declara el arreglo unidimensional
    int i=0;
    int numeroElementos=0;
    printf("\nDa un número entre 1 y 10 para indicar la cantidad de elementos que tiene el arreglo\n");
    scanf("%d",&numeroElementos);
    if((numeroElementos>=1) && (numeroElementos<=10))
    {
        // Se almacena un número en cada elemento del arreglo unidimensional usando for
        for (i = 0 ; i <= numeroElementos-1 ; i++)
    {
        printf("\nDar un número entero para el elemento %d del arreglo ", i );
        scanf("%d",&lista[i]);
    }
         printf("\nLos valores dados son: \n");
         // Se muestra el número almacenado en cada elemento del arreglo unidimensional usando for
         for (i = 0 ; i <= numeroElementos-1 ; i++)
    {
         printf("%d ", lista[i] );
    }
    }
    else printf("el valor dado no es válido");
    printf("\n");
    return 0;
}

/*Angel Uriel Estrada Martinez
Practica 9
Arreglo multifuncional*/

#include <stdio.h>

int main ()
{
    int lista[10]; // Se declara el arreglo unidimensional
    int i=0;
    int numeroElementos=0;
    do 
    {
      printf("\nDa un número entre 1 y 10 para indicar la cantidad de elementos que tiene el arreglo\n");
      scanf("%i",&numeroElementos);
      printf("numeroElementos: %i\n", numeroElementos);
    }while((numeroElementos<1) || (numeroElementos>10));
    {
        // Se almacena un número en cada elemento del arreglo unidimensional usando for
        for (int i = 0 ; i < numeroElementos ; i++)
    {
        printf("\nDar un número entero para el elemento %i del arreglo ", i);
        scanf("%i",&lista[i]);
    }
         printf("\nLos valores dados son: \n");
         // Se muestra el número almacenado en cada elemento del arreglo unidimensional usando for
         for (int j = 0 ; j <= numeroElementos ; j++)
    {
         printf("%i ", lista[j] );
    }
    }
    
    printf("\n\n");
    return 0;
}

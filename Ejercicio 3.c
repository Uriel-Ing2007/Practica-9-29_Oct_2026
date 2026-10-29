/*Angel Uriel Estrada Martinez
Practica 9
Arreglo multifuncional*/

#include <stdio.h>

int main ()
{
    int lista[5] = {10, 8, 5, 8, 7}; // Se declara e inicializa el arreglo unidimensional
    int i=0;
    printf("\tLista\n");
    // Acceso a cada elemento del arreglo unidimensional usando for
    for (i = 0 ; i < 5 ; i++)
    {
        printf("\nCalificación del alumno %d es %d", i+1, lista[i]);
    }
    printf("\n");
    return 0;
}

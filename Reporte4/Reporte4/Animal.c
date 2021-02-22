#include <stdio.h>
#include <string.h>
#include "Animal.h"
#include "Source.c"

int main()
{
    int opcion;
    printf("Bienvenido al uso de Estructuras!\n");
    do
    {
        printf("\nElija su opcion:\n");
        printf("1. Agregar animal.\n");
        printf("2. Mostrar animales.\n");
        printf("3. Ordenar animales.\n");
        printf("4. Salir del menu.\n");
        printf("\nOpcion: ");
        scanf("%d", &opcion);
        if (opcion > 4)
        {
            printf("\nOpcion incorrecta, ingrese un numero del 1 al 4.\n");
        }
        // Inicio del anidamiento
        switch (opcion)
        {
        case 1:
                funcion_ingresar();
                break;
        case 2:
                funcion_mostrar();
                break;
        case 3: funcion_ordenar();
                funcion_ordenar2();
                break;
        }
    }
    while(opcion!=4);
    printf("Adios!");
}


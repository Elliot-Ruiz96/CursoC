#include <stdio.h>
#include <string.h>
#include "Animal.h"
#include "Source.c"

#define max_animales 9

int main()
{
    printf("%d", returnseven());
    int opcion, num_animal=0, num_el_animal;
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
        case 1: printf("\n1. Agregar animal:\n");
                animal c[max_animales];
                printf("\nIngrese la edad del animal #%d: ", num_animal+1);
                scanf("%d", &c[num_animal].edad);
                printf("Ingrese el nombre del animal #%d: ", num_animal+1);
                scanf("%s", c[num_animal].nombre);
                printf("Ingrese la especie del animal #%d: ", num_animal+1);
                scanf("%s", c[num_animal].especie);
                num_animal = num_animal+1;
                break;
        case 2: printf("\n2. Mostrar animales:\n");
                printf("Ingrese numero de animal a mostrar: ");
                scanf("%d", &num_el_animal);
                num_el_animal = num_el_animal-1;
                printf("\nEdad del animal: %d\n", c[num_el_animal].edad);
                printf("Nombre del animal: %s\n", c[num_el_animal].nombre);
                printf("Especie del animal: %s\n", c[num_el_animal].especie);
                break;
        case 3: printf("\n3. Ordenar animales:\n");
                break;
        }
    }
    while(opcion!=4);
    printf("Adios!");
}


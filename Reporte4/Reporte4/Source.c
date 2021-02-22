#include <stdio.h>
#include <string.h>
#include "Animal.h"

#define max_animales 9 //Debido a que el arreglo empieza desde 0

int num_animal=0, num_el_animal;


void funcion_ingresar()
{
    if (num_animal <= max_animales)
    {
        printf("\n1. Agregar animal:\n");
        animal c[max_animales];
        printf("\nIngrese la edad del animal #%d: ", num_animal+1);
        scanf("%d", &c[num_animal].edad);
        printf("Ingrese el nombre del animal #%d: ", num_animal+1);
        scanf("%s", c[num_animal].nombre);
        printf("Ingrese la especie del animal #%d: ", num_animal+1);
        scanf("%s", c[num_animal].especie);
        num_animal = num_animal+1;
    }
    else
    {
        printf ("Numero maximo de animales ingresados. \n");
    }

}

void funcion_mostrar()
{
    printf("\n2. Mostrar animales:\n");
    animal c[max_animales];
    printf("Ingrese numero de animal a mostrar: ");
    scanf("%d", &num_el_animal);
    num_el_animal = num_el_animal-1;
    printf("\nEdad del animal: %d\n", c[num_el_animal].edad);
    printf("Nombre del animal: %s\n", c[num_el_animal].nombre);
    printf("Especie del animal: %s\n", c[num_el_animal].especie);
}

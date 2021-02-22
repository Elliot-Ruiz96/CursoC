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

void funcion_ordenar()
{
    animal c[max_animales];
    int i, j, pivot, temp, primero, ultimo;
    primero = c[0];
    ultimo = c[max_animales];
    if(primero < ultimo)
    {
        pivot = primero;
        i = primero;
        j = ultimo;
        while(i < j)
        {
            while(c[i].edad <= c[pivot].edad && i < ultimo)
            {
                i++;
                while(c[j].edad > c[pivot].edad)
                {
                    j--;
                    if(i < j)
                    {
                        temp = c[i].edad;
                        c[i].edad = c[j].edad;
                        c[j].edad = temp;
                    }
                }
            }
            temp = c[pivot].edad;
            c[pivot].edad = c[j].edad;
            c[j].edad = temp;
        }
    }
}

void funcion_ordenar2()
{
    printf("\n3. Ordenar animales:\n");
    animal c[max_animales];
    int i;
    for(i = 0; i < max_animales; i++)
    {
        funcion_ordenar();
        printf("El orden es: ");
    }
    for(i = 0; i < max_animales ; i++)
    {
        printf(" %d", c[num_animal].edad);
    }
}

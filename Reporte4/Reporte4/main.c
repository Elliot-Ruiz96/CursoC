#include <stdio.h>
#include <string.h>

#define longitud 20
#define longitud2 20
#define max_animales 2

typedef struct animal    //Evitara escribir "struct" en cada declaracion de variables | Asigna un array de 10 elementos
{
    int edad;
    char nombre[longitud];
    char especie[longitud2];
}
animal
;


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
        case 1: printf("\n1. Agregar animal:\n");
                animal c, *ptr_c;
                ptr_c = &c;
                printf("\nIngrese la edad del animal: ");
                scanf("%d", &ptr_c->edad);
                printf("Ingrese el nombre del animal: ");
                //fflush(stdin);  //Usada para borrar el buffer de salida y mover los datos almacenados en consola en caso de usar (gets)
                scanf("%s", &ptr_c->nombre);
                printf("Ingrese la especie del animal: ");
                //fflush(stdin);
                scanf("%s", &ptr_c->especie);
                break;
        case 2: printf("\n2. Mostrar animales:\n");
                printf("\nEdad del animal: %d\n", ptr_c ->edad);
                printf("Nombre del animal: %s\n", ptr_c ->nombre);
                printf("Especie del animal: %s\n", ptr_c ->especie);
                break;
        case 3: printf("\n3. Ordenar animales:\n");
                break;
        }
        //system("cls");  //Limpieza de pantalla
    }
    while(opcion!=4);
    printf("Adios!");
}

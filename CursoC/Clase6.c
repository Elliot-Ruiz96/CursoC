#include "Clase6.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 100

void c6_ejemplo1()
{
    FILE *archivito = fopen ("archivito.txt", "w");
    int valor = 15;

    if(fprintf(archivito, "Escribiendo %i dentro del archivo \n", valor))
    {
        printf("El archivo fue escrito con exito 7n");
    }
    else
    {
        printf("Problemas al escribir el archivo");
        ferror(archivito);
    }
    fclose(archivito);
     //Es importante cerrar el archivo despues de usarlo, por si usas el archivo despues
}

void c6_ejemplo()
{
    FILE *archivito = fopen ("archivito.txt", "r");
    fseek(archivito, 0, SEEK_END);
    int archivito_p = ftell(archivito);
    int leido;
    do
    {
        leido = fgetc(archivito);
        if(leido==EOF)
            break;
        printf("%c", leido);
    }
    while(leido != EOF);
    char *buffer = (char*) malloc(BUFFER_SIZE*sizeof(char));
    fseek(archivito, archivito_p, SEEK_END);
    printf("Valor de tell: %i \n", archivito_p);
    fgets(buffer, 10, archivito);
    printf("%s \n", buffer);
    fclose(archivito);
}

void c6_ejemplo2()
{
    persona *p = (persona*) malloc(sizeof(persona);
            inicializa_persona(p "Elliot Ruiz")
}

void guarda_persona(const persona *p)
{
    FILE *p_archivo = fopen("personas.txt","w");
    fprintf(p_archivo, "%s");

}

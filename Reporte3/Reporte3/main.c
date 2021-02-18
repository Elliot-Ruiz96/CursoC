#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// Libreria para darle conidcion al ciclo while

const int MAX_ARRAY = 100;
// Evitar numeros magicos
void invertir_palabra(char *palabra);
// Funcion dedicada a invertir la palabra


int main(){
    char cadena[MAX_ARRAY];
    // Tamaño maximo de la cadena
    printf("Ingresa una cadena sin espacio: \n");
    scanf("%s",cadena);
    invertir_palabra(&cadena);
    // Llamada a funcion y envio de punteros
}

void invertir_palabra(char *cadena)
// Palabra se declara como una "Variable puntero (tal como se menciona en la documentacion)"
// Es iimportante mencionar que los char son considerados como punteros

{
    char *ptrletrauno , *ptrletrados;
    // Declaracion de dos nuevos punteros
    int resta = 1,Tam_array = 0;
    // Variable resta a usar para el tamaño del arreglo en el ciclo for  debido al caracter nulo
    bool ciclo = true;
    Tam_array = strlen(cadena);
    // Tamaño real de la cadena y sus caracteres ingresados para evitar basura
    while(ciclo){
        for(int i=0;i<Tam_array-resta;i++)
        {
           ptrletrauno = &cadena[i];
           ptrletrados = &cadena[i+1];
            cadena[i] = ptrletrados;
            cadena[i+1] = ptrletrauno;

            // Tal como se explica arriba estos son apuntadores, no se estan almacenando en variables fijas
        }
        resta +=1;
        // Da un cierre al ciclo while dando "i=tam_array - resta"
        if (Tam_array == resta){
            ciclo = false;
        }
    }
    printf("\nTu cadena invertida es: \n");
    printf("%s\n\n",cadena);
}

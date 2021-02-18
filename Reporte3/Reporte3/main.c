#include <stdio.h>
#include <string.h>

#define MAX_ARRAY 100

void invierte(char cadenafuente[MAX_ARRAY],char cadenanueva[MAX_ARRAY]);

int main()
{
    char cadena[MAX_ARRAY], cadenainvertida[MAX_ARRAY];

    printf("Introduzca una cadena de como maximo 100 caracteres: ");
    gets(cadena);
    invierte(cadena, cadenainvertida);

    printf("\nLa cadena invertida es %s. ", cadenainvertida);

    return 0;
}

void invierte(char cadenafuente[MAX_ARRAY],char cadenanueva[MAX_ARRAY])
{
    int longitud,i,j;
    longitud=strlen(cadenafuente);
    j=longitud-1;
    for (i=0;i<longitud;i++)
    {
        cadenanueva[i]=cadenafuente[j];
        j--;
    }
    cadenanueva[longitud]='\0';
    return;

}

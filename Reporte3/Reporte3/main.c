#include <stdio.h>
#include <string.h>
#include <stdbool.h>
const int Tam_temp = 100;
void invertir_palabra(char *palabra);
void numero(int*);

int main(){
    char palabra[Tam_temp];
    printf("Ingresa una cadena sin espacio: \n");
    scanf("%s",palabra);
    invertir_palabra(palabra);
}

void invertir_palabra(char *palabra){
    char *ptrletrauno , *ptrletrados;
    int resta = 1,Tam_array = 0;
    bool ciclo = true;
    Tam_array = strlen(palabra);
    while(ciclo){
        for(int i=0;i<Tam_array-resta;i++)
        {
            ptrletrauno = palabra[i];
            ptrletrados = palabra[i+1];
            palabra[i] = ptrletrados;
            palabra[i+1] = ptrletrauno;
        }
        resta +=1;
        if (Tam_array == resta){
            ciclo = false;
        }
    }
    printf("%s\n",palabra);
}

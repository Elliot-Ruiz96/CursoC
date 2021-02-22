#ifndef ANIMAL_H
#define ANIMAL_H

#define longitud 20
#define longitud2 20

typedef struct animal    //Evitara escribir "struct" en cada declaracion de variables | Asigna un array de 10 elementos
{
    int edad;
    char nombre[longitud];
    char especie[longitud2];
}
animal
;

int returnseven(void);

#endif // ANIMAL_H

#include <stdio.h>

main() {
    printf("Hola mundo\n");

    int numero = 5;
    int *puntero = &numero;
    
    printf("1)el valor de numero es %d\n", numero);
    printf("2)el valor de puntero es %p\n", puntero);
    printf("3)el valor de memoria del numero es %p\n", &numero);
    printf("4)el valor al que apunta puntero es %d\n", *puntero);
    printf("5)el tamaño de memoria de numero es %zu\n", sizeof(numero));
    
}
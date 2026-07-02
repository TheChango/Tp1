#include <stdio.h>

int cuadradoNumero(int *p) {
    int numero = (*p) * (*p);
    return numero;
}

void cuadradoNumeroVoid(int *p) {
    int numero = (*p) * (*p);

     printf("El cuadrado de %d usando la función void es: %d\n", *p, numero);
}

void invertir(int a,int b) {
    int temporal = a;
    a = b;
    b = temporal;

    printf("1) Dentro de la funcion invertir: a = %d, b = %d\n", a, b);
}

void orden(int a, int b) {
    if (a > b) {
        invertir(a, b);
        printf("2) ubicacion invertida: a = %d, b = %d\n", a, b);
    } else {
        printf("2) Los numeros ya estan en orden: a = %d, b = %d\n", a, b);
    }
}

int main() {
    int numero;

    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    printf("El número ingresado es: %d\n", numero);
    printf("El valor de memoria de numero es: %p\n", &numero);

    int resultado = cuadradoNumero(&numero);
    
    printf("El cuadrado de %d es: %d\n", numero, resultado);
    
    cuadradoNumeroVoid(&numero);

    int numero1;
    int numero2;

    printf("ingrese el primer número: ");
    scanf("%d", &numero1);
    printf("ingrese el segundo número: ");
    scanf("%d", &numero2);
    
    invertir(numero1, numero2);
    orden(numero1, numero2);

    return 0;
}
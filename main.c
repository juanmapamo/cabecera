#include <stdio.h>
#include "archivo.h"

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Ingrese el 1er valor");
    scanf("%d", &a);
    printf("Ingrese el 2do valor");
    scanf("%d", &b);
    printf ("El resultado es: %d", sumar(a,b));
    return 0;
}

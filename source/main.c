#include <stdio.h>
#include "../libreria/archivo.h"
#include "../libreria/archivor.h"

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Ingrese el 1er valor");
    scanf("%d", &a);
    printf("Ingrese el 2do valor");
    scanf("%d", &b);
    printf ("El resultado es: %d", suma(a,b));
    printf ("El resultado es: %d", resta(a,b));
    return 0;
}

#include <stdio.h>

int main()
{
    int A;
    int B;
    int C;

    printf("Escribe el valor de tu letra a\n");
    scanf("%d", &A);

    printf("Escribe el valor de tu letra b\n");
    scanf("%d", &B);

    // JERARQUIA
    C = A + B * A;
    printf("El valor de tu letra de tu operacion es (JERARQUIA): %d\n", C);

    // TERNARIO
    C = A < B ? 1 : 0;
    printf("El valor de tu letra de tu operacion es (TERNARIO): %d\n", C);

    // LOGICO
    C = A || B;
    printf("El valor de tu letra de tu operacion es (LOGICO): %d\n", C);

    // BITEWISE
    C = A | B;
    printf("El valor de tu letra de tu operacion es (BITEWISE): %d\n", C);

    // EXPRESION
    C = (A + B) % C * A;
    printf("El valor de tu letra de tu operacion es (EXPRESIÓN): %d\n", C);

    return 0;
}

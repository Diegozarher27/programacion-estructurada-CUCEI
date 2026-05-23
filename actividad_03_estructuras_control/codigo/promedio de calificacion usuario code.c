#include <stdio.h>

int main() {
    int opcion;
    int NM;
    int i;
    unsigned int calificacion; // Se agregó 'int' para corregir el tipo de dato
    int suma;
    int promedio;

    do {
        printf("dame la cantidad de materias que cursaste en el semestre:\n");
        scanf("%d", &NM);

        // Inicializamos suma en 0 antes del bucle de materias
        suma = 0;

        for (i = 1; i <= NM; i++) {
            printf("calificacion de la materia (0 - 100):\n");
            scanf("%u", &calificacion); // %u es el formato correcto para unsigned int

            // Bucle para validar que la calificación esté entre 0 y 100
            while (calificacion > 100) {
                printf("no se puede poner numeros mayores a 100 o negativos\n");
                printf("calificacion de la materia (0 - 100):\n");
                scanf("%u", &calificacion);
            }

            suma += calificacion; // Corregido el error de dedo "calificecion"
        }

        // Evitamos división por cero si el usuario ingresa 0 materias
        if (NM > 0) {
            promedio = suma / NM;
            printf("tu promedio es: %d\n", promedio);
        } else {
            printf("No ingresaste materias válidas.\n");
        }

        printf("PRESIONA 1 SI..quieres repetir el programa\n");
        printf("PRESIONA 2 SI...quieres salir del programa\n");
        scanf("%d", &opcion);

    } while (opcion == 1);

    return 0;
}

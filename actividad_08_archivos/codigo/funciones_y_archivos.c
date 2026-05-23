#include <stdio.h>

void capturar(int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

void mostrar(int v[], int n)
{
    int i;
    printf("\nArreglo original:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int filtrar(int origen[], int destino[], int n)
{
    int i;
    int j = 0;

    for (i = 0; i < n; i++)
    {
        if (origen[i] % 2 != 0)
        {
            destino[j] = origen[i];
            j++;
        }
    }

    return j;
}

void guardarArchivo(int v[], int n)
{
    FILE *f;
    int i;

    f = fopen("resultado.txt", "w");

    if (f == NULL)
    {
        printf("Error al crear el archivo\n");
        return;
    }

    for (i = 0; i < n; i++)
    {
        fprintf(f, "%d ", v[i]);
    }

    fclose(f);
}

int main()
{
    int original[6];
    int filtrado[6];
    int nuevoTam;
    int i;

    capturar(original, 6);

    mostrar(original, 6);

    nuevoTam = filtrar(original, filtrado, 6);

    printf("\nArreglo filtrado:\n");
    for (i = 0; i < nuevoTam; i++)
    {
        printf("%d ", filtrado[i]);
    }

    printf("\n");

    guardarArchivo(filtrado, nuevoTam);

    printf("\nArchivo 'resultado.txt' creado correctamente.\n");

    return 0;
}

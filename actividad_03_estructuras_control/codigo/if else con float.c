#include <stdio.h>


int main()
{
    float promedio;
    int mr;
    printf("Escribe tu promedio.\n");
    scanf("%f",&promedio);
    printf("Ahora la cantidad de materias que reprobaste.\n");
    scanf("%d",&mr);
    if ( promedio >= 8.5 && mr == 0){
        printf("obtuviste la beca\n");
    }
    else{
        printf("no obtuviste la beca\n");
    }



}

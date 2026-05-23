#include <stdio.h>

int main()
{
    int a = 3;
    int b = 4;
    int c = a++ + --b;

    printf("%d %d %d\n", a, b, c); //en c los valores cambian tambien, pero en la operacion se queda como a = 3 porque se usa y luego se suma, y en b se resta primero

    int x = 10;
    int y = 3;

    printf("%d\n", x + y * 2); //primero se hace la multiplicacion por la jerarquia y luego la suma, por eso imprimira 16
    printf("%d\n", (x + y) * 2); //primero haria los parentesis y luego la multiplicacion por la jerarquia tambien

    int i = 5;

    printf("%d\n", i++); //imprimira 5 ya que primero se usa y luego se suma
    printf("%d\n", ++i); //imprimira 7 ya que el valor de i es 6 por el print anterior y despues incrementaria y luego usaria

    a = 5;
    b = 2;
    float r = a / b;

    printf("%.2f\n", r); //imprimira 2.00 porque al momento de hacer la division no estamos usando a y b como tipo int, aqui ocupariamos poner (float) a/b;

    x = 5; // aqui agrega un salto de linea
    y = 3;

    if (x > y){ //los errores son que le falta identacion, y el else ocupa parentesis, al igual que el if aunque no es obligatorio
        printf("x es mayor\n");
    }else{
        printf("y es mayor\n"); // en los print imprimira todo junto pero sin saltos de linea faltan los saltos de linea
    }

    printf("fin\n"); //este programa imprimira x es mayor porque en este caso la variable x tiene un valor mayor que el de y y justo abajo imprimira fin

    return 0;
}

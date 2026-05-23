#include <stdio.h>

int main()
{
    char b=2;
    printf("la direccion de tu dato char es: %lu\n", (unsigned long)&b);

    signed char c=3;
    printf("la direccion de tu dato signed char es: %lu\n", (unsigned long)&c);

    unsigned char d=4;
    printf("la direccion de tu dato unsigned char es: %lu\n", (unsigned long)&d);

    short int e=5;
    printf("la direccion de tu dato short int es: %lu\n", (unsigned long)&e);

    unsigned short int f=6;
    printf("la direccion de tu dato unsigned short int es: %lu\n", (unsigned long)&f);

    int g=7;
    printf("la direccion de tu dato int es: %lu\n", (unsigned long)&g);

    unsigned int h=8;
    printf("la direccion de tu dato unsigned int es: %lu\n", (unsigned long)&h);

    long int i=9;
    printf("la direccion de tu dato long int es: %lu\n", (unsigned long)&i);

    unsigned long int j=10;
    printf("la direccion de tu dato unsigned long int es: %lu\n", (unsigned long)&j);

    long long int k=11;
    printf("la direccion de tu dato long long int es: %lu\n", (unsigned long)&k);

    unsigned long long int l=12;
    printf("la direccion de tu dato unsigned long long int es: %lu\n", (unsigned long)&l);

    float m=3.14;
    printf("la direccion de tu dato float es: %lu\n", (unsigned long)&m);

    double n=3.1416;
    printf("la direccion de tu dato double es: %lu\n", (unsigned long)&n);

    long double o=3.141592;
    printf("la direccion de tu dato long double es: %lu\n", (unsigned long)&o);

    int q = 100;
    void *p = &q;
    printf("la direccion de tu dato void es: %lu\n", (unsigned long)p);

    return 0;
}

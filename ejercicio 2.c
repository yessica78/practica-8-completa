#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    float a, b, c, x1, x2;
    printf ("Ingrese el valor de a: ");
    scanf ("%d", &a);
    printf ("Ingrese el valor de b: ");
    scanf ("%d", &b);
    printf ("Ingrese el valor de c: ");
    scanf ("%d", &c);
    {
    x1=-b+sqrt(b*b-4*a*c)/(2*a);
    x2=-b-sqrt(b*b-4*a*c)/(2*a);
    printf ("Valor de x1: %d", x1);
    printf ("Valor de x2: %d", x2);
    putchar ('\n'); 
    system ("pause");
    return 0;
    }
}

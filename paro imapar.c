#include <stdio.h>
/*
 Este programa permite validar si un n�mero es par o impar.
 El n�mero se lee desde la entrada est�ndar (el teclado).
*/
int main(){
 int num;

 printf("Ingrese un n�mero:\n");
 scanf("%d",&num);

 if ( num%2 == 0 )
 printf("El n�mero %d es par.\n",num);
 else
 printf("El n�mero %d es impar.\n",num);

 return 0;
}

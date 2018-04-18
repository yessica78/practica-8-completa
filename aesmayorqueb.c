#include<stdio.h>
/*
 Este programa valida si el número a es mayor al número b.
*/
int main (){
 int a, b;
 a = 3;
 b = 8;

 if (a > b) {
 printf("\ta (%d) es mayor a  b (%d).\n",a,b);
 }
else{
 printf ("\tb (%d)es mayor a la variable a (%d).\n",b,a);	
}
 printf("\t\vEl programa sigue su flujo.\n");
 return 0;
}

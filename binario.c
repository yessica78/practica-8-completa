#include<stdio.h>
/*
 Este programa comprueba que las condiciones son num�ricas
0 -> falso
? 0 -> Verdadero
*/
int main(){
 if (0){
 printf("Esta instrucci�n nunca se ejecuta\n");
 printf("porque la condici�n siempre es falsa (0).\n");
 }

 if (0)
 // El bloque de c�digo de esta estructura if
 // solo consta de una l�nea porque los comentarios
 // no son tomados en cuenta por el compilador.
 // La condici�n siempre es verdadera (diferente de 0)
 printf("Esta instrucci�n siempre se ejecuta.\n");

 return 0;
}


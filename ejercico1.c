#include<stdio.h>
#include<conio.h>
int main()
{
	int N;
	printf("\n Introduzca edad:");
	scanf("%d",& N);
if(N>=0 && N<=60)
  if(N<=3)
     printf("\n Bebe");
  else
     if(N<=12)
        printf("\n Niño");
     else
        if(N<=18)
          printf("\n Joven");
        else
		   if(N<=40)
		     printf("\n adulto");
		   else
		     if(N<=60) 
			   printf("\n adulto mayor");
else 
  printf("\n error de edad"); 
  
getch();
 return 0;
}

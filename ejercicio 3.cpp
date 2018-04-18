#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("\n Introduzca valor a:");
	scanf("%d",& a);
	printf("\n Introduzca valor b:");
	scanf("%d",& b);
	printf("\n Introduzca valor c:");
	scanf("%d",& c);
	{
  if(a==c&&c==b)
     printf("\n equilatero"); 
    if(a==b&& b==a||b==c && c==b||c==a && a==c)
        printf("\n isoceles");
  else
	 (c==b&&b==c||b==c&&b==a)
     printf("\n Escaleno"); 
 return 0;
    }
}

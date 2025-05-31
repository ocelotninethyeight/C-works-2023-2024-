#include <stdio.h>

main ()
{
	int b;
	int h;
	int a;

	printf("base = ");
	scanf("%d", &b);

	printf("\n altezza = ");
	scanf("%d", &h);
	
	a=b*h;
	printf("la tua area e' di ");
	printf("%d", a);
}

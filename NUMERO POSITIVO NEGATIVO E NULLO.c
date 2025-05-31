#include <stdio.h>
main()
{    
// DETERMINAZIONE NUMERI POSITIVO NEGATIVI E NULLI
 int i; 
 int n;
  i=0;
 while 
 (i<=10)
	{
	printf("\n\n \t ITERAZIONE N° " );
	printf("%d ", i);
    printf("\n\n \t ORA INSERISCI UN NUMERO \n  n = ");	
    scanf("%d", &n);
     // SCELTA CONDIZIONALE

    if (n > 0)
     printf("IL NUMERO è positivo\n\n");
    if (n < 0)
    printf("IL NUMERO è negativo\n\n");
    if (n == 0)printf("IL NUMERO è nullo\n\n");
    // printf("FINE\n");
    i++;
    }
	//printf("\t premi un tasto per continuare......   \n");
	//printf("\n"); 
	getchar();
	printf("\tGRAZIE...........Abbiamo finito       \n");
	//getchar();	
	
}


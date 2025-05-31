#include <stdio.h>     // per poter usare printf()

int main()
  {
 
    int ripeti;
    int cont;  
    int contMAX;
    int DIM=10;
    int VETT[DIM];
    int i;
    int vMAX;
    int vMIN;
    int somma;
    float media;
       
    //INIZIALIZZAZIONE
    ripeti=1;
    vMAX=0;
    vMIN=0;
    cont=0;
    somma=0;
    contMAX=1000000000;
   
    while ( ripeti ==1 )
    {
    	printf("\n");
    	printf("inserisci un valore per DIM");
    	scanf("%d",&DIM);
     system ("cls");
   
     printf("\n\n");
     printf("ACQUISIZIONE E STAMPA DEI "); printf("%d", DIM); printf(" VALORI DEL VETTORE ");
     
     printf("\n\n");
     for (i=0; i<DIM; i++)    
        {
     vMIN=VETT[0];
         printf("\n");
         printf("IMMETTI UN VALORE INTERO NELLA LOCAZIONE DEL VETTORE N. "); printf("%d", i); printf(" VALORE = ");
         scanf("%d",  &VETT[i]);
         if(vMAX<=VETT[i]){
         	vMAX=VETT[i];
		 }
		 printf("il numero maggiore e': ");
		 printf("%d",vMAX);
		 
		     if(vMIN>VETT[i]) {
         	vMIN=VETT[i];
		 }
		 printf("\n il numero minore e': ");
		 printf("%d",vMIN);
		 
		 somma=somma+VETT[i];
		 printf("\n la somma e': ");
		 printf("%d",somma);
		 
		 
		 media=somma/DIM;
		 printf("\n la media e': ");
		 printf("%f",media);
        };

    }
   
 }

#include <stdio.h>     // per poter usare printf()

int main()
  {
    // DEFINIZIONE DELLE VARIABILI
    int ripeti;
    int cont;    // contatore per il conteggio del tempo di ritardo
    int contMAX; // imposta il valore MASSIMO di conteggio
    int DIM=10;
    int VETT[DIM];
    int i;
       
    //INIZIALIZZAZIONE
    ripeti=1;
    DIM=10;
    cont=0;
    contMAX=1000000000;
   
    // CICLO INFINITO
    while ( ripeti ==1 )
    {
     system ("cls");
   
      // ACQUISIZIONE DEI VALORI CONTENUTI NEL VETTORE
     printf("\n\n");
     printf("ACQUISIZIONE E STAMPA DEI "); printf("%d", DIM); printf(" VALORI DEL VETTORE ");
     
     printf("\n\n");
     for (i=0; i<DIM; i++)    
        {
         printf("\n");
         printf("IMMETTI UN VALORE INTERO NELLA LOCAZIONE DEL VETTORE N. "); printf("%d", i); printf(" VALORE = ");
         // La seguente istruzione lEGGE un carattere da TASTIERA e la assegna alla posizione i-esima del VETTORE
         scanf("%d",  &VETT[i]);
        };
       
         // STAMPA DEI VALORI CONTENUTI NEL VETTORE
         printf("\n\n");
         printf("IL VETTORE CONTIENE I SEGUENTI VALORI "); printf("%d", DIM); printf(" VALORI");
         for (i=DIM-1; i>=0; i--)    
          {
           printf("\n\n LA CELLA N.   "); printf("%d", i ); printf("CONTIENE IL VALORE  "); printf("%d", VETT[i]);      
          };
       
        for (cont=0; cont<=100*contMAX; cont++); //TEMPO DI ATTESA
       
        //getchar();    
   
        //return 0;
    }
   
 }

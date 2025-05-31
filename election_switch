#include <stdio.h>     // per poter usare printf()

main()
 
  {
    // DEFINIZIONE DELLE VARIABILI
    int ripeti;
    int cont;    // contatore per il conteggio del tempo di ritardo
    int contMAX; // imposta il valore MASSIMO di conteggio
    int contA;   // contatore per il carattere A
    int contB;   // contatore per il carattere B
    int contC;   // contatore per il carattere C
    int contD;   // contatore per il carattere D  
    int contdefault;
    char leggo;
    int quota;
   
    //INIZIALIZZAZIONE
    ripeti=1;
    contMAX=10000000;
    cont=0;
    contA=0;
    contB=0;
    contC=0;
    contD=0;
    contdefault=0;
   
    printf("dai un valore alla quota");
    scanf("%d",&quota);
    system("cls");
    // CICLO INFINITO
    while(!(ripeti == quota) )
    {
     system ("cls");
     printf("\nIl seguente programma CONTA quante volte vengono votati i seguenti partiti: A B C D");
     printf("\n\n\n\n\n");
     printf("\nIl il PD e' stato votato  "); printf("%d", contA);  printf(" volte");
     printf("\nFratelli d' italia e' stato votato "); printf("%d", contB);  printf(" volte");
     printf("\nMovimento 5 stelle e' stato premuto  "); printf("%d", contC);  printf(" volte");
     printf("\nDemocristiana e' stata votata  "); printf("%d", contD);  printf(" volte");
     printf("\n\nVoti nulli        "); printf("%d", contdefault); printf(" volte");
             
     printf("\n\n\nInserire un carattere fra i seguenti: A(=PD) B(=FDI) C(=M5S) D(=DC) \t"); printf("\t");
     
     leggo=getchar(); // lEGGE un carattere da TASTIERA e lo fornisce alla VARIABILE "leggo" di tipo "Char"
        printf("\n\n\nIL CARATTERE DIGITATO E' "); printf("% c", leggo);  
     
       
       
       switch (leggo)   //SELEZIONE del TASTO PREMUTO
       {  case 'A':
          contA++;
           break;
          case 'B':
          contB++;
           break;
          case 'C':
          contC++;
           break;
          case 'D':
          contD++;
           break;
           
           default:
            {
            contdefault++;
                 
            };
          break;        
         
       }
     
     
           
    ripeti++;
    }
    system("cls");
    printf("finito");


}

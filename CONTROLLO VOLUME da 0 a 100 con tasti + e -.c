#include <stdio.h>
main()
{    
// CONTROLLO VOLUME TRAMITE PRESSIONE TASTI   
// DICHIARAZIONE VARIABILI 
 
 int true;      // variabile per un CICLO INFINITO ( LOOP ) 
 int v;         // v è un NUMERO INTERO che indica il VOLUME 
 int t;         // t è un NUMERO INTERO che indica un tempo di RITARDO
 char tasto;   //  variabile leggo di tipo char ( carattere ) che memorizza il tasto premuto; 
  
 // INIZIALIZZAZIONE VARIABILI
 true=1;
 v=0;
  
system ("cls");
 while (true ==1) 
	{
	   system("cls");
	   printf("\n\t==============================");
	   printf("\n\t INTERFACCIA CONTROLLO VOLUME "); printf("\t\t VOLUME ATTUALE = "); printf("%d", v);
	   printf("\n\t==============================");
	   printf("\n\n\n");
	   printf("\t PER AUMENTARE IL VOLUME PREMI IL TASTO   + ");
	   printf("\n\n\n");
	   printf("\t PER DIMINUIRE IL VOLUME PREMI IL TASTO   - ");
	   printf("\n\n\n\t TASTO DI INPUT...?  "); 
	   tasto=getchar();  
	   printf("\n\tE' stato inserito il carattere", tasto);
	   putchar(tasto);        		
	    t=0;
		while( t<100000 )
		t++;
		 
		 if ( tasto == 43) // 43 è il codice ASCII del carattere "+"
         {
         v++;
         if (v>=100)
           {
           v=100;
		   }
		 }
            
        if (tasto == 45)   // 45 è il codice ASCII del carattere "-"
        {
          v--;
          if (v<=0)
           {
           v=0;
		   }
	    
		}	
	}
}


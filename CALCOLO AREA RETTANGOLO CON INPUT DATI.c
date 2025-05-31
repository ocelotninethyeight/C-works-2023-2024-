#include <stdio.h>
main()
{   

	// CALCOLO AREA RETTANGOLO
	// Dichiarazione delle VARIABILI
	int base;
	int altezza;
	int area;
	
	// ASSEGNAZIONE VALORI alle VARIABILI ( COSTANTI )
	//base=10;
	//altezza=20;
	
	// INPUT DATI e ASSEGNAZIONE VALORI alle VARIABILI
	printf("\n\n Calcolo dell'AREA DI UN RETTANGOLO con");
	printf("\n\n base = ");  scanf("%d", &base);
	printf("\n altezza = "); scanf("%d", &altezza);
	printf("\n \n"); 
	
	//Calcolo dell'area
	area=base*altezza;
		
	// Stampa DATI INIZIALI E RISULTATI
	//system("cls");
	printf("\n\n\n");
	printf("I DATI DI INPUT PER IL RETTANGOLO SONO: ")  ;
	printf("\n\n\n");
	printf("base = ");  printf("%d ", base );
	printf("\n\n\n"); 
	printf("altezza = ");  printf("%d ", altezza );
	printf("\n\n\n"); 	
	printf("AREA RETTANGOLO = ");  printf("%d ", area );
	
	// ATTESA PER VISUALIZZAZIONE RISULTATI
	// fino alla acquisizione di un CARATTERE  
	// tramite comando "getchar()"
	getchar(); 
	
	// MESSAGGIO FINALE DI SALUTO
	//system("cls");
	printf("\n\n\n");
	printf("\t\n");
	printf("\t\n");   
	printf("\t *******  **        **       *******  \n"); 
	printf("\t *******  **       ****      *******  \n"); 
	printf("\t **       **      **  **     **   **  \n");
	printf("\t **       **     **    **    **   **  \n");
	printf("\t **       **    **********   **   **  \n");
	printf("\t *******  **   **        **  *******  \n");
	printf("\t *******  **  **          ** *******  \n");
	printf("\n");
	printf("\t************************************  \n"); 
	printf("\n\n\n"); 
	
	printf("\tGRAZIE.......Abbiamo finito.......Premi un tasto per continuare.....   \n");
	getchar();	
	
	}


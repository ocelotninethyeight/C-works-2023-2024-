#include <stdio.h>

main () {
	/*dichiarazione variabili*/
	float a;
	float b;
	/*acquisizione valori*/
	printf("inserisci il primo numero ");
	scanf("%f", &a);
	system("cls");
	printf("inserisci il secondo numero ");
	scanf("%f", &b);
	system("cls");
	/*Svolgimento, attraverso funzione IF del problema */
	if(a>b) {
		/*caso 1: a è maggiore di b*/
		printf("il numero maggiore e' ");
		printf("%f",a);
		}
		/*caso 2: a è minore di b*/
		else;
		if(a<b) {
		printf("il numero maggiore e' ");
		printf("%f",b);
		}
		/*caso 3: a e b sono uguali*/
		else;
		if(a==b) {
			printf("i due numeri sono uguali (");
			printf("%f",a);
			printf(")");
		}
	
		
	}	

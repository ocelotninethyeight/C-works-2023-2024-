#include<stdio.h>
#include<stdlib.h>
main() {
		/*dichiarazione variabili*/
	int a;
	int b;
	/*acquisizione dei valori casuali*/
	printf("premi un tasto qualsiasi per generare un numero casuale da 1 a 100");
	getchar();
	a=rand()%100+1;
	printf("il numero e' ");
	printf("%d",a);
	printf("\n premi un tasto qualsiasi per generare un secondo numero casuale da 1 a 100");
	getchar();
	b=rand()%100+1;
	printf("il numero e' ");
	printf("%d",b);
	getchar();
		/*Svolgimento, attraverso funzione IF del problema */
	if(a>b) {
		/*caso 1: a è maggiore di b*/
		printf("\n il numero maggiore e' ");
		printf("%d",a);
		}
		/*caso 2: a è minore di b*/
		else;
		if(a<b) {
		printf("\ il numero maggiore e' ");
		printf("%d",b);
		}
		/*caso 3: a e b sono uguali*/
		else;
		if(a==b) {
			printf("\n i due numeri sono uguali (");
			printf("%d",a);
			printf(")");
		}
	

	
}

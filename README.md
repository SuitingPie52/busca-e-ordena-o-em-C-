# busca-e-ordenacao-em-C

tambem acessar https://github.com/felipethecreator/C

//////////////////////////////////////////
/////  Programa de Ordenação Direta /////
////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int v[10000];
int i = 0, j = 0, temp;
time_t t;


int main () {
	
	srand((unsigned) time(&t));
	
	for (i = 0; i < 10000; i++) {
		
		v[i] = (rand() % 10000);
		
	}
	
	for (i = 0; i < 10000; i++) {
		
		printf("%d\n", v[i]);
		
	}        
	
	// Ordenacao propiamente dita
	
	for(i = 0; i < 9999; i++) { // do primeiro ao último
		
		for(j = i + 1; j < 10000; j++) { // do próximo ao último
		
			if (v[j] < v[i]) {
				
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
				
			}
		}                                                                              
	}
	
	for (i = 0; i < 10000; i++) {
		
		printf("%d\n", v[i]);
		
	}        
	
}
 —---------------------------------------------------------------------------------------------

///////////////////////////////////////
/////  Programa de Bubble Sort ///////
/////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int v[10000];
int i = 0, temp;
time_t t;
int troquei;

int main () {
	
	srand((unsigned) time(&t));
	
	for (i = 0; i < 10000; i++) {
		
		v[i] = (rand() % 10000);
		
	}
	
	for (i = 0; i < 10000; i++) {
		
		printf("%d\n", v[i]);
		
	}        
	
	troquei = 1;
	while (troquei) {
		
		troquei = 0;
		
		for (i = 0; i < 9999; i++) {
	
			if (v[i] > v[i + 1]) {
				
				temp = v[i];
				v[i] = v[i + 1];
				v[i + 1] = temp;
				troquei = 1;
				
			}
		}
	}

	
	for (i = 0; i < 10000; i++) {
		
		printf("%d\n", v[i]);
		
	}        
	
}

—----------------------------------------------------------------------------------------------

////////////////////////////////////////////
/////  Programa de Busca Exaustiva  ///////
//////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int v[10000];
int i = 0;
time_t t;
int achei, busca;

int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	srand((unsigned) time(&t));
	
	for (i = 0; i < 10000; i++) {
		
		v[i] = (rand() % 10000);
		
	}

	printf("Digite um número a ser buscado: ");
	scanf("%d", &busca);
	
	
	achei = -1;
	for (i = 0; i < 10000; i++) {
		
		if (v[i] == busca) {
			
			achei = i;
			
		}
	}


	if (achei == -1) {
		
		printf("Se fodeu! Não existe!");
		
	} else {
		
		printf("Achei na posição %d", achei);
		
	}
	
}

—----------------------------------------------------------------------------------------------

////////////////////////////////////////////
/////  Programa de Busca binária  /////////
//////////////////////////////////////////


// OBRIGATORIAMENTE ORDENADA 

#include <stdio.h>
#include <locale.h>

int v[10000];
int inicio = 0, fim = 0, meio = 0, i = 0;
int busca = 0;

int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	for (i = 0; i < 10000; i++) {
		
		v[i] = i;
		
	}


	printf("Digite um número a ser buscado: ");
	scanf("%d", &busca);
	
	
	inicio = 0;
	fim = 9999;

	
	while (fim >= inicio) {
		
		meio = (inicio + fim)/2;
		
		if (v[meio] == busca) {
		
			printf("Achei!!!");
			return 0;
		
		} else if  (v[meio] > busca) {
			
			fim = meio - 1;
			
		} else {
			
			inicio = meio + 1;
			
		}
		
	} 
	
	printf("Se fodeu! Não existe!");
	
}



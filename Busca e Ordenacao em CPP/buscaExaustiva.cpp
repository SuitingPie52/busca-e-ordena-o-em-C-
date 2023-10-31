//////////////////////////////////////////// 
///// Programa de Busca Exaustiva ///////// 
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

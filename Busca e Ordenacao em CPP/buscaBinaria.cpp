//////////////////////////////////////////// 
///// Programa de Busca binária /////////// 
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

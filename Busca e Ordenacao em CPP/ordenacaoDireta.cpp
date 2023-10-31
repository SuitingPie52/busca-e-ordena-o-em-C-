////////////////////////////////////////// 
///// Programa de Ordenação Direta ////// 
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

/////////////////////////////////////// 
///// Programa de Bubble Sort ////////
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



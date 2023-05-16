#include <stdio.h>
#include <stdlib.h>

int main(void){
	int v[10] = {0};
	int i = 0, max = -99999;
	
	for(i = 0; i < 10; i++){
		printf("Inserisci il numero: ");
		scanf("%d", &v[i]);
	}
	
	for(i = 0; i < 10; i++){
		if(v[i] > max){
			max = v[i];
		}
	}
	
	printf("\nIl massimo: %d", max);
}

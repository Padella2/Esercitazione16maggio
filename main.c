#include <stdio.h>
#include <stdlib.h>

int main(void){
	int v[10] = {0};
	int i = 0, max = -1;
	
	for(i = 0; i < 10; i++){
		do{
			printf("Inserisci il numero: ");
			scanf("%d", &v[i]);
			if(v[i] < 0){
				printf("Errore\n");
			}
		}while(v[i] < 0);
	}
	
	for(i = 0; i < 10; i++){
		if(v[i] > max){
			max = v[i];
		}
	}
	
	printf("\nIl massimo: %d", max);
}

#include <stdio.h>
#include <stdlib.h>

void *aloca_memoria(size_t bytes);

void *aloca_memoria(size_t bytes){
	void *p;
	p = malloc(bytes);
	if( p == NULL ){
		printf("[x] ERRO: memoria não foi alocada...\n");
		exit(EXIT_FAILURE);
	}
	return p;
}

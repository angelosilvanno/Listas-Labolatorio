#include <stdio.h>
#include <stdlib.h>
/*Questão 2) Escreva um programa que aloque dinamicamente uma matriz de inteiros. As dimensões
da matriz deverão ser lidas do usuário. Em seguida, escreva uma função que receba um valor e
retorne 1, caso o valor esteja na matriz, ou retorne 0, no caso contrário. */

int estaContido(int elemento, int **matriz, int numLin, int numCol) {
	int i, j;
	
	for(i=0; i<numLin; i++) {
		for(j=0; j<numCol; j++) 
			if (matriz[i][j] == elemento)
				return 1;
	}
	return 0;
}

int main() {
	int **matriz;
	int numLin, numCol;
	int i, j, opcao;
	
	printf("\nInforme o numero de linhas: ");
	scanf("%d", &numLin);
	printf("Informe o numero de colunas: ");
	scanf("%d", &numCol);
	
	matriz = (int **) malloc(numLin * sizeof(int *));
	if (matriz == NULL){
    printf("\nERRO AO ALOCAR MEMORIA!\n");
  }

	for(i=0; i<numLin; i++) {
		matriz[i] = (int *) malloc(numCol * sizeof(int));
    if (matriz[i] == NULL){
    printf("\nERRO AO ALOCAR MEMORIA!\n");
  }
    
		for(j=0; j<numCol; j++) {
			printf("[%d][%d]: ", (i+1), (j+1));
			scanf("%d", &matriz[i][j]);
		}
	}
  
	do {
		printf("Digite o elemento que deseja procurar na matriz: ");
		scanf("%d", &j);
		
		int res = estaContido(j, matriz, numLin, numCol);
    if(res == 1){
      	printf("\nO elemento %d existe na matriz.\n", j);
    }else{
      printf("\nO elemento %d nao existe na matriz.\n", j);
    }
		printf("\nDeseja procurar outro elemento?\n1- para sim\n0- para não\nOpcao: ");
		scanf("%d", &opcao);
		
		putchar('\n');
			
	} while (opcao != 0);
	
	printf("\nPrograma finalizado!\n");
	return 0;
}
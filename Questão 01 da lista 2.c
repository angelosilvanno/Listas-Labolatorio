#include <stdio.h>
#include <stdlib.h>
/*Questão 1) Faça um programa que acha o maior e o menor inteiro dentro de um vetor de
N inteiros, calcule a soma e imprime a soma. Fazer a alocação dinâmica do vetor e após
seu uso liberar a memória alocada.*/
int main(int argc, char** argv)
{
	int i, q_elemnetos; 
	int *p;
	int aux = 0;
	int maior, menor;
	printf("digite a quantidade de elemntos do vetor: ");
	scanf("%d", &q_elemnetos);
	p = (int *) malloc(q_elemnetos * sizeof(int)); // olacaçao de memoria pra o vetor que vou usar
	if(p == NULL)
	{
		printf("erro na alocacao\n");
		exit(1);
	}
	

	for(i = 0; i < q_elemnetos; i++)
	{
		printf("digite os valores [%d]: ", i);
		scanf("%d", &p[i]);
		if(p[i] > 0)
		{
		 aux = aux + p[i];	
		}
		
	}
	
	
		maior = p[0];
	for(i = 0; i < q_elemnetos ; i++)
	{
		if(p[i] > maior)
		{
			maior = p[i];
		}
	}
		menor = p[0];
	for(i = 0; i < q_elemnetos ; i++)
	{
		if(p[i] < menor)
		{
			menor = p[i];
		}
	}
	
	for(i = 0; i < q_elemnetos; i++)
	{
		printf("os valores do vetor: [%d] %d \n", i, p[i]);
	}
	printf("O maior numero do vetor e: %d \n", maior);
		printf("o menor numero do vetor e: %d \n", menor);
		printf("A soma dos numero do vetores e: %d \n", aux);
	free(p);
	return 0;
}

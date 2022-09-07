#include <stdio.h>
#include <stdlib.h>

/*Questão 2) Escreva um algoritmo que solicita ao usuário a quantidade de alunos de
uma turma e aloca um vetor de notas (números reais). Depois de ler as notas, imprime a
média aritmética. Obs: não deve ocorrer desperdício de memória; e após ser utilizada a
memória deve ser liberada. */
int main(int argc, char** argv)
{
	int i;
	int  q_elemnetos = 0; 
	float *p = 0;

	float media = 0.0;
	printf("digite a quantidade de alunos: " );
	scanf("%d", &q_elemnetos);
	p = (float *) malloc(q_elemnetos * sizeof(float)); // alocacao de memoria pra o vetor que vou usar
		
		for(i = 0; i < q_elemnetos; i++)
		{
			printf("digite as notas [%d]:", (i+1));
			scanf("%f", &p[i]);
			media = (media + p[i] / q_elemnetos);
		
		}
		
		printf("a media da turma e: %.2f", media);
		free(p);
	return 0;
}
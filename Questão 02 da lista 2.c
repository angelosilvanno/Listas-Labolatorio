#include <stdio.h>
#include <stdlib.h>

/*Quest�o 2) Escreva um algoritmo que solicita ao usu�rio a quantidade de alunos de
uma turma e aloca um vetor de notas (n�meros reais). Depois de ler as notas, imprime a
m�dia aritm�tica. Obs: n�o deve ocorrer desperd�cio de mem�ria; e ap�s ser utilizada a
mem�ria deve ser liberada. */
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
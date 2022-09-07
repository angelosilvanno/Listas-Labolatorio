#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* questão 04)Faça um programa que pergunte ao usuário quantos valores ele deseja
armazenar em um vetor de double, depois use a função MALLOC para reservar (alocar) o
espaço de memória de acordo com o especificado pelo usuário. Esse vetor deve ter um
tamanho maior ou igual a 10 elementos. Use este vetor dinâmico como um vetor comum,
atribuindo aos 10 primeiros elementos do vetor valores aleatórios (usando a função
rand() ) entre 0 e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos
do vetor. */
int main(int argc, char** argv)
{
	srand(time(NULL));
	int i;
	double  q_elemnetos;
	double *p;
	printf("digite a quantidade de elemntos do vetor: ");
	scanf("%lf", &q_elemnetos);
	p = (double *) malloc(q_elemnetos * sizeof(double)); // olacaçao de memoria pra o vetor que vou usar
	for(i = 0; i < q_elemnetos; i++)
	{
		printf("digite os valores [%d]: ", i);
		scanf("%lf", &p[i]);
	}

      printf("\n");
      printf("valores digitado manuamente \n");
	for(i = 0; i < q_elemnetos; i++)
	{
		printf("Os valores do vetores [%d]  %.2f \n", i , p[i]);
	}
	printf("\n");
      printf("valores gerados aletaoriamente \n");
	for(i = 0; i < q_elemnetos; i++)
	{
		printf("valores aleatrio do vetor [%d] %d\n", i,  rand() % 100);
	}
	free(p);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
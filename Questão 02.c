#include <stdio.h>
#include <stdlib.h>
#define MAX 2

/*
Questão 2) Escreva um programa em C que manipula dados de um conjunto de alunos da disciplina de Estrutura de
Dados e Programação da UFERSA Pau dos Ferros. Para representar um aluno são necessárias as seguintes
informações: matrícula (inteiro), nome (80 caracteres), turma (caractere), três notas (reais em um vetor) e uma
média (real). Seu programa deve levar em consideração que é ofertado um número máximo de vagas para a
disciplina. Sabendo dessas informações, faça o que se pede nos itens a seguir:
*/
struct aluno{
	char nome[80];  /* Estrutura */
	int matricula;
	char turma;     
	float p1;
	float p2; 
	float p3;
    
};
typedef struct aluno Aluno;


Aluno* alunos[MAX];  

void inicializa (int n, Aluno** turmas){
	int i;
	for (i=0; i<n; i++)                 
	alunos[i] = NULL;
}

void matricula (int n, Aluno** alunos, int i){

	if (i<0 || i>=n){
	printf("Indice fora do limite do vetor\n");
	exit(1);
	}

	if (alunos[i]==NULL)
		alunos[i] = (Aluno*)malloc(sizeof(Aluno));

	printf("Entre com o nome:");
	scanf("%c", alunos[i]->nome);   	
	printf("Entre com a matricula");
	scanf("%i", &alunos[i]->matricula);
	printf("Entre com a turma");
	scanf("%[^\n]", &alunos[i]->turma);
	printf("Entre com a primeira nota");
	scanf("%f", &alunos[i]->p1);
	printf("Entre com a segunda nota");
	scanf("%f", &alunos[i]->p2);
	printf("Entre com a terceira nota");
	scanf("%f", &alunos[i]->p3);

}


   void  imprime_turma (int n, Aluno** turmas, int i){

     if (i<0 || i>=n){
		 printf("Indice fora do limite do vetor\n");
		 //exit(1);
		 return;  
	}

    if (turmas[i]!=NULL){
		printf("\n\nMatricula: %d\n", turmas[i]->matricula);
		printf("\n\nNome: %s\n", turmas[i]->nome);
		printf("\n\nTurma: %i\n", turmas[i]->turma);
		printf("\n\n");
    }
}

void imprime_turma_aprovados(int n, Aluno** turmas){ 

	
	float media;       
	float p1,p2,p3;

    media = p1+p2+p3/3;
    
    scanf("%f",&p1);
    scanf("%f",&p2); 
    scanf("%f",&p3);
/*e) Implemente uma função que imprime os alunos aprovados de uma determinada turma. Para ser
aprovado, o aluno deve ter média maior que ou igual a 7,0. Protótipo: void imprime_turma_aprovados(int n,
Aluno**alunos, char turma);*/
    }
 
    		



int main(){
		matricula(10,alunos,0);
	matricula(10,alunos,1);
	matricula(10,alunos,1);
	imprime_turma_aprovados(10,alunos); 
	

	system("PAUSE");
	return 0;

}
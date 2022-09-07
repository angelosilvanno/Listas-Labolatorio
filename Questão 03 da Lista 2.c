#include <stdio.h>
#include <stdlib.h>
/*Questão 03 - Implemente uma função que preencha um vetor alocado dinamicamente de N
elementos com valores inteiros fornecidos pelo o usuário, de modo que, à medida que um
novo elemento é inserido, o vetor já permaneça organizado de maneira ordenada
crescente. Escreva um programa que utiliza esta função, que deve obedecer ao seguinte
protótipo: void preenche_ordenado(int n, int *v);*/
void preenche_ordenado(int n, int *v);

int main (void){
	int n;
 
    printf("Quantidade de numeros \n");
    scanf("%d", &n);
    
    int *vetor = (int*)malloc (n* sizeof (int));
    
    preenche_ordenado(n, &vetor);
    
     free(vetor);
     
    return 0;
}

void preenche_ordenado(int n, int *v){
	int i,j,aux;
	
	for( i = 0; i < n; i++) {
		
		printf("Digite o numero \n");
		scanf("%d", &v[i]);
		
	}
	
	for ( i = 0; i < n; i++){
		for ( j = i+1; j<n ;j++){
			
			if( v[i]> v[j]){
				aux = v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("numeros: %d\n", v[i]);
		
	}
}

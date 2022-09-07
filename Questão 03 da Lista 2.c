#include <stdio.h>
#include <stdlib.h>

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
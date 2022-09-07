#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
           Quest�o 3) Um quadrado m�gico � uma matriz com n�meros distintos na qual a soma dos
elementos de cada linha, coluna e diagonal � igual. Elabore um algoritmo que verifica se uma
matriz informada pelo usu�rio � um quadrado m�gico de tamanho 3x3 e cuja soma dos elementos
de cada linha, coluna e diagonal seja 15.

        -> Soma de todas as linhas, colunas, diagonal principal e secund�ria s�o iguais.
        Exemplo:
         2  7  6 = 15
         9  5  1 = 15 
         4  3  8 = 15    2+5+8=15
                         4+5+6=15
        
		 15 15 15       
*/

int main(){
    int tam = 3, l, c, soma, total, falha = 0;
    int mat[3][3] = {2,7,6,9,5,1,4,3,8};

    soma = 0;
    for(l = 0; l < tam; l++){ // soma da diagonal principal
        soma += mat[l][l];
    }
    printf("Diag. principal: %d\n", soma);
    total = soma; // salva a soma da diagonal principal na vari�vel total

    soma = 0;
    for(l = 0; l < tam; l++){ // soma da diagonal secund�ria
        soma += mat[l][tam - 1 - l];
    }
    printf("Diag. secundaria: %d\n", soma);

    if(total != soma)
        printf("Diagonal secundaria eh diferente!\n");

    for(l = 0; l < tam; l++){ // soma da linhas
        soma = 0;
        for(c = 0; c < tam; c++)
            soma += mat[l][c];
        printf("Linha %d: %d\n", l, soma);

        if(total != soma){
            printf("Linha %d eh diferente\n", l);
            falha++;
        }
    }

    for(c = 0; c < tam; c++){ // soma das colunas s�o iguais
        soma = 0;
        for(l = 0; l < tam; l++)
            soma += mat[l][c];
        printf("Coluna %d: %d\n", c, soma);

        if(total != soma){
            printf("Coluna %d eh diferente\n", c);
            falha++;
        }
    }

    if(falha == 0)
        printf("\nHe um quadrado magico!!!!\n");

    return 0;
}
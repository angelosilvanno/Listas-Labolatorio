#include <stdio.h>
#include <stdlib.h>
    /*Questão 1) Considere a manipulação de matrizes quadradas de inteiros e a representação de
matrizes em C por vetor simples e vetor de ponteiros. */
      void lerMatriz(int *mat, int m, int n)
     {
        // incremento do endereço contido na variável auxiliar
         int i, j, *pMat;
         pMat = mat;
         for (i = 0; i < m; i = i + 1)
            for (j = 0; j < n; j = j + 1) 
            scanf("%d", pMat++);
     }
   
      void somarMatrizes(int *a, int *b, int *c, int m, int n)
     {
         int i, j, *pA = a, *pB = b, *pC = c;
         for (i = 0; i < m; i = i + 1)
         for (j = 0; j < n; j = j + 1) *pC++ = *pA++ + *pB++;
     }
    
     void escreverMatriz(int *mat, int m, int n)
     {
         // base (mat) mais deslocamento (i * m + j)
         int i, j, *pMat;
         pMat = mat;
         for (i = 0; i < m; i = i + 1)
        {
            for (j = 0; j < n; j = j + 1) printf("%3d", *(pMat + i *n + j));
           printf("\n");
        }
     }
     
    
   
      void SubMatrizes(int *a, int *b, int *c, int m, int n)
     {
         int i, j, *pA = a, *pB = b, *pC = c;
         for (i = 0; i < m; i = i + 1)
         for (j = 0; j < n; j = j + 1) *pC++ = *pA++ - *pB++;
     }
    

   
      void MultiMatrizes(int *a, int *b, int *c, int m, int n)
     {
         int i, j, *pA = a, *pB = b, *pC = c;
         for (i = 0; i < m; i = i + 1)
         for (j = 0; j < n; j = j + 1) *pC++ = *pA++ * *pB++;
     }
    
 
  
      int main(void)
      {
         int m, n, *m1, *m2, *m3;
         scanf("%d", &m);
         scanf("%d", &n);
         m1 = malloc(sizeof(int) * m * n);
         m2 = malloc(sizeof(int) * m * n);
         m3 = malloc(sizeof(int) * m * n);
         lerMatriz(m1, m, n);
         escreverMatriz(m1, m, n);
         lerMatriz(m2, m, n);
         escreverMatriz(m2, m, n);
         printf("\n");
         somarMatrizes(m1, m2, m3, m, n);
         SubMatrizes(m1, m2, m3, m, n);
         MultiMatrizes(m1, m2, m3,m,n);
         escreverMatriz(m3, m, n);
        return 0;
      }

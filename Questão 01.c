#include <stdio.h>
#include <locale.h>

/*Quest�o 1) Crie um tipo estruturado para armazenar dados de um ingresso. Uma estrutura deste tipo possui os
seguintes campos: pre�o, local e atra��o. */
typedef struct Ingresso{
     char atracao[50];
     char local[50];
     float preco;
} Ingresso;

void preenche(Ingresso* i) 
{  
    printf("valor:");
	scanf("%f",&i->preco);
	printf("Atra��o:\n");
	scanf("%[^\n]",&i->atracao);
	printf("\nLocal:");
	scanf("%[^\n]",&i->local);
}


 void imprime(Ingresso* i) {
printf("O pre�o � %.2f reais \nNo local %s \nCom atra��o %s \n",
i->preco,i->local,i->atracao);
}

void altera_preco(Ingresso* i){
float valor;
printf("Altere o pre�o do ingresso \n");
scanf("%f", &valor);
i->preco = valor;
}
void imprime_menor_maior_preco(int n, Ingresso* vet){
int i;
int menor=0, maior=0;
for (i = 0; i < n; i++) {
if (vet[i].preco > vet[maior].preco) {
maior = i;
}
if (vet[i].preco < vet[menor].preco) {
menor = i;
}
}
printf("O ingresso com eventos mais caros � o com a atra��o %s", vet[maior].atracao);
printf(" e o ingresso com eventos mais barato � o com a atra��o %s", vet[menor].atracao);
}
int main(){
setlocale(LC_ALL, "portuguese");
int n;
int i;
printf("Quantos ingressos deseja comprar ? \n");
scanf("%d", &n);
Ingresso vet[n];
for (i = 0; i < n; i++) {
preenche(&vet[i]);
}
for (i = 0; i < n; i++) {
imprime(&vet[i]);
}
altera_preco(&vet[0]);
imprime_menor_maior_preco(n, vet);
return 0;
}
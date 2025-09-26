#include <stdio.h>

int main(void){

      //Crie um vetor vet de 5 posições
      int vet[5];

      //Leia 5 números e guarde-os em vet
      for (int i = 0; i < 5; i++){
            printf("Digite 5 números: ");
            scanf("%d",&vet[i]);
      }
      //Exiba todos os números de vet
      for (int i = 0; i < 5; i++){
            printf("%d ", vet[i]);
      }
      printf("\n");

      //Leia um outro número I
      int I;
      printf("Digite o índice que deseja remover o valor do vetor: ",I);
      scanf("%d",&I);

      //Remova o valor de vet no índice I, As posições vazias devem ser preenchidas com 0
      vet[I] = 0;

      for (int i = 0; i < 5; i++){
            printf("%d ",vet[i]);
      }
}

#include <stdio.h>

#define L 100
#define C 100

//Crie uma função preenche que receba um array bidimensional arr de inteiros com uma dimensão fixa (LxC), e preencha o array com l*c números lidos do teclado
void preenche (int arr[L][C], int l, int c){

      for (int i = 0; i < l; i++){
            for (int j = 0; j < c; j++){
                printf("Digite o valore da posição linha %d, coluna %d: ",i+1,j+1);
                scanf("%d",&arr[i][j]);
            }
      }
      printf("\n");
}

int main(){

      int vetor[L][C];
      int linhas; int colunas;
      printf("Quantas linhas tem o vetor? ");
      scanf("%d",&linhas);
      printf("Quantas colunas tem o vetor? ");
      scanf("%d",&colunas);
      preenche(vetor, linhas, colunas);

      for (int i = 0; i < linhas; i++){
            for (int j = 0; j < colunas; j++){
                printf("%d\n", vetor[i][j]);
            }
      }
      return 0;
}

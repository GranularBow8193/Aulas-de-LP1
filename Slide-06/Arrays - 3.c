#include <stdio.h>

#define L 100
#define C 100

//Crie uma função determinante que receba uma matriz quadrada e retorne o seu determinante
void preenche(int arr[L][C], int lc){

      for (int i = 0; i < lc; i++){
            for (int j = 0; j < lc; j++){
                printf("Digite o valore da posição linha %d, coluna %d: ",i+1,j+1);
                scanf("%d",&arr[i][j]);
            }
      }
}

float determinante (int arr[L][C], int lc){

      if (lc <= 0){printf("Essa matriz está vazia ou não existe, não há linhas ou colunas.\n"); return 0;}
      if (lc == 1){return arr[0][0];}
      if (lc == 2){return arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0];}
      if (lc == 3){
            //regra de sarrus
            //D = diagonal, P = Principal, S = Secundária
            int DP1 = arr[0][0]*arr[1][1]*arr[2][2];
            int DP2 = arr[0][1]*arr[1][2]*arr[2][0];
            int DP3 = arr[0][2]*arr[1][0]*arr[2][1];
            int DS1 = arr[0][2]*arr[1][1]*arr[2][0];
            int DS2 = arr[0][0]*arr[1][2]*arr[2][1];
            int DS3 = arr[0][1]*arr[1][0]*arr[2][2];

            float det = (DP1 + DP2 + DP3) - (DS1 + DS2 + DS3);
            return det;
      }
      if (lc >= 4){

            //fazer laplace
      }
}

int main(){

      int vetor[L][C];
      int linhasEColunas;
      printf("Linhas e colunas da matriz quadrada: ");
      scanf("%d", &linhasEColunas);
      preenche(vetor, linhasEColunas);
      float det = determinante(vetor, linhasEColunas);
      printf("O determinante da matriz é: %.2f",det);

      return 0;
}

#include <stdio.h>

#define L 3
#define C 3

//Crie uma função preenche que receba um array bidimensional arr de inteiros com uma dimensão fixa (LxC), e preencha o array com l*c números lidos do teclado
//array 3x3
void preenche (int arr[L][C], int l, int c){

    for (int i = 0; i < l; i++){
            for (int j = 0; j < c; j++){
                printf("Digite o valore da posição linha %d, coluna %d: ",i+1,j+1);
                scanf("%d",&arr[i][j]);
            }
    }
}

int main(){

    int vetor[L][C];
    preenche(vetor, 3, 3);

    for (int i = 0; i < L; i++){
            for (int j = 0; j < C; j++){
                printf("%d\n", vetor[i][j]);
            }
    }
    return 0;
}

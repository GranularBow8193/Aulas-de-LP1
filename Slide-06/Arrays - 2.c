#include <stdio.h>

#define L 100
#define C 100

//Crie uma função media que receba um array bidimensional arr, a quantidade de linhas l, a quantidade de colunas c, e retorne a média entre todos os valores do array. L e C devem ser quaisquer valores constantes predefinidos.
void preenche (int arr[L][C], int l, int c){

    for (int i = 0; i < l; i++){
            for (int j = 0; j < c; j++){
                printf("Digite o valore da posição linha %d, coluna %d: ",i+1,j+1);
                scanf("%d",&arr[i][j]);
            }
    }
}

float media (int arr[L][C], int l, int c){

    float soma = 0;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            soma += arr[i][j];
        }
    }
    int qtde_elementos = l*c;
    return soma/qtde_elementos;
}

int main(){

    int vetor[L][C];
    int linhas; int colunas;
    printf("Quantas linhas tem o vetor? ");
    scanf("%d",&linhas);
    printf("Quantas colunas tem o vetor? ");
    scanf("%d",&colunas);
    preenche(vetor, linhas, colunas);

    /*for (int i = 0; i < L; i++){
            for (int j = 0; j < C; j++){
                printf("%d\n", vetor[i][j]);
            }
    }*/

    printf("A média dos elementos do vetor é: %.2f\n",media(vetor,linhas,colunas));
    return 0;
}

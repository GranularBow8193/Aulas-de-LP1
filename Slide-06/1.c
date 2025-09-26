#include <stdio.h>

void preenche (int* xs, int n){

    for (int i = 0; i < n; i++){

        printf("Elemento %d: ",i + 1);
        scanf("%d", xs + i);
    }
}

float media(int *xs, int n){

    float soma = 0;
    for (int i = 0; i < n; i++){
        soma += *(xs + i);
    }
    return (soma / n);
}

int main(){

    int vec[100];
    int tamanho;
    printf("Qual o tanho do vetor (de 1 até 100)? ");
    scanf("%d",&tamanho);

    preenche(vec, tamanho);
    printf("\nA média dos itens do vetor é: %.2f \n\n", media(vec,tamanho));

    //printar o vetor para visualização (não solicitado)
    for (int i = 0; i < tamanho; i++){
        printf("%d ",*(vec+i));
    }
    printf("\n");
    return 0;
}

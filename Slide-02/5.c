#include <stdio.h>

void main(void){
    
    int valor = 10;
    int soma = 0;

    while (valor > 0){

        printf("Digite um número: \n");
        scanf("%d", &valor);
        soma += valor;

    }

    printf("A soma de todos os números é: %d\n", soma);
}
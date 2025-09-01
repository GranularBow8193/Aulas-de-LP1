#include <stdio.h>

void main(void){
    
    int soma;
    int n = 10;
    printf("Digite um número: ");
    scanf("%d", &n);

    while (n > 0){

        soma = (n*n + soma);
        n = (n - 1);
        
    }

    printf("O somatório de i=1 até o número que você colocou de i ao quadrado é: %d \n", soma);
}
#include <stdio.h>

void main(void){

    int valor; 
    
    printf("Qual o valor do celular em dólares? ");
    scanf("%d", &valor);

    if (valor*3.17<1000){
        printf("BOM NEGÓCIO");
    }

    if (valor*3.17>1000){
        printf("MAU NEGÓCIO");
    }

    if (valor*3.17==1000){
        printf("MAU NEGÓCIO");
    }
}
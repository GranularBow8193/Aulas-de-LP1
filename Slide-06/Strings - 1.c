#include <stdio.h>

int tamanho(char* str){

    int contador = 0;
    for (int i = 0; i < 100; i++){

        if (str[i] != '\0'){
            contador++;
        }
    }
    
    return contador;
}
/*
int main(){

    char string[100];
    printf("Digite uma frase: ");
    scanf("%s",string);
    printf("%d\n",tamanho(string));

    return 0;
}
*/

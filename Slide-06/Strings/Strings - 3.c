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

int palavras (char* str){

    int qtde = 0;
    for (int i = 0; i < tamanho(str); i++){
        if (str[i] == ' '){
            qtde++;
        }
    }
    return qtde + 1;
}

int main(){

    char frase[100];
    printf("Digite uma frase: ");
    scanf("%99[^\n]",frase); //ler todos os caracteres

    printf("%d\n",palavras(frase));

    return 0;
}

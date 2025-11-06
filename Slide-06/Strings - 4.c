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

int substring (char* s1, char* s2){

    int qtde = 0;
    if (tamanho(s1) < tamanho(s2)){return 1;} //se a s2 é maior que a s1, ela não faz parte dela

    for (int i = 0; i < tamanho(s1); i++){

        if (s1[i] == s2[i]){
            qtde++;
        }
        if (s1[i] != s2[i]){
            if (qtde == tamanho(s2)){
                return 0;
            }
            else {qtde = 0;}   
        }

    }

    return 0;
}

int main(){

    char frase1[100];
    char frase2[100];
    printf("Digite a frase 1: ");
    scanf("%s",frase1);

    printf("Digite a frase 2: ");

    scanf("%s",frase2);

    if (substring(frase1, frase2) == 0){
        printf("A frase 2 faz parte da frase 1\n");
    }
    if (substring(frase1, frase2) == 1){
        printf("A frase 2 NAO faz parte da frase 1\n");
    }

    return 0;
}

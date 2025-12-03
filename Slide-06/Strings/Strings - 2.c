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

//Implemente a função concatena
void concatena (char* d, char* o1, char* o2){

    int i = 0; int j = 0;
    
    while (o1[i] != '\0'){
        d[i] = o1[i];
        i++;
    }

    while (o2[j] != '\0'){
        d[i] = o2[j];
        j++;
        i++;
    }

    printf("%s",d);
}

int main() {

    char destino[150]; char origem1[100]; char origem2[100];

    //Recebe uma string de destino
    printf("Digite a string de destino: ");
    scanf("%s",destino);
    
    //Recebe duas strings de origem
    printf("\nString 1 de origem: ");
    scanf("%s", origem1);
    
    printf("String 2 de origem: ");
    scanf("%s", origem2);

    //A implementação deve usar a função tamanho
    printf("\nString destino: %s \nTamanho: %d\n",destino,tamanho(destino));
    printf("\nString concatenada: ");
    //Junta em destino as duas strings de origem (sobrescrevendo o conteúdo de destino, se houver)
    concatena(destino, origem1, origem2);
    printf("\nTamanho: %d \n",tamanho(destino));
}

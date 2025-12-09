#include <stdio.h>
#include <string.h>

int main(){

    char str[26];
    FILE* f;

    printf("String com 25 caracteres no máximo: ");
    scanf("%s",str);

    f = fopen("arquivo.txt","wb");
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++){
        fputc(str[i],f);
    }
    fclose(f);

    printf("String escrita no arquivo com sucesso.");

    return 0;
}

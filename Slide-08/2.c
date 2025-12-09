#include <stdio.h>
#include <string.h>

int main(){

    char str[26];
    FILE *f;

    printf("String com 25 caracteres no máximo: ");
    scanf("%s",str);

    f = fopen("arquivo.txt","wb");
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++){
        fputc(str[i],f);
    }   

    printf("String escrita no arquivo com sucesso.\n");

    fclose(f);

    // ex2

    f = fopen("arquivo.txt", "rb" );

    char str2[26];
    for (int i = 0; i < 25; i++){

        int c = fgetc(f);
        if (c == EOF){
            break;
        }
        str2[i] = (char)c;
        str2[i+1] = EOF;

    }

    fclose(f);
    printf("string lida: %s", str2);
    return 0;
}

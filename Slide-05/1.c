#include <stdio.h>

int main(void){

    //Leia dois inteiros a e b
    int a;
    printf("Digite um valor inteiro: ");
    scanf("%d",&a);
    int b;
    printf("Digite outro valor inteiro: ");
    scanf("%d",&b);

    //Exiba os valores de a e b
    printf("'a' vale: %d\n",a);
    printf("'b' vale: %d\n",b);

    //Crie um ponteiro p para a variável de maior valor
    if (a>b){
        int* p = &a;
        //Através de p subtraia 50 da variável com o maior valor
        *p = (*p - 50);
        //Exiba os valores de a e b novamente
        printf("Após subtrair 50 do maior valor (nesse caso, 'a'), ele vale: %d\n",*p);
        printf("E o menor ('b') vale %d\n",b);
    }
    else if(b>a){
        int* p = &b;
        //Através de p subtraia 50 da variável com o maior valor²
        *p = (*p - 50);
        //Exiba os valores de a e b novamente²
        printf("Após subtrair 50 do maior valor (nesse caso, 'b'), ele vale: %d\n",*p);
        printf("E o menor ('a') vale %d\n",a);
    }
       
    return 0;
}

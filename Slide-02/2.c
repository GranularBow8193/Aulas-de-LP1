#include <stdio.h>

void main(void){
    
    int x;
    printf("Escolha um número: ");
    scanf("%d", &x);
    int y;
    printf("Escolha outro númmero:");
    scanf("%d", &y);

    if (x>y){
        printf("O maior número é %d\n",x);
    }
    if (x<y){
        printf("O maior número é %d\n",y);
    }
    if (x==y){
        printf("Os números são iguais\n");
    }
}

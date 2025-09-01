#include <stdio.h>

int main(void){

    int n1 = 0;
    printf("Digite um número: ");
    scanf("%d",&n1);

    int n2 = 0;
    printf("Digite outro número maior que o anterior: ");
    scanf("%d",&n2);

    int n3 = n1 + 1;

    while (n3 < n2){

        printf("%d\n", n3);
        n3++;

    }

    return 0;
}
#include <stdio.h>

int troca(int* p1, int* p2){

    int aux;
    
    aux = *p1;
    *p1 = *p2;
    aux = *p2;

    return 0;
}

int main(void){

    int x = 10;
    int y = 20;

    printf("Valores antes da troca: x = %d, y = %d\n",x,y);

    troca(&x,&y);

    printf("\nDepois da troca: x = %d, y = %d\n",x,y);

    return 0;
}

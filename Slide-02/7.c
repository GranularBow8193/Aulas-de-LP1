#include <stdio.h>
#include <string.h>

int main(void){ /*poderia ter usado um for para simplificar o código, mas preferi fazer os exercícios do
    primeiro slide somente com if/else e while, por isso ele está tão grande*/

    //time 1

    char time1[255];
    printf("Digite o nome do primeiro time: ");
    scanf("%s",&time1);

    int vit1, der1, emp1;

    printf("Quantas vitórias ele teve no campeonato? ");
    scanf("%d",&vit1);

    printf("Quantas derrotas ele teve no campeonato? ");
    scanf("%d",&der1);

    printf("Quantos empates ele teve no campeonato? ");
    scanf("%d",&emp1);

    int pts1 = (vit1 * 3 + emp1);

    //time 2
    
    char time2[255];
    printf("\nDigite o nome do segundo time: ");
    scanf("%s",&time2);

    int vit2, der2, emp2;

    printf("Quantas vitórias ele teve no campeonato? ");
    scanf("%d",&vit2);

    printf("Quantas derrotas ele teve no campeonato? ");
    scanf("%d",&der2);

    printf("Quantos empates ele teve no campeonato? ");
    scanf("%d",&emp2);

    int pts2 = (vit2 * 3 + emp2);

    //time 3

    char time3[255];
    printf("\nDigite o nome do terceiro time: ");
    scanf("%s",&time3);

    int vit3, der3, emp3;

    printf("Quantas vitórias ele teve no campeonato? ");
    scanf("%d",&vit3);

    printf("Quantas derrotas ele teve no campeonato? ");
    scanf("%d",&der3);

    printf("Quantos empates ele teve no campeonato? ");
    scanf("%d",&emp3);

    int pts3 = (vit3 * 3 + emp3);

    //print

    printf("\nResultado final:\n\n");
    printf("%s\n",time1);
    printf("%d Prontos\n\n",pts1);
    
    printf("%s\n",time2);
    printf("%d Pontos\n\n",pts2);

    printf("%s\n",time3);
    printf("%d Pontos\n\n",pts3);

    char menorpts[255];

    if (pts1 <= pts2 && pts1 <= pts3){
        strcpy(menorpts, time1); //usei strcopy pq não achei outra solução
    } 
    else if (pts2 <= pts1 && pts2 <= pts3){
        strcpy(menorpts, time2);
    }
    else{
        strcpy(menorpts, time3);
    }

    char maiorpts[255];

    if (pts1 >= pts2 && pts1 >= pts3){
        strcpy(maiorpts, time1);
    } 
    else if (pts2 >= pts1 && pts2 >= pts3){
        strcpy(maiorpts, time2);
    }
    else{
        strcpy(maiorpts, time3);
    }

    printf("O time com maior quantidade de pontos até agora é: %s",maiorpts);
    printf("O time com menor quantidade de pontos até agora é: %s",menorpts);

    return 0;
}
#include <stdio.h>

//Crie uma struct qualquer
struct tempo{

      unsigned int max;
      unsigned int min;
      unsigned int chance_de_chuva;
      unsigned int umidade;
      unsigned int UV;

};

//Crie uma função preenche que receba um ponteiro para uma variável da struct criada e leia os campos para a variável passada. 
void preenche(struct tempo *A){

      printf("Qual a temperatura máxima de hoje? ");
      scanf("%d",&A->max);

      printf("Qual a temperatura mínima de hoje? ");
      scanf("%d",&A->min);

      printf("Qual a chance de chuva de hoje? (entre 0 e 100) ");
      scanf("%d",&A->chance_de_chuva);

      printf("Qual a umidade de hoje? (entre 0 e 100) ");
      scanf("%d",&A->umidade);

      printf("Qual o índice UV de hoje? (entre 0 e 10) ");
      scanf("%d",&A->UV);

}
int main(){

      struct tempo d1;
      preenche(&d1);

      printf("\nTemperatura máxima: %dºC\n",d1.max);
      printf("Temperatura mínima: %dºC\n",d1.min);
      printf("Chance de chuva: %d%%\n",d1.chance_de_chuva);
      printf("Umidade: %d%%\n",d1.umidade);
      printf("índice UV: %d\n",d1.UV);
      
      return 0;
}

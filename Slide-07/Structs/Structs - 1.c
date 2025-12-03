#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

int main(){

      struct Personagem p1 = {0};
      //Use as duas formas de inicializar structs:
      //acessando cada campo individualmente pelo nome
      p1.forca = 10;
      p1.energia = 50;
      p1.experiencia = 30;

      printf("Força: %d\n",p1.forca);
      printf("Energia: %d\n",p1.energia);
      printf("Experiência: %d\n",p1.experiencia);

      //usando as chaves onde cada campo é separado por vírgula
      struct Personagem p2 = {10, 50, 30};
      
      printf("\nForça: %d\n",p1.forca);
      printf("Energia: %d\n",p1.energia);
      printf("Experiência: %d\n",p1.experiencia);
      
      return 0;
}

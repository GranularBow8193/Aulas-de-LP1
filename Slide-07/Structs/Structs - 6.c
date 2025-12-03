#include <stdio.h>

//Declare uma struct para representar as características/propriedades de um atleta do seu esporte favorito
struct atleta{

      char nome[10];
      unsigned int altura; //em centímetros
      unsigned int ataque;
      unsigned int saque;
      unsigned int bloqueio;
      unsigned int passe;
      unsigned int levantamento;

};

//Crie uma função que exiba as propriedades de maneira bem organizada e formatada.
void propriedades(struct atleta A){

      printf("Nome: %s\nAltura: %d\nAtaque: %d\nSaque: %d\nBloqueio: %d\nPasse: %d\nLevantamento: %d\n\n", A.nome, A.altura, A.ataque, A.saque, A.bloqueio, A.passe, A.levantamento);

}

//Crie três exemplos de atletas variando as propriedades e teste a função de exibição
int main(){

      struct atleta Darlan = {"Darlan", 193, 96, 97, 89, 86, 79};
      struct atleta Bergmann = {"Bergmann", 204, 94, 90, 88, 86, 81};
      struct atleta Honorato = {"Honorato", 190, 93, 88, 90, 94, 90};

      propriedades(Darlan);
      propriedades(Bergmann);
      propriedades(Honorato);
      
      return 0;
}

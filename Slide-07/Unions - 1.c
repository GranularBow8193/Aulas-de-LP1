#include <stdio.h>
#include <string.h>

//Crie uma union para representar um cidadão que pode ser identificado por CPF, RG ou nome completo.

union identidade{

      int cpf;
      int rg;
      char nome[255];
};

int main(){

      union identidade pessoa1;

      printf("cpf: ");
      scanf("%d", &pessoa1.cpf);

      printf("rg: ");
      scanf("%d", &pessoa1.rg);

      printf("nome: ");
      scanf("%s",strcpy(pessoa1.nome, "Miguel"));

      //Como nome ocupa mais espaço, rg e cpf nunca serão representados
      printf("\n%d %d %s\n", pessoa1.cpf, pessoa1.rg, pessoa1.nome);

      return 0;
}

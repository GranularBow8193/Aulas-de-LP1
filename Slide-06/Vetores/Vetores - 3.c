#include <stdio.h>

//Crie uma função medias que recebe um vetor com notas mensais e o modifica com as médias bimestrais
void medias(int vs[12]){

      for (int i = 0; i < 6; i++){
            vs[i] = (vs[i*2] + vs[(i*2)+1])/2;
      }
}

int main(){

      int notas[12];

      //Digitar os elementos de vetor
      for (int i = 0; i < 12; i++){
            printf("Digite o %d de 12 elemento do vetor: ",i+1);
            scanf("%d",&notas[i]);
      }

      //Printar o vetor
      printf("O vetor original é: ");
      for (int i = 0; i < 12; i++){
            printf("%d ",notas[i]);
      }
      
      //Usar a função

      medias(notas);

      //Printar o resultado
      printf("\nA média bimestral: ");
      for (int i = 0; i < 6; i++){
            printf("%d " ,notas[i]);
      }
      
      return 0;
}

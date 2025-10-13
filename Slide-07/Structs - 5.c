#include <stdio.h>

//Crie uma struct para representar um ponto
struct ponto{

      int x;
      int y;
      int z;

};

int main(){

      //Declare três variáveis para v1, v2 e v3 do tipo criado para representar os pontos (1,0,5), (3,3,3) e (0,10,0)
      struct ponto v1 = {1,0,5};
      struct ponto v2 = {3,3,3};
      struct ponto v3 = {0,10,0};

      //Exiba a coordenada y dos três pontos
      printf("A cordenada y do ponto v1: %d\n",v1.y);
      printf("A cordenada y do ponto v2: %d\n",v2.y);
      printf("A cordenada y do ponto v3: %d\n\n",v3.y);

      //Some 10 unidades na coordenada z dos três pontos
      v1.z += 10;
      v2.z += 10;
      v3.z += 10;

      printf("A cordenada z do ponto v1: %d\n",v1.z);
      printf("A cordenada z do ponto v2: %d\n",v2.z);
      printf("A cordenada z do ponto v3: %d\n",v3.z);

      //Exiba as três coordenadas de v2
      printf("Ponto v2: (%d,%d,%d)\n",v2.x,v2.y,v2.z);

      return 0;
}

#include <stdio.h>
#include <math.h>

int eh_primo(int num){

      if (num <= 1){
            return 0;
      }

      for (int i = 2; i <= sqrt(num); i++){

            if (num % i == 0){
                  return 0;
            }            
      }
      return 1;
}

int main(void){

      int num;

      printf("Digite um número para descobrir se é primo: ");
      scanf("%d", &num);

      if(eh_primo(num) == 0){
            printf("O número não é primo");
      }
      else{
            printf("O número é primo");
      }

      return 0;
}

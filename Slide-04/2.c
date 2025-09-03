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

int todos_os_primos(int max){

      for (int i = 1; i <= max; i++){
            if(eh_primo(i) == 1){
                  printf("%d\n", i);      
            }
      }
}

int main(void){

      int max = 0;
      printf("Escolha um número para descobrir todos os primos até ele: ");
      scanf("%d", &max);
      todos_os_primos(max);

      return 0;
}

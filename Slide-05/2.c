#include <stdio.h>

void compra (int* conta, int valor){
      //A função recebe um ponteiro para uma conta e um valor a ser debitado
      *conta = *conta - valor;
}

int main(void){

      int minha_conta1, minha_conta2;

      //Ler o saldo das duas contas
      printf("Digite o saldo da conta1: ");
      scanf("%d",&minha_conta1);

      printf("Digite o saldo da conta2: ");
      scanf("%d", &minha_conta2);

      //usar a conta com maior saldo para fazer uma compra de 500 reais
      if (minha_conta1>minha_conta2){
            compra(&minha_conta1, 500);
      }
      else{
            compra(&minha_conta2, 500);
      }

      //Ao final, o programa deve exibir os saldos das duas contas
      printf("O saldo da conta 1: %d\n",minha_conta1);
      printf("E o da segunda conta: %d\n",minha_conta2);

      return 0;
}
#include <stdio.h>

void compra (int* conta, int valor){

      *conta = *conta - valor;
}

int main(void){

      //Lista de compras
      int minha_conta1, minha_conta2;
      int compras[] = { 100, 50, 80, 30, 20 };

      //Ler o saldo das duas contas
      printf("Digite o saldo da conta1: ");
      scanf("%d",&minha_conta1);

      printf("Digite o saldo da conta2: ");
      scanf("%d", &minha_conta2);

      //usar a conta com maior saldo para fazer as compras da lista
      for (int i = 0; i < 5; i++){
        if (minha_conta1>minha_conta2){
            compra(&minha_conta1, compras[i]);
            //Exibir o saldo da conta após cada compra
            printf("\nSaldo da conta 1 depois da compra %d: %d",i+1, minha_conta1);
        }
        else { 
            compra(&minha_conta2, compras[i]);
            printf("\nSaldo da conta 2 depois da compra %d: %d",i+1, minha_conta2);
        }
      }

      //Ao final, o programa deve exibir os saldos das duas contas
      printf("\n\nO saldo da conta 1: %d",minha_conta1);
      printf("\nE o da segunda conta: %d\n",minha_conta2);

      return 0;
}

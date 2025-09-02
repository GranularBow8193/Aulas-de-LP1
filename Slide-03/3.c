#include <stdio.h>

void main(void){


	short int temps[50];
	short int media = 0;
	short int soma = 0;

	for (int i = 0; i < 50; i++){
	
	printf("Digite as temperaturas: ");
	scanf("%hd", &temps[i]);
	media += temps[i];
	}
	
	for (int i = 0; i < 50; i++){

		if (media/50 < temps[i]){
			soma += 1;
		}
	}
	
	printf("A média é: %d\n",media/50);
	printf("Há %d elementos acima da média\n",soma);

	

}

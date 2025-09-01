#include <stdio.h>
void main (void) {
    printf("Soma = %d\n", 100-"10");
}

/*- O esperado é que o programa não consiga realizar essa operação por estar usando um int com um char,
o que é inválido, já que somente é possível operar com o mesmo tipo de dado (int, float e afins).

- Os tipos são: 100 é um inteiro e o "10" é um char

1.c: In function 'main':
1.c:3:30: error: invalid operands to binary - (have 'int' and 'char *')
    3 |     printf("Soma = %d\n", 100-"10");
      |                              ^
      |                              |
      |                              char *
      
      
- A mensagem diz que na função main, é uma operação é binária (necessita de dois operandos) e eles são
incompatíveis (no caso é um int com um char)

*/
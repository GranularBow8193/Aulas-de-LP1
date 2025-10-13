## Explique com suas próprias palavras as diferentes abordagens dos exercícios 2 e 3

O exercício 2 cria uma função que cria um personagem `p` e o retorna, então na `main()` você deve definir o nome do personagem e definir ela a função `preencheA()`.

Já no exercício 3, como a função recebe um ponteiro, ela não retorna nada e atribui os valores para o local de memória onde está localizado o personagem criado na `main()`.

## Qual abordagem você prefere usar e porquê?

Eu preferiro a do exercício 2, porque ela é mais intuitiva para o programador que simplesmente retorna o persoangem `p` (não precisando lidar com ponteiros) e para os leitores do código, que compreendem melhor o que está acontecendo.

## Na sua opinião quais são as diferenças de uso de memória e velocidade nas duas abordagens?

Acredito que o exercício 3 seja mais rápido e mais eficiente por não haver a necessidade da função alocar espaço na memória para receber e retornar algum valor por causa dos ponteiros, permitindo que seja feita as alterações desejadas diretamente no local do aquivo criado na `main()`.

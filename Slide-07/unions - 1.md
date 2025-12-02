# Qual é a diferença entre struct e union?

Struct é uma forma de armazenar vários dados em um só lugar, por exemplo, se quisermos armazenar o nome, altura e idade de várias pessoas, podemos criar uma estrutura para isso:
```
struct pessoa {
  char[50] nome;
  short unsigned int idade;
  short unsigned int altura; // Em centímetros
};
```
Porém, quando temos informações conflitantes entre si, o sistema irá reservar uma memória para aquela variável desnecessáriamente, por exemplo:

```
struct produto {
  char[50] nome;
  float preco;
  unsigned int peso;   // Em kilogramas
  unsigned int volume; // Em litro
};
```
Neste caso se o produto for um líquido, a variável `peso` não será usada, apenas o `volume`, desperdiçando espaço na memória.

São nessas situações que podemos usar a union, uma estrutura que reserva espaço na memória do tamanho da maior variável e usa apenas um dos valores disponíveis, sem desperdícios. Utilizando o exemplo anterior, temos:

```
struct produto {
  char[50] nome;
  float preco;
  union tipo {
    unsigned int peso;   // Em kilogramas
    unsigned int volume; // Em litro
  };
};
```

Assim, será reservado espaço para `nome` **e** `preco` (por estarem na struct), e outro para `peso` **ou** `volume` (por estarem na union).

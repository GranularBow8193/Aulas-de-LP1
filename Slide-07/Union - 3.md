# O que é união discriminada e por que ela é necessária?

Ela é uma união que armazena valores de diferentes tipos no mesmo espaço de memória, contendo um **identificador**. Ele diz qual o tipo de dado está sendo armazenado e adiciona uma camada a mais de segurança para o programador, mostrando quem da união deve ser usado naquele momento.

Isso se torna necessário a partir do momento que ela previne um comportamento indesejado ~~(Undefined Behavior)~~ ao ler um dado com um tipo errado acidentalmente, sendo o identificador o agente da prevenção.

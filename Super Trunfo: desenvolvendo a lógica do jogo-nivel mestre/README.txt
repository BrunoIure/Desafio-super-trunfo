Super Trunfo em C - Comparação de Cartas de Cidades

Este projeto é um mini-game em C no estilo Super Trunfo, onde o usuário cadastra duas cartas representando cidades.
Cada carta possui atributos (população, área, PIB, pontos turísticos, etc.) e o jogador escolhe dois atributos de cada carta para compará-las.
A carta com a maior soma dos atributos escolhidos vence.

Pré-requisitos:

Para rodar o programa, você precisa: 

Um compilador C (ex.: GCC)
Editor de código (VS Code)
Extensão C/C++ instalada (VS Code)

Estrutura do Código:

O programa está dividido em etapas:

Entrada de Dados

O usuário preenche os atributos da Carta 1 e da Carta 2: Estado, População, Área, etc...

Cálculos Automáticos

O programa calcula automaticamente:

Densidade populacional = população / área
PIB per capita = PIB / população
Super Poder = soma de atributos numéricos + vantagem para menor densidade populacional

Escolha de Atributos:

Para cada carta, o usuário escolhe dois atributos entre:

População
Área
PIB
Pontos turísticos
PIB per capita
Super Poder

O programa valida as escolhas (não pode repetir atributo e só aceita números válidos).

Comparação Final

O programa soma os dois atributos escolhidos de cada carta e exibe qual venceu, ou se houve empate.

Como Compilar:

Abra o terminal na pasta onde está o arquivo e digite:

No Windows:
gcc -Wall -Wextra -g3 super_trunfo.c -o super_trunfo.exe

No Linux/mac:
gcc -Wall -Wextra -g3 super_trunfo.c -o super_trunfo


Isso gera um executável.

Como Executar
No Windows:
./super_trunfo.exe

No Linux/mac:
./super_trunfo

Exemplo de Uso:

Entrada do Usuário
Vamos fornecer os dados da carta 1
Insira o nome do estado (utilize '-' no lugar de espacos): Sao-Paulo
Insira o tamanho da populacao da cidade: 12000000
Insira a area da cidade: 1521.0
Insira o PIB da cidade: 6990000
Insira o numero de pontos turisticos da cidade: 15

Vamos fornecer os dados da carta 2
Insira o nome do estado (utilize '-' no lugar de espacos): Rio-de-Janeiro
Insira o tamanho da populacao da cidade: 6700000
Insira a area da cidade: 1200.0
Insira o PIB da cidade: 4200000
Insira o numero de pontos turisticos da cidade: 20

=================================================================
#CARTA 1
#ATRIBUTO 1
Os atributos serao somados, E a carta com a maior soma vence!
Populacao - (1)
Area - (2)
PIB - (3)
Pontos Turisticos - (4)
PIB per capita - (5)
Super poder - (6)
Digite o numero do primeiro atributo escolhido: 3

Saída do Programa
=================================================================
## Vamos aos RESULTADOS!
Estado da Carta 1: Sao-Paulo
Estado da Carta 2: Rio-de-Janeiro
Atributo 1 da Carta 1 e: PIB
Atributo 2 da Carta 1 e: Populacao
Atributo 1 da Carta 2 e: Super poder
Atributo 2 da Carta 2 e: PIB per capita
Valor do atributo 1 da Carta 1 e: 6990000
Valor do atributo 2 da Carta 1 e: 12000000
Valor do atributo 1 da Carta 2 e: 4200000
Valor do atributo 2 da Carta 2 e: 627
A soma dos atributos da Carta 1 e: 18990000
A soma dos atributos da Carta 2 e: 4200627

=================================================================
Carta 1 Venceu!
=================================================================

Observações:
Use hífen (-) no lugar de espaços nos nomes das cidades e estados (ex.: Rio-de-Janeiro).
Evite inserir área ou população igual a zero, para não causar erros de divisão por zero.
Digite apenas valores numéricos válidos para população, PIB, área e pontos turísticos.

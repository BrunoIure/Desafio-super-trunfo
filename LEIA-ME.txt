Este é o meu primeiro trabalho da faculdade, um mini-game de cartas desenvolvido em C.

O programa permite cadastrar duas cartas de cidades, recebendo dados do usuário (estado, código da carta, cidade, população, área, PIB, pontos turísticos, etc.). A partir dessas informações, o programa calcula atributos adicionais e exibe todas as informações formatadas no terminal. Ao final, as cartas têm seus atributos comparados para determinar qual carta possui os valores superiores.

Pré-requisitos

Para rodar o programa, você precisa de:
Um compilador C (ex.: GCC)
VS Code ou outro editor de sua preferência
Extensão C/C++ instalada no VS Code

Estrutura do Código:

O código está dividido em três partes principais:

1. Entrada de Dados
O usuário fornece informações para Carta 1 e Carta 2:
Nome do Estado
Código da carta (uma letra + dois números)
Nome da cidade
População
Área
PIB
Número de pontos turísticos

2. Cálculos Automáticos

O programa calcula automaticamente:
Densidade populacional = população / área
PIB per capita = PIB / população
Super Poder = soma de todos os atributos numéricos + vantagem para menor densidade populacional

3. Comparações

O programa exibe uma comparação automática de todos os atributos entre as duas cartas.
Essa comparação funciona como se fosse uma batalha entre as duas cartas, A carta que tiver mais atributos vencedores ganha.


Como Compilar:
Abra o terminal na pasta onde está o arquivo super_trunfo.c e use os comandos:

No Windows (PowerShell ou CMD):gcc -Wall -Wextra -g3 super_trunfo.c -o super_trunfo.exe
No Linux/macOS:gcc -Wall -Wextra -g3 super_trunfo.c -o super_trunfo

Isso gera um executável (super_trunfo.exe no Windows ou super_trunfo no Linux/macOS) na mesma pasta.

Como Executar:
No Windows:./super_trunfo.exe
No Linux/macOS:./super_trunfo

Observações:
Ao digitar nomes de cidades e estados, utilize hífen no lugar de espaços (ex.: Rio-de-Janeiro).
População e área não podem ser zero (evita divisão por zero).
Insira apenas números válidos nos atributos numéricos (população, PIB, pontos turísticos).

Super trunfo: lógica do jogo-nivel aventureiro

Este programa em C simula um jogo de cartas onde cada carta representa uma cidade.
Cada cidade possui atributos como população, área, PIB, pontos turísticos, etc...

O usuário insere os dados de duas cartas (cidades) e pode escolher um atributo para comparar. O programa informa qual carta venceu nesse atributo.

Funcionalidades:

Cadastro de duas cartas (Carta 1 e Carta 2) com os seguintes atributos:
Nome do Estado
Código da carta
Nome da cidade
População
Área
PIB
Pontos turísticos
Cálculo automático de:
Densidade populacional
PIB per capita
Super Poder (combinação de todos os atributos numéricos, dando vantagem a cidades com menor densidade populacional)
Menu interativo para o usuário escolher qual atributo deseja comparar
Comparação e exibição do vencedor ou empate para cada atributo escolhido

Como usar:

Compile o código:
gcc cartas.c -o cartas

Execute o programa:
./cartas   # Linux / macOS
cartas.exe # Windows

Siga as instruções para inserir os dados da Carta 1 e Carta 2.
Escolha um atributo no menu digitando o número correspondente.
O programa exibirá qual carta venceu na comparação escolhida.

Menu de Atributos:
Número	Atributo	Observação
1	População da cidade	Maior valor vence
2	Área	Maior valor vence
3	PIB	Maior valor vence
4	Pontos turísticos	Maior valor vence
5	Densidade populacional	Menor valor vence
6	PIB per capita	Maior valor vence
7	Super Poder	Maior valor vence (combinação de todos atributos)

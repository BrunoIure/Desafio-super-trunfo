Desafio Super Trunfo - Jogo de Cartas - Comparação de Atributos - Nivel Mestre

Este programa em C simula um jogo de cartas inspirado em jogos de comparação de atributos.
O usuário cria duas cartas com informações de cidades (população, área, PIB, etc.), escolhe dois atributos para cada carta, e o programa soma esses atributos para decidir quem vence.

Como compilar e executar:

Salve o código em um arquivo.
Compile usando o GCC: gcc cartas.c -o cartas
Execute o programa.

Como funciona:

O programa pede ao usuário para preencher os atributos da Carta 1:

Nome do estado, População da cidade, PIB, etc...
Em seguida, ele calcula automaticamente: Densidade populacional, PIB per capita, etc...

O mesmo processo é repetido para a Carta 2.

O usuário escolhe 2 atributos diferentes para cada carta.
Os atributos disponíveis são:

1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - PIB per capita
6 - Super Poder

O programa soma os dois atributos escolhidos de cada carta e mostra qual venceu, ou se deu empate.

Exemplo de uso
Entrada:
Vamos fornecer os dados da carta 1

Insira o nome do estado (utilize '-' no lugar de espacos):Rio-de-Janeiro
Insira o tamanho da populacao da cidade:6000000
Insira a area da cidade:1200
Insira o PIB da cidade:5000000
Insira o numero de pontos turisticos da cidade:50

Vamos fornecer os dados da carta 2

Insira o nome do estado (utilize '-' no lugar de espacos):Sao-Paulo
Insira o tamanho da populacao da cidade:12000000
Insira a area da cidade:1500
Insira o PIB da cidade:10000000
Insira o numero de pontos turisticos da cidade:80

Escolha de atributos:
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
Digite o numero do primeiro atributo escolhido:3

=================================================================
#CARTA 1
#ATRIBUTO 2
### Lembre se de nao repetir o atributo anterior!
Populacao - (1)
Area - (2)
PIB - (3)
Pontos Turisticos - (4)
PIB per capita - (5)
Super poder - (6)
Digite o numero do segundo atributo escolhido:6

(Mesmo processo acontece para a carta 2).

Saída:
=================================================================
## Vamos aos RESULTADOS!
Estado da Carta 1:Rio-de-Janeiro
Estado da Carta 2:Sao-Paulo
Atributo 1 da Carta 1 e:PIB
Atributo 2 da Carta 1 e:Super poder
Atributo 1 da Carta 2 e:Populacao
Atributo 2 da Carta 2 e:Pontos turisticos
Valor do atributo 1 da Carta 1 e:5000000
Valor do atributo 2 da Carta 1 e:5000502
Valor do atributo 1 da Carta 2 e:12000000
Valor do atributo 2 da Carta 2 e:80
A soma dos atributos da Carta 1 e:10000502
A soma dos atributos da Carta 2 e:12000080

=================================================================
Carta 2 Venceu!
=================================================================

Cada carta recebe atributos manuais.
O jogador escolhe 2 atributos diferentes para cada carta.
O programa soma os atributos e declara a carta vencedora.
Em caso de valores iguais, o resultado será empate.

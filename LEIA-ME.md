Este é o meu primeiro trabalho da faculdade, É um mini-game de cartas feito em C

O programa em C permite cadastrar duas cartas de cidades recebendo dados do usuário (estado, código, cidade, população, etc...), a partir destas informações inseridas pelo usuario, O programa calcula tambem o resultado de alguns outros atributos e exibe todas as informações formatadas no terminal, Ao final as cartas tambem tem seus atributos comparados para saber qual carta tem atributos  maiores.
  
Pré-requisitos para rodar o programa: GCC ou outro compilador C, VS Code, Extensão C/C++ no VS Code.

### Estrutura do Código:

O código está dividido em três partes principais

### Entrada de Dados:
- O usuário fornece informações para Carta 1 e Carta 2:
- Nome do Estado
- Código da carta (uma letra + dois números)
- Nome da cidade
- População
- Área
- PIB
- Número de pontos turísticos


### Cálculos Automáticos:
- O programa calcula automaticamente:
- Densidade populacional = população / área
- PIB per capita = PIB / população
- Super Poder = soma de todos os atributos + vantagem para menor densidade populacional


### Comparações e Menu Interativo:
- O programa exibe uma comparação automática de todos os atributos.
- Permite que o usuário escolha um atributo específico via menu interativo para comparar as duas cartas.


### Como Compilar:
Tenha um compilador C instalado (GCC) e abra o terminal na pasta onde está o arquivo "super_trunfo.c".

No Windows(PowerShell ou CMD):gcc -Wall -Wextra -g3 super_trunfo.c -o super_trunfo.exe

No Linux/Mac:gcc -Wall -Wextra -g3 super_trunfo.c -o super_trunfo

Isso gera um executável (super_trunfo.exe ou super_trunfo) na mesma pasta.


### Como Executar:
No Windows:./super_trunfo.exe

No Linux/Mac:./super_trunfo


### Menu Interativo:
Após a exibição automática, você pode escolher um atributo digitando um numero de 1 a 7 para comparar:

Número/	Atributo/	Observação:
1/	População da cidade/	Maior valor vence
2/ Área/	Maior valor vence
3/	PIB/	Maior valor vence
4/	Pontos Turísticos/	Maior valor vence
5/	Densidade Populacional/	Menor valor vence
6/	PIB per capita/	Maior valor vence
7/	Super Poder/	Maior valor vence (soma de todos os atributos + bônus para menor densidade)


Exemplo de uso:

### Menu Interativo 
Escolha um atributo para comparar!
Populacao - (1)
Area - (2)
PIB - (3)
Pontos Turisticos - (4)
Densidade Populacional (Vence quem tem a menor) - (5)
PIB per capita - (6)
Super poder - (7)
Digite o numero do atributo escolhido: 5

### Resultados 
Nome do Estado Carta 1: Sao-Paulo
Nome do Estado Carta 2: Rio-de-Janeiro
Atributo usado na comparacao: Densidade populacional
Valor do atributo na carta 1: 8000.00
Valor do atributo na carta 2: 5000.00
Carta 2 venceu no atributo Densidade populacional!



### Observações:
Ao digitar nomes de cidades e estados, use hífen no lugar de espaços (ex: Rio-de-Janeiro).
População e área não podem ser zero (evita divisão por zero).
Para segurança, insira apenas números válidos nos atributos numéricos (população, PIB, pontos turísticos).
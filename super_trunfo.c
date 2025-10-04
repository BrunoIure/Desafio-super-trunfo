#include <stdio.h>

int main(){

/*Estas variaveis abaixo irão receber os valores inseridos pelo usuario para a carta 1 (nomeDaVariavelC1).
  (C1)=Carta 1.
  Após todas serem preenchidas, elas irão ser exibidas no terminal, em formato de atributos para cada carta, junto com a carta 2.*/

  char nomeDoEstadoC1[25];
  char codigoDaCartaC1[5];
  char nomeDaCidadeC1[50];
  unsigned long int populacaoDaCidadeC1;
  float areaDaCidadeC1;
  float pibDaCidadeC1;
  int pontosTuristicosC1;
  
//Aqui começa a parte de receber os valores e armazenar nas variaveis corretas.

  printf("Vamos fornecer os dados da carta 1\n"); //Deixa claro qual das duas cartas será preenchida no momento.
  printf(" \n"); //Cria um espaço, apenas por questão de organização.

  printf("Insira o nome do estado (utilize '-' no lugar de espacos):"); //Diz qual informação deve ser inserida a seguir.
  scanf("%s",nomeDoEstadoC1); //Recebe e armazena a informação na variavel correspondente.

//Este processo é repetido para preencher todas as variaveis.

  printf("Insira o codigo da carta (uma letra e dois numeros):");
  scanf("%s",codigoDaCartaC1);

  printf("Insira o nome da cidade (utilize '-' no lugar de espacos):");
  scanf("%s",nomeDaCidadeC1);

  printf("Insira o tamanho da populacao da cidade:");
  scanf("%lu",&populacaoDaCidadeC1);

  printf("Insira a area da cidade:");
  scanf("%f",&areaDaCidadeC1);

  printf("Insira o PIB da cidade:");
  scanf("%f",&pibDaCidadeC1);

  printf("Insira o numero de pontos turisticos da cidade:");
  scanf("%d",&pontosTuristicosC1);
  printf(" \n");

//fim do preenchimento dos atributos da carta 1.


//pega informações inseridas pelo usuario para calcular densidade populacional e pib per capita, serão exibidos para o usuario no final junto das outras informações da carta
float densidadePopulacionalC1=populacaoDaCidadeC1/areaDaCidadeC1;
float pibPerCapitaC1=pibDaCidadeC1/populacaoDaCidadeC1;


//Aqui começa a ser preenchida a carta 2.

/*Estas variaveis abaixo irão receber os valores inseridos pelo usuario para a carta 2 (nomeDaVariavelC2).
  (C2)=Carta 2.
  Após todas serem preenchidas, elas irão ser exibidas no terminal, em formato de atributos para cada carta, junto com a carta 1.*/

  char nomeDoEstadoC2[25];
  char codigoDaCartaC2[5];
  char nomeDaCidadeC2[50];
  unsigned long int populacaoDaCidadeC2;
  float areaDaCidadeC2;
  float pibDaCidadeC2;
  int pontosTuristicosC2;

  printf("Vamos fornecer os dados da carta 2\n"); //Deixa claro qual das duas cartas será preenchida no momento.
  printf(" \n"); //Cria um espaço, apenas por questão de organização.

  printf("Insira o nome do estado (utilize '-' no lugar de espacos):"); //Diz qual informação deve ser inserida a seguir.
  scanf("%s",nomeDoEstadoC2); //Recebe e armazena a informação na variavel correspondente.

//Este processo é repetido para preencher todas as variaveis.

  printf("Insira o codigo da carta (uma letra e dois numeros):");
  scanf("%s",codigoDaCartaC2);

  printf("Insira o nome da cidade (utilize '-' no lugar de espacos):");
  scanf("%s",nomeDaCidadeC2);

  printf("Insira o tamanho da populacao da cidade:");
  scanf("%lu",&populacaoDaCidadeC2);

  printf("Insira a area da cidade:");
  scanf("%f",&areaDaCidadeC2);

  printf("Insira o PIB da cidade:");
  scanf("%f",&pibDaCidadeC2);

  printf("Insira o numero de pontos turisticos da cidade:");
  scanf("%d",&pontosTuristicosC2);
  printf(" \n");

//fim do preenchimento dos atributos da carta 2.


//pega informações inseridas pelo usuario para calcular densidade populacional e pib per capita, serão exibidos para o usuario no final junto das outras informações da carta
float densidadePopulacionalC2=populacaoDaCidadeC2/areaDaCidadeC2;
float pibPerCapitaC2=pibDaCidadeC2/populacaoDaCidadeC2;


//Esta parte seguinte é responsavel por exibir as cartas preenchidas para o usuario no terminal, As duas cartas vão aparecer juntas.

//Carta 1.
//Cada 'printf()' abaixo mostra um atributo da carta 1.

  printf("Carta 1\n");
  printf("Estado:%s\n",nomeDoEstadoC1);
  printf("Codigo:%s\n",codigoDaCartaC1);
  printf("Nome da Cidade:%s\n",nomeDaCidadeC1);
  printf("Populacao:%lu habitantes\n",populacaoDaCidadeC1);
  printf("Area:%.2f km's quadrados\n",areaDaCidadeC1);
  printf("PIB:R$%.2f\n",pibDaCidadeC1);
  printf("Numero de Pontos Turisticos:%d\n",pontosTuristicosC1);
  printf("Densidade populacional:%.2f hab/km's quadrados\n",densidadePopulacionalC1);
  printf("PIB per Capita:R$%.2f\n",pibPerCapitaC1);

  printf("\n"); //cria um espaço para vizualizar melhor as duas cartas.

//Carta 2.
//Cada 'printf()' abaixo mostra um atributo da carta 2.

  printf("Carta 2\n");
  printf("Estado:%s\n",nomeDoEstadoC2);
  printf("Codigo:%s\n",codigoDaCartaC2);
  printf("Nome da Cidade:%s\n",nomeDaCidadeC2);
  printf("Populacao:%lu habitantes\n",populacaoDaCidadeC2);
  printf("Area:%.2f km's quadrados\n",areaDaCidadeC2);
  printf("PIB:R$%.2f\n",pibDaCidadeC2);
  printf("Numero de Pontos Turisticos:%d\n",pontosTuristicosC2);
  printf("Densidade populacional:%.2f hab/km's quadrados\n",densidadePopulacionalC2);
  printf("PIB per Capita:R$%.2f\n",pibPerCapitaC2);

  printf("\n");

  //Esta parte mostra a comparação entre as duas cartas, A carta que tiver o atributo maior das duas vence, menos para o atributo "densidade populacional", quem tiver esse atributo menor vence.

  //A decisão é tomada com base no valor booleano retornado da comparação dos atributos, se a comparação retornar "1" quer dizer que a carta 1 venceu naquele atributo, se retornar "0", quer dizer que a carta 2 venceu naquele atributo, a carta que tiver mais atributos vencedores vence a partida!

  //Aqui é calculado um Atributo extra chamado Super Poder!, Ele é a soma de todos os atributos numericos de uma carta, junto com a soma do inverso da densidade populacional (1/densidadePopulacional), ou seja, cartas com menor densidade populacional obtem mais vantagem nesse atributo.

  float superPoderC1=((float)populacaoDaCidadeC1+areaDaCidadeC1+pibDaCidadeC1+pontosTuristicosC1+pibPerCapitaC1)+(1/densidadePopulacionalC1);

  float superPoderC2=((float)populacaoDaCidadeC2+areaDaCidadeC2+pibDaCidadeC2+pontosTuristicosC2+pibPerCapitaC2)+(1/densidadePopulacionalC2);

  //Aqui começa a exibição dos resultados

  printf("Comparando Atributos das Cartas:\n");
  printf("\n");
  printf("Se o resultado for 1: Carta 1 venceu no atributo.\nSe o resultado for 0: Carta 2 venceu no atributo.\n");
  printf("\n");
  printf("Batalha de Atributos:\n");
  printf("Populacao: %d\n",populacaoDaCidadeC1>populacaoDaCidadeC2);
  printf("Area: %d\n",areaDaCidadeC1>areaDaCidadeC2);
  printf("PIB: %d\n",pibDaCidadeC1>pibDaCidadeC2);
  printf("Pontos Turisticos: %d\n",pontosTuristicosC1>pontosTuristicosC2);
  printf("Densidade Populacional (Vence quem tem a menor): %d\n",densidadePopulacionalC1<densidadePopulacionalC2);
  printf("PIB per capita: %d\n",pibPerCapitaC1>pibPerCapitaC2);
  printf("Super Poder: %d\n",superPoderC1>superPoderC2);
  printf("\n");

  //Aqui começa a comparação entre as duas cartas usando estruturas condicionais, Para todos os atributos, exceto Densidade Populacional, a carta com o maior valor vence, Para Densidade Populacional, a carta com o menor valor vence.

  printf("Comparacao de cartas (Atributo: Populacao):\n");
  printf("\n");
  printf("Carta 1-Populacao:%lu\n",populacaoDaCidadeC1);
  printf("Carta 2-Populacao:%lu\n",populacaoDaCidadeC2);

  if(populacaoDaCidadeC1>populacaoDaCidadeC2){
    printf("Resultado: Carta 1 venceu nesse atributo!\n");
  }
  else{
    printf("Resultado: Carta 2 venceu nesse atributo!\n");
  }
  
  return 0;
}



#include <stdio.h>

int main(){

/*Estas variaveis abaixo irão receber os valores inseridos pelo usuario para a carta 1 (nomeDaVariavelC1).
  (C1)=Carta 1.
  Após todas serem preenchidas, elas irão ser exibidas no terminal, em formato de atributos para cada carta, junto com a carta 2.*/

  char nomeDoEstadoC1[25];
  char codigoDaCartaC1[5];
  char nomeDaCidadeC1[50];
  int populacaoDaCidadeC1;
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
  scanf("%d",&populacaoDaCidadeC1);

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
  int populacaoDaCidadeC2;
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
  scanf("%d",&populacaoDaCidadeC2);

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
  printf("Populacao:%d\n",populacaoDaCidadeC1);
  printf("Area:%.2f",areaDaCidadeC1);
  printf(" km's quadrados\n");
  printf("PIB:%.2f",pibDaCidadeC1);
  printf(" bilhao(es) de reais\n");
  printf("Numero de Pontos Turisticos:%d\n",pontosTuristicosC1);
  printf("Densidade populacional:%.2f",densidadePopulacionalC1);
  printf(" hab/km's quadrados\n");
  printf("PIB per Capita:%.2f",pibPerCapitaC1);
  printf(" reais\n");

  printf("\n"); //cria um espaço para vizualizar melhor as duas cartas.

//Carta 2.
//Cada 'printf()' abaixo mostra um atributo da carta 2.

  printf("Carta 2\n");
  printf("Estado:%s\n",nomeDoEstadoC2);
  printf("Codigo:%s\n",codigoDaCartaC2);
  printf("Nome da Cidade:%s\n",nomeDaCidadeC2);
  printf("Populacao:%d\n",populacaoDaCidadeC2);
  printf("Area:%.2f",areaDaCidadeC2);
  printf(" km's quadrados\n");
  printf("PIB:%.2f",pibDaCidadeC2);
  printf(" bilhao(es) de reais\n");
  printf("Numero de Pontos Turisticos:%d\n",pontosTuristicosC2);
  printf("Densidade populacional:%.2f",densidadePopulacionalC2);
  printf(" hab/km's quadrados\n");
  printf("PIB per Capita:%.2f",pibPerCapitaC2);
  printf(" reais\n");

  return 0;
}


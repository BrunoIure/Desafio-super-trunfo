#include <stdio.h>

int main(){

//Estas variaveis abaixo irão receber os valores inseridos pelo usuario para a carta 1.
//(C1)=Carta 1.

char nomeDoEstadoC1[25];
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

//pega informações inseridas pelo usuario para calcular densidade populacional e pib per capita, serão exibidos para o usuario no final junto das outras informações da carta
float densidadePopulacionalC1=populacaoDaCidadeC1/areaDaCidadeC1;
float pibPerCapitaC1=pibDaCidadeC1/populacaoDaCidadeC1;

//Aqui começa a ser preenchida a carta 2.

//Estas variaveis abaixo irão receber os valores inseridos pelo usuario para a carta 2 (nomeDaVariavelC2).
//(C2)=Carta 2.

char nomeDoEstadoC2[25];
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

//Aqui é calculado um Atributo extra chamado Super Poder!, Ele é a soma de todos os atributos numericos de uma carta, junto com a soma do inverso da densidade populacional (1/densidadePopulacional), ou seja, cartas com menor densidade populacional obtem mais vantagem nesse atributo.

float superPoderC1=((float)populacaoDaCidadeC1+areaDaCidadeC1+pibDaCidadeC1+pontosTuristicosC1+pibPerCapitaC1)+(1/densidadePopulacionalC1);

float superPoderC2=((float)populacaoDaCidadeC2+areaDaCidadeC2+pibDaCidadeC2+pontosTuristicosC2+pibPerCapitaC2)+(1/densidadePopulacionalC2);

//Aqui é implantado um menu interativo, Para o usuario escolher um atributo, E esse atributo será comparado com o mesmo atributo da outra carta, Ao final o usuario saberá qual carta venceu.

int variavelDeControle; //inicia uma variavel que irá servir de controle para o switch

//menu que apresenta os atributos disponiveis para o usuario escolher
printf("\n");
printf("### Menu Interativo ###\n");
printf("Escolha um atributo para comparar!\n");
printf("Populacao - (1)\n");
printf("Area - (2)\n");
printf("PIB - (3)\n");
printf("Pontos Turisticos - (4)\n");
printf("Densidade Populacional (Vence quem tem a menor) - (5)\n");
printf("PIB per capita - (6)\n");
printf("Super poder - (7)\n");
printf("Digite o numero do atributo escolhido:");
scanf("%d",&variavelDeControle);
printf("\n");

//aqui começa a exibição do resultado da comparação escolhida pelo usuario usando switch case
printf("### Resultados ###\n");

//aqui a variavel de controle é usada para mostrar um resultado diferente para cada escolha do usuario
switch (variavelDeControle){
  case 1:
    printf("Nome do Estado Carta 1:%s\n",nomeDoEstadoC1); //Nome do estado
    printf("Nome do Estado Carta 2:%s\n",nomeDoEstadoC2);
    printf("Atributo usado na comparacao: Populacao da cidade\n"); //mostra atributo que foi escolhido
    printf("Valor do atributo na carta 1:%lu\n",populacaoDaCidadeC1); //valor do atributo na carta
    printf("Valor do atributo na carta 2:%lu\n",populacaoDaCidadeC2);

    if(populacaoDaCidadeC1>populacaoDaCidadeC2){  //compara e mostra qual carta venceu
      printf("Carta 1 venceu no atributo populacao!");
    }
    else if(populacaoDaCidadeC1<populacaoDaCidadeC2){
      printf("Carta 2 venceu no atributo populacao!");
    }
    else{
      printf("Empate nesse atributo!"); //se os valores forem iguais, retorna empate
    }
    break;
  
  case 2:
    printf("Nome do Estado Carta 1:%s\n",nomeDoEstadoC1);
    printf("Nome do Estado Carta 2:%s\n",nomeDoEstadoC2);
    printf("Atributo usado na comparacao: Area\n");
    printf("Valor do atributo na carta 1:%.2f\n",areaDaCidadeC1);
    printf("Valor do atributo na carta 2:%.2f\n",areaDaCidadeC2);

    if(areaDaCidadeC1>areaDaCidadeC2){
      printf("Carta 1 venceu no atributo Area!");
    }
    else if(areaDaCidadeC1<areaDaCidadeC2){
      printf("Carta 2 venceu no atributo Area!");
    }
    else{
      printf("Empate nesse atributo!");
    }
    break;
    
  case 3:
    printf("Nome do Estado Carta 1:%s\n",nomeDoEstadoC1);
    printf("Nome do Estado Carta 2:%s\n",nomeDoEstadoC2);
    printf("Atributo usado na comparacao: PIB\n");
    printf("Valor do atributo na carta 1:%.2f\n",pibDaCidadeC1);
    printf("Valor do atributo na carta 2:%.2f\n",pibDaCidadeC2);

    if(pibDaCidadeC1>pibDaCidadeC2){
      printf("Carta 1 venceu no atributo PIB!");
    }
    else if(pibDaCidadeC1<pibDaCidadeC2){
      printf("Carta 2 venceu no atributo PIB!");
    }
    else{
      printf("Empate nesse atributo!");
    }
    break;

  case 4:
    printf("Nome do Estado Carta 1:%s\n",nomeDoEstadoC1);
    printf("Nome do Estado Carta 2:%s\n",nomeDoEstadoC2);
    printf("Atributo usado na comparacao: Pontos Turisticos\n");
    printf("Valor do atributo na carta 1:%d\n",pontosTuristicosC1);
    printf("Valor do atributo na carta 2:%d\n",pontosTuristicosC2);

    if(pontosTuristicosC1>pontosTuristicosC2){
      printf("Carta 1 venceu no atributo Pontos Turisticos!");
    }
    else if(pontosTuristicosC1<pontosTuristicosC2){
      printf("Carta 2 venceu no atributo Pontos Turisticos!");
    }
    else{
      printf("Empate nesse atributo!");
    }
    break;

  case 5:
    printf("Nome do Estado Carta 1:%s\n",nomeDoEstadoC1);
    printf("Nome do Estado Carta 2:%s\n",nomeDoEstadoC2);
    printf("Atributo usado na comparacao: Densidade populacional\n");
    printf("Valor do atributo na carta 1:%.2f\n",densidadePopulacionalC1);
    printf("Valor do atributo na carta 2:%.2f\n",densidadePopulacionalC2);

    if(densidadePopulacionalC1<densidadePopulacionalC2){
      printf("Carta 1 venceu no atributo Densidade Populacional!");
    }
    else if(densidadePopulacionalC1>densidadePopulacionalC2){
      printf("Carta 2 venceu no atributo Densidade Populacional!");
    }
    else{
      printf("Empate nesse atributo!");
    }
    break;

  case 6:
    printf("Nome do Estado Carta 1:%s\n",nomeDoEstadoC1);
    printf("Nome do Estado Carta 2:%s\n",nomeDoEstadoC2);
    printf("Atributo usado na comparacao: PIB per capita\n");
    printf("Valor do atributo na carta 1:%.2f\n",pibPerCapitaC1);
    printf("Valor do atributo na carta 2:%.2f\n",pibPerCapitaC2);

    if(pibPerCapitaC1>pibPerCapitaC2){
      printf("Carta 1 venceu no atributo PIB per capita!");
    }
    else if(pibPerCapitaC1<pibPerCapitaC2){
      printf("Carta 2 venceu no atributo PIB per capita!");
    }
    else{
      printf("Empate nesse atributo!");
    }
    break;

  case 7:
    printf("Nome do Estado Carta 1:%s\n",nomeDoEstadoC1);
    printf("Nome do Estado Carta 2:%s\n",nomeDoEstadoC2);
    printf("Atributo usado na comparacao: Super poder\n");
    printf("Valor do atributo na carta 1:%.2f\n",superPoderC1);
    printf("Valor do atributo na carta 2:%.2f\n",superPoderC2);

    if(superPoderC1>superPoderC2){
      printf("Carta 1 venceu no atributo Super poder!");
    }
    else if(superPoderC1<superPoderC2){
      printf("Carta 2 venceu no atributo Super poder!");
    }
    else{
      printf("Empate nesse atributo!");
    }
    break;

  //caso o usuario escolha um numero que não esta disponivel no menu
  default:
    printf("Comando Invalido! Tente Novamente!");
    break;
};


return 0;

}
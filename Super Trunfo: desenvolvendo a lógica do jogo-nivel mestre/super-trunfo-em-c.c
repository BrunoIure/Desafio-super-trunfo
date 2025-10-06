#include <stdio.h>
#include <string.h>

int main(){

/*Estas variaveis abaixo irão receber os valores inseridos pelo usuario para a carta 1.
(C1)=Carta 1.
Após todas serem preenchidas, elas irão ser exibidas no terminal, em formato de atributos para cada carta, junto com a carta 2.*/

char nomeDoEstadoC1[25];
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
unsigned long int populacaoDaCidadeC2;
float areaDaCidadeC2;
float pibDaCidadeC2;
int pontosTuristicosC2;

printf("Vamos fornecer os dados da carta 2\n"); //Deixa claro qual das duas cartas será preenchida no momento.
printf(" \n"); //Cria um espaço, apenas por questão de organização.

printf("Insira o nome do estado (utilize '-' no lugar de espacos):"); //Diz qual informação deve ser inserida a seguir.
scanf("%s",nomeDoEstadoC2); //Recebe e armazena a informação na variavel correspondente.

//Este processo é repetido para preencher todas as variaveis.

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


//Nessas variaveis serão armazenados os valores dos atributos escolhidos pelo usuario,  Elas tambem irão servir como variaveis de controle para a criação de um sistema de tratamento de erros com switch
int atributo1Carta1; 
int atributo2Carta1;
int atributo1Carta2;
int atributo2Carta2;

//Nessas variaveis serão armazenados os nomes dos atributos escolhidos pelo usuario
char nomeAtributo1Carta1[35];
char nomeAtributo2Carta1[35];
char nomeAtributo1Carta2[35];
char nomeAtributo2Carta2[35]; 

while(1){

  //começa escolhendo os atributos da carta 1
  //primeiro atributo carta 1
  printf("\n");
  printf("=================================================================\n");
  printf("#CARTA 1\n");
  printf("#ATRIBUTO 1\n");
  printf("Os atributos serao somados, E a carta com a maior soma vence!\n");
  printf("Populacao - (1)\n");
  printf("Area - (2)\n");
  printf("PIB - (3)\n");
  printf("Pontos Turisticos - (4)\n");
  printf("PIB per capita - (5)\n");
  printf("Super poder - (6)\n");
  printf("Digite o numero do primeiro atributo escolhido:");
  scanf("%d",&atributo1Carta1);

  //verifica se foi digitado um comando válido
  if(atributo1Carta1<1 || atributo1Carta1>6){

    printf("\n");
    printf("### Comando invalido!, Escolha um atributo entre 1 e 6! ###\n");
    printf("\n");
    continue;
  };
  
  //segundo atributo carta 1
  printf("\n");
  printf("=================================================================\n");
  printf("#CARTA 1\n");
  printf("#ATRIBUTO 2\n");
  printf("### Lembre se de nao repetir o atributo anterior!\n");
  printf("Populacao - (1)\n");
  printf("Area - (2)\n");
  printf("PIB - (3)\n");
  printf("Pontos Turisticos - (4)\n");
  printf("PIB per capita - (5)\n");
  printf("Super poder - (6)\n");
  printf("Digite o numero do segundo atributo escolhido:");
  scanf("%d",&atributo2Carta1);
  
  //verifica se foi digitado um comando válido
  if(atributo2Carta1<1 || atributo2Carta1>6){

    printf("\n");
    printf("### Comando invalido!, Escolha um atributo entre 1 e 6! ###\n");
    printf("\n");
    continue;
  }
  
  //verifica se foi digitado um comando repetido
  if(atributo2Carta1==atributo1Carta1){

    printf("\n");
    printf("### Comando invalido!, Os atributos escolhidos devem ser DIFERENTES! ###\n");
    printf("\n");
    continue;
  }

  //finaliza o loop
  if(atributo1Carta1 && atributo2Carta1){
    break;
  }

}

//Com os atributos escolhidos pelo usuario de forma correta, é hora de preencher as variaveis com o valor real de cada atributo.
//A variavel de controle recebe o valor do atributo de acordo com seu numero (ex: se para o atributo 1, o usuario escolheu o numero 3, a variavel que guarda o atributo 1 irá receber o valor do PIB da cidade).
//A variavel de nome de atributo é preenchida com o nome do atributo escolhido.
//Atributo 1
switch(atributo1Carta1)
{
case 1:
  atributo1Carta1=(int)populacaoDaCidadeC1;
  strcpy(nomeAtributo1Carta1,"Populacao");
  break;

case 2:
  atributo1Carta1=(int)areaDaCidadeC1;
  strcpy(nomeAtributo1Carta1,"Area");
  break;

case 3:
  atributo1Carta1=(int)pibDaCidadeC1;
  strcpy(nomeAtributo1Carta1,"PIB");
  break;

case 4:
  atributo1Carta1=pontosTuristicosC1;
  strcpy(nomeAtributo1Carta1,"Pontos turisticos");
  break;
  
case 5:
  atributo1Carta1=(int)pibPerCapitaC1;
  strcpy(nomeAtributo1Carta1,"PIB per capita");
  break;

case 6:
  atributo1Carta1=(int)superPoderC1;
  strcpy(nomeAtributo1Carta1,"Super poder");
  break;  
};


//Repete o processo para o atributo 2
//Atributo 2
switch(atributo2Carta1)
{
case 1:
  atributo2Carta1=(int)populacaoDaCidadeC1;
  strcpy(nomeAtributo2Carta1,"Populacao");
  break;

case 2:
  atributo2Carta1=(int)areaDaCidadeC1;
  strcpy(nomeAtributo2Carta1,"Area");
  break;

case 3:
  atributo2Carta1=(int)pibDaCidadeC1;
  strcpy(nomeAtributo2Carta1,"PIB");
  break;

case 4:
  atributo2Carta1=pontosTuristicosC1;
  strcpy(nomeAtributo2Carta1,"Pontos turisticos");
  break;
  
case 5:
  atributo2Carta1=(int)pibPerCapitaC1;
  strcpy(nomeAtributo2Carta1,"PIB per capita");
  break;

case 6:
  atributo2Carta1=(int)superPoderC1;
  strcpy(nomeAtributo2Carta1,"Super poder");
  break;  
};


//aqui o processo de escolha de atributos é repetido para a carta 2
while(1){

  //primeiro atributo carta 2
  printf("\n");
  printf("=================================================================\n");
  printf("#CARTA 2\n");
  printf("#ATRIBUTO 1\n");
  printf("Os atributos serao somados, E a carta com a maior soma vence!\n");
  printf("Populacao - (1)\n");
  printf("Area - (2)\n");
  printf("PIB - (3)\n");
  printf("Pontos Turisticos - (4)\n");
  printf("PIB per capita - (5)\n");
  printf("Super poder - (6)\n");
  printf("Digite o numero do primeiro atributo escolhido:");
  scanf("%d",&atributo1Carta2);

  //verifica se foi digitado um comando válido
  if(atributo1Carta2<1 || atributo1Carta2>6){

    printf("\n");
    printf("### Comando invalido!, Escolha um atributo entre 1 e 6! ###\n");
    printf("\n");
    continue;
  };

  //segundo atributo carta 2
  printf("\n");
  printf("=================================================================\n");
  printf("#CARTA 2\n");
  printf("#ATRIBUTO 2\n");
  printf("### Lembre se de nao repetir o atributo anterior!\n");
  printf("Populacao - (1)\n");
  printf("Area - (2)\n");
  printf("PIB - (3)\n");
  printf("Pontos Turisticos - (4)\n");
  printf("PIB per capita - (5)\n");
  printf("Super poder - (6)\n");
  printf("Digite o numero do segundo atributo escolhido:");
  scanf("%d",&atributo2Carta2);

  //verifica se foi digitado um comando válido
  if(atributo2Carta2<1 || atributo2Carta2>6){

    printf("\n");
    printf("### Comando invalido!, Escolha um atributo entre 1 e 6! ###\n");
    printf("\n");
    continue;
  }
  
  //verifica se foi digitado um comando repetido
  if(atributo2Carta2==atributo1Carta2){

    printf("\n");
    printf("### Comando invalido!, Os atributos escolhidos devem ser DIFERENTES! ###\n");
    printf("\n");
    continue;
  }

  //finaliza o loop
  if(atributo1Carta2 && atributo2Carta2){
    break;
  }

};

//As variaveis são preenchidas com os valores reais dos atributos
//Atributo 1
switch(atributo1Carta2)
{
case 1:
  atributo1Carta2=(int)populacaoDaCidadeC2;
  strcpy(nomeAtributo1Carta2,"Populacao");
  break;

case 2:
  atributo1Carta2=(int)areaDaCidadeC2;
  strcpy(nomeAtributo1Carta2,"Area");
  break;

case 3:
  atributo1Carta2=(int)pibDaCidadeC2;
  strcpy(nomeAtributo1Carta2,"PIB");
  break;

case 4:
  atributo1Carta2=pontosTuristicosC2;
  strcpy(nomeAtributo1Carta2,"Pontos turisticos");
  break;
  
case 5:
  atributo1Carta2=(int)pibPerCapitaC2;
  strcpy(nomeAtributo1Carta2,"PIB per capita");
  break;

case 6:
  atributo1Carta2=(int)superPoderC2;
  strcpy(nomeAtributo1Carta2,"Super poder");
  break;  
};

//As variaveis são preenchidas com os valores reais dos atributos
//Atributo 2
switch(atributo2Carta2)
{
case 1:
  atributo2Carta2=(int)populacaoDaCidadeC2;
  strcpy(nomeAtributo2Carta2,"Populacao");
  break;

case 2:
  atributo2Carta2=(int)areaDaCidadeC2;
  strcpy(nomeAtributo2Carta2,"Area");
  break;

case 3:
  atributo2Carta2=(int)pibDaCidadeC2;
  strcpy(nomeAtributo2Carta2,"PIB");
  break;

case 4:
  atributo2Carta2=pontosTuristicosC2;
  strcpy(nomeAtributo2Carta2,"Pontos turisticos");
  break;
  
case 5:
  atributo2Carta2=(int)pibPerCapitaC2;
  strcpy(nomeAtributo2Carta2,"PIB per capita");
  break;

case 6:
  atributo2Carta2=(int)superPoderC2;
  strcpy(nomeAtributo2Carta2,"Super poder");
  break;  
};


//A partir daqui começa a exibição dos resultados para o usuario
  printf("\n");
  printf("=================================================================\n");
  printf("## Vamos aos RESULTADOS!\n");
  printf("Estado da Carta 1:%s\n",nomeDoEstadoC1);
  printf("Estado da Carta 2:%s\n",nomeDoEstadoC2);
  printf("Atributo 1 da Carta 1 e:%s\n",nomeAtributo1Carta1);
  printf("Atributo 2 da Carta 1 e:%s\n",nomeAtributo2Carta1);
  printf("Atributo 1 da Carta 2 e:%s\n",nomeAtributo1Carta2);
  printf("Atributo 2 da Carta 2 e:%s\n",nomeAtributo2Carta2);
  printf("Valor do atributo 1 da Carta 1 e:%d\n",atributo1Carta1);
  printf("Valor do atributo 2 da Carta 1 e:%d\n",atributo2Carta1);
  printf("Valor do atributo 1 da Carta 2 e:%d\n",atributo1Carta2);
  printf("Valor do atributo 2 da Carta 2 e:%d\n",atributo2Carta2);
  printf("A soma dos atributos da Carta 1 e:%d\n",atributo1Carta1+atributo2Carta1);
  printf("A soma dos atributos da Carta 2 e:%d\n",atributo1Carta2+atributo2Carta2);
  printf("\n");

  //Verifica qual carta venceu, Ou se aconteceu um empate
  if((atributo1Carta1+atributo2Carta1)>(atributo1Carta2+atributo2Carta2)){
    printf("=================================================================\n");
    printf("Carta 1 Venceu!\n");
    printf("=================================================================\n");
  }
  else if((atributo1Carta1+atributo2Carta1)<(atributo1Carta2+atributo2Carta2)){
    printf("=================================================================\n");
    printf("Carta 2 Venceu!\n");
    printf("=================================================================\n");
  }
  else{
    printf("=================================================================\n");
    printf("Deu Empate!\n");
    printf("=================================================================\n");
  }
  return 0;

}

#include <stdio.h>
int main(){

/*Os dados acima são, respectivamente, dados referente a: Estado, Código da carta,
Nome da cidade, População, Área em quilometros quadrado, PIB, Número de pontos tu
rísticos.*/
   
// Dados da primeira carta
char estado[2];       // 1 caractere + '\0'
char codigo[10];
char cidade[50];
int populacao;
float area, PIB;
int turisticos;

printf("Insira o nome do estado: \n");
scanf("%1s", estado); //declarei o tamanho da variavel que vc criou

printf("Insira o código da carta: \n");
scanf("%s", codigo);

printf("Insira o nome da cidade: \n");
scanf("%s", cidade);

printf("Insira a quantidade populacional: \n");
scanf("%d", &populacao);

printf("Insira a área da cidade:  \n");
scanf("%f", &area);

printf("Insira o PIB da cidade:  \n");
scanf("%f", &PIB);

printf("Insira o número dos pontos turísticos da cidade:  \n");
scanf("%d", &turisticos);

// Apresentação para o usuário
printf("Nome do estado: %s - Nome da cidade: %s - Código da carta: %s\n",estado, cidade, codigo);
printf("População: %d - Área da cidade: %f - PIB: %f - Número de pontos turísticos: %d\n ", populacao, area, PIB, turisticos);



/* Dados a seguir da segunda carta*/

char estado2;
char codigo2;
char cidade2 [50]; 
int populacao2;
float area2;
float PIB2;
int turisticos2;

// Dados da segunda carta
printf("Insira o nome do estado: \n");
scanf("%s", &estado2);

printf("Insira o código da carta: \n");
scanf("%s", &codigo2);

printf("Insira o nome da cidade: \n");
scanf("%s", &cidade2);

printf("Insira a quantidade populacional: \n");
scanf("%d", &populacao2);

printf("Insira a área da cidade: \n");
}

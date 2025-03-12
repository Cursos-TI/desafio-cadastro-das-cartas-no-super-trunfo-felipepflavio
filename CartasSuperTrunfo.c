#include <stdio.h>

int main(){

char estado, codigoCarta [10], nomeCidade [30];
int populacao, pontosTuristicos, c;
float area, pib, densidadePopulacional, pibPerCapita;

printf("JOGO SUPER TRUNFO. \n ");
printf("————————————————————————————————————————————————————— \n");

for (c = 1; c < 3; c++)
{
    printf("Inserindo os dados da carta %i", c,": \n");
    printf("\n");
    
    /*Solicitando os dados das cartas ao usuário:*/
    
    printf("CARTA %i", c,": \n");
    
    printf("Insira o estado, uma letra de: {A – H}: \n");
    scanf("%c", &estado, "\n");
    
    printf("Insira o código da carta(o código da carta deve conter a letra escolhida na questão anterior seguida de um número, exe: A01): \n");
    scanf("%s", &codigoCarta, "\n");
    
    printf("\n");

    printf("Insira o nome da cidade(caso o nome da cidade seja de mais de uma palavra, essas palavras devem serem iseridas juntas! Exe: Rio de Janeiro – RioDeJaneiro.): \n");
    scanf("%s", &nomeCidade, "\n");

    printf("\n");
    
    printf("Insira o número da população habitante dessa cidade: \n");
    scanf("%i", &populacao, "\n");

    printf("\n");
    
    printf("Insira a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area, "\n");

    printf("\n");
    
    printf("Insira o PIB da cidade(Produto Interno Bruto): \n");
    scanf("%f", &pib, "\n");

    printf("\n");
    
    printf("\n Insira o número de pontos turísticos da cidade: \n");
    scanf("%i", &pontosTuristicos, "\n");
    
    // Realizando os cálculos da Densidade Populacional e do PIB per Capita;

    densidadePopulacional = populacao / area;
    pibPerCapita = pib / populacao;

    /*Imprimindo no terminal as cartas  com os dados inseridos pelo usuário:*/
    
    printf("————————————————————————————————————————————————————— \n");
    
    printf("DADOS DA CARTA: %i", c ," \n");

    printf("\n");

    printf("ESTADO DA CARTA: %c", estado,"\n");
    printf("\n");
    printf ("CÓDIGO DA CARTA: %s", codigoCarta,"\n");
    printf("\n");
    printf("NOME DA CIDADE: %s", nomeCidade,"\n");
    printf("\n");
    printf("NUMERO DA POPULAÇÃO DA CIDADE: %i", populacao,"\n");
    printf("\n");
    printf("ÁREA: %f", area,"\n");
    printf("\n");
    printf("PIB: %f", pib,"\n");  
    printf("\n");
    printf("NUMEROS DE PONTOS TURISTICOS: %i", pontosTuristicos,"\n");
    printf("\n");
    printf("DENSIDADE POPULACIONAL: %f", densidadePopulacional, "\n");
    printf("\n");
    printf("PIB PER CAPITA: %f", pibPerCapita , "\n");
    printf("\n");

    printf("————————————————————————————————————————————————————— \n");
}


return 0;


}
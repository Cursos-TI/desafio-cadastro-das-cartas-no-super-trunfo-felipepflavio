#include <stdio.h>

int main(){

char estado, codigoCarta [10], nomeCidade [30];
int populacao, pontosTuristicos, c;
float area, pib;

printf("JOGO SUPER TRUNFO. \n ");
printf("————————————————————————————————————————————————————— \n");

for (c = 1; c < 3; c++)
{
    printf("Inserindo os dados da carta %i", c,": \n");
    printf("\n");
    
    /*Solicitando os dados das cartas ao usuário:*/
    
    printf("CARTA %i", c,": \n");
    
    printf("Insira o estado, uma letra de: {A – H}: \n");
    scanf("%c", &estado);
    
    printf("Insira o código da carta(o código da carta deve conter a letra escolhida na questão anterior seguida de um número, exe: A01): \n");
    scanf("%s", &codigoCarta);
    
    printf("Insira o nome da cidade(caso o nome da cidade seja de mais de uma palavra, essas palavras devem serem iseridas juntas! Exe: Rio de Janeiro – RioDeJaneiro.): \n");
    scanf("%s", &nomeCidade);
    
    printf("Insira o número da população habitante dessa cidade: \n");
    scanf("%i", &populacao);
    
    printf("Insira a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);
    
    printf("Insira o PIB da cidade(Produto Interno Bruto): \n");
    scanf("%f", pib);
    
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%i", &pontosTuristicos);
    
    
    /*Imprimindo no terminal as cartas  com os dados inseridos pelo usuário:*/
    
    printf("————————————————————————————————————————————————————— \n");
    
    printf("DADOS DA CARTA: %i", c ," \n");

    printf("\n");

    printf("ESTADO DA CARTA: %c", estado,"\n");
    printf (" \n CÓDIGO DA CARTA: %s", codigoCarta,"\n");
    printf(" \n NOME DA CIDADE: %s", nomeCidade,"\n");
    printf(" \n NUMERO DA POPULAÇÃO DA CIDADE: %i", populacao,"\n");
    printf(" \n ÁREA: %f", area,"\n");
    printf("\n PIB: %f", pib,"\n");  
    printf(" \n NUMEROS DE PONTOS TURISTICOS: %i", pontosTuristicos,"\n");

    printf("————————————————————————————————————————————————————— \n");
}


return 0;


}
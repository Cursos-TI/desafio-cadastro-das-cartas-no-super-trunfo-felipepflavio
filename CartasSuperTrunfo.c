#include <stdio.h>

int main(){

    char estado1, estado2, codigoCarta1 [10], codigoCarta2 [10], nomeCidade1 [30], nomeCidade2 [30];
    int  pontosTuristicos1, pontosTuristicos2;
    unsigned long int populacao1, populacao2;
    long double superPoder1, superPoder2;
    float area1, area2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2;

    printf("JOGO SUPER TRUNFO. \n ");
    printf("————————————————————————————————————————————————————— \n");

    printf("Inserindo os dados da carta 1: \n");
    
    /*Solicitando os dados das cartas ao usuário:*/
    
    printf("CARTA 1: \n");
    
    printf("Insira o estado, uma letra de: {A – H}: \n");
    scanf("%c", &estado1);
    
    printf("Insira o código da carta(o código da carta deve conter a letra escolhida na questão anterior seguida de um número, exe: A01): \n");
    scanf("%s", &codigoCarta1);


    printf("Insira o nome da cidade(caso o nome da cidade seja de mais de uma palavra, essas palavras devem serem iseridas juntas! Exe: Rio de Janeiro – RioDeJaneiro.): \n");
    scanf("%s", &nomeCidade1);

    
    printf("Insira o número da população habitante dessa cidade: \n");
    scanf("%u", &populacao1);

    
    printf("Insira a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    
    printf("Insira o PIB da cidade(Produto Interno Bruto): \n");
    scanf("%f", &pib1);

    
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%i", &pontosTuristicos1);
    
    // Realizando os cálculos da Densidade Populacional e do PIB per Capita;

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    /*Calculando o Super Poder da carta:*/
    superPoder1 = (double) populacao1 + pontosTuristicos1 + area1 + pib1 + pibPerCapita1 + densidadePopulacional1;

    /*Imprimindo no terminal as cartas  com os dados inseridos pelo usuário:*/
    
    printf("————————————————————————————————————————————————————— \n");
    
    printf("DADOS DA CARTA 1:\n");

    printf("ESTADO DA CARTA: %c\n", estado1);
    
    printf ("CÓDIGO DA CARTA: %s\n", codigoCarta1);
    
    printf("NOME DA CIDADE: %s\n", nomeCidade1);
        
    printf("NUMERO DA POPULAÇÃO DA CIDADE: %i\n", populacao1);
    
    printf("ÁREA: %f\n", area1);
    
    printf("PIB: %f\n", pib1);  
    
    printf("NUMEROS DE PONTOS TURISTICOS: %i\n", pontosTuristicos1);
    
    printf("DENSIDADE POPULACIONAL: %f\n", densidadePopulacional1);
    
    printf("PIB PER CAPITA: %f\n", pibPerCapita1);

    printf("SUPER PODER: %.Lf\n", superPoder1);

    printf("————————————————————————————————————————————————————— \n");

    printf("Inserindo os dados da carta 2: \n");
    
    
    /*Solicitando os dados das cartas ao usuário:*/
    
    printf("CARTA 2: \n");
    
    printf("Insira o estado, uma letra de: {A – H}: \n");
    scanf(" \n %c", &estado2);
    
    printf("Insira o código da carta(o código da carta deve conter a letra escolhida na questão anterior seguida de um número, exe: A01): \n");
    scanf("%s", &codigoCarta2);
    

    printf("Insira o nome da cidade(caso o nome da cidade seja de mais de uma palavra, essas palavras devem serem iseridas juntas! Exe: Rio de Janeiro – RioDeJaneiro.): \n");
    scanf("%s", &nomeCidade2);

    
    printf("Insira o número da população habitante dessa cidade: \n");
    scanf("%u", &populacao2);

    
    printf("Insira a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    
    printf("Insira o PIB da cidade(Produto Interno Bruto): \n");
    scanf("%f", &pib2);

    
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%i", &pontosTuristicos2);
    
    // Realizando os cálculos da Densidade Populacional e do PIB per Capita;

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    /*Calculando o Super Poder da carta:*/
    superPoder2 = (double) populacao2 + pontosTuristicos2 + area2 + pib2 + pibPerCapita2 + densidadePopulacional2;

    /*Imprimindo no terminal as cartas  com os dados inseridos pelo usuário:*/
    
    printf("————————————————————————————————————————————————————— \n");
    
    printf("DADOS DA CARTA 2:\n");


    printf("ESTADO DA CARTA: %c\n", estado2);
    
    printf ("CÓDIGO DA CARTA: %s\n", codigoCarta2);
    
    printf("NOME DA CIDADE: %s\n", nomeCidade2);
    
    printf("NUMERO DA POPULAÇÃO DA CIDADE: %i\n", populacao2);
    
    printf("ÁREA: %f\n", area2);
    
    printf("PIB: %f\n", pib2);  
    
    printf("NUMEROS DE PONTOS TURISTICOS: %i\n", pontosTuristicos2);
    
    printf("DENSIDADE POPULACIONAL: %f\n", densidadePopulacional2);
    
    printf("PIB PER CAPITA: %f\n", pibPerCapita2);

    printf("SUPER PODER: %.Lf\n", superPoder2);


    printf("————————————————————————————————————————————————————— \n");

    /*Exibindo as comparações dos atributos das cartas:*/
    printf("COMPARAÇÃO DOS ATRIBUTOS DAS CARTAS: \n");

    printf("Resuntado 1 para a carta 1 como vencedora e 0 para a carta 2 como vencedora! \n");

    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Numero de pontos turísticos: %d\n", pib1 > pib2);
    printf("Densidade populacional: %d\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB PER CAPITA: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);
    
return 0;


}

/*Realizando os commitis*/
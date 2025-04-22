#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main(){

    char estado1, estado2, codigoCarta1 [10], codigoCarta2 [10], nomeCidade1 [30], nomeCidade2 [30];
    int  pontosTuristicos1, pontosTuristicos2, comparacao1, comparacao2, resultado1 = 0, resultado2 = 0;
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
    scanf(" %c", &estado2);
    
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

    /* Perguntando ao usuário o primeiro atributo que ele deseja comparar*/
    printf("AGORA VOCÊ SELECIONARÁ DOIS ATRIBUTOS PARA QUE SEJA FEITA AS COMPARAÇÕES E ELEGERMOS UM VENCEDOR.\n");
    printf("O primeiro atributo de comparação não deve ser igual ao segundo, e vice versa.\n");
    printf("Por favor, insira o primeiro número do atributo que deseja comparar: \n");
    printf("1 - População. 2 - Área. 3 - PIB. 4 - Número de pontos turísticos. 5 - Densidade populacional. 6 - Super poder. \n");
    scanf(" %i", &comparacao1);

    /* Identificando e comparando o primeiro atributo escolhido pelo usuário.*/
    switch (comparacao1)
    {
        case 1:
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            break;
        case 5:
            resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
            break;
        case 6:
            resultado1 = superPoder1 > superPoder2 ? 1 : 0;
            break;
        default:
            printf("ERRO! Opção de comparação inválida. Tente novamente.\n");
            exit(1);
            break;
    }

     /* Perguntando ao usuário o segundo atributo que ele deseja comparar*/
    printf("Por favor, insira o segundo número do atributo que deseja comparar: \n");
    printf("1 - População. 2 - Área. 3 - PIB. 4 - Número de pontos turísticos. 5 - Densidade populacional. 6 - Super poder. \n");
    scanf(" %i", &comparacao2);

    /* Identificando e comparando o segundo atributo escolhido pelo usuário.*/
    if (comparacao2 == comparacao1)
    {
        printf("ERRO! Escolha comparadores diferentes.\n");
        exit(1);
    } else
    {
        switch (comparacao2)
        {
            case 1:
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                break;
            case 2:
                resultado2 = area1 > area2 ? 1 : 0;
                break;
            case 3:
                resultado2 = pib1 > pib2 ? 1 : 0;
                break;
            case 4:
                resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
                break;
            case 5:
                resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
                break;
            case 6:
                resultado2 = superPoder1 > superPoder2 ? 1 : 0;
                break;
            default:
                printf("ERRO! Opção de comparação inválida. Tente novamente.\n");
                exit(1);
                break;
        }
    }

    //Comparando os resultados e exibindo o jogador vencedor.
    printf("VENCEDOR:\n");
    if (resultado1 && resultado2)
    {
        printf("Jogador 1 vencedor!\n");
    } else if (resultado1 =! resultado2)
    {
        printf("Empate!\n");
    } else
    {
        printf("Jogador 2 venceu!\n");
    }
    
    
    

return 0;

}
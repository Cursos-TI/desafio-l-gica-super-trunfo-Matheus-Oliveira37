#include <stdio.h>

int main() {

    // Variáveis da carta 1
    char pais[23]; // País da carta
    char estado; // Estado da carta
    char codigo[5] = "01"; // Código da carta
    char cidade[23]; // Cidade da carta
    int populacao; // População da carta
    float area; // Área da carta
    float PIB; // PIB da carta
    int pontos; // Pontos turísticos da carta
    float densidade; // Densidade demográfica da carta
    float PIBpercapita; // PIB per capita da carta


    // Variáveis da carta 2
    char pais2[23]; // País da carta 2
    char estado2; // Estado da carta 2
    char codigo2[5] = "02"; // Código da carta 2
    char cidade2[23]; // Cidade da carta 2
    int populacao2; // População da carta 2
    float area2; // Área da carta 2
    float PIB2; // PIB da carta 2
    int pontos2; // Pontos turísticos da carta 2
    float densidade2; // Densidade demográfica da carta 2
    float PIBpercapita2; // PIB per capita da carta 2

    int opcao; // Opção do usuário

    // Cadastro da Carta 1

    printf("Cadastre sua carta:\n"); // Início do cadastro
    printf("--------------------------------------\n"); // Linha de separação
    printf("Carta 1 - \n"); // Título do cadastro
    printf("Escolha um país:\n"); // Solicitação do país
    scanf("%22s", pais); // Leitura do país com limite de 22 caracteres

    printf("Escolha um estado com a letra de A a H:\n"); // Solicitação do estado
    scanf(" %c", &estado); // Leitura do estado

    printf("Escolha uma cidade desse estado:\n"); // Solicitação da cidade
    scanf("%22s", cidade); // Leitura da cidade com limite de 22 caracteres

    printf("Escreva a população: \n"); // Solicitação da população
    scanf("%d", &populacao); // Leitura da população

    printf("Qual a área em km²: \n");   // Solicitação da área
    scanf("%f", &area); // Leitura da área

    printf("Qual o PIB do estado: \n"); // Solicitação do PIB
    scanf("%f", &PIB); // Leitura do PIB

    printf("Quantos pontos turísticos possui: \n"); // Solicitação dos pontos turísticos
    scanf("%d", &pontos); // Leitura dos pontos turísticos
    printf("--------------------------------------\n"); // Linha de separação

    // Cadastro da Carta 2 

    printf("Cadastre sua carta:\n"); // Início do cadastro
    printf("--------------------------------------\n"); // Linha de separação
    printf("Carta 2 - \n"); // Título do cadastro
    printf("Escolha um país:\n"); // Solicitação do país
    scanf("%22s", pais2); // Leitura do país com limite de 22 caracteres

    printf("Escolha um estado com a letra de A a H:\n"); // Solicitação do estado
    scanf(" %c", &estado2); // Leitura do estado

    printf("Escolha uma cidade desse estado:\n"); // Solicitação da cidade
    scanf("%22s", cidade2); // Leitura da cidade com limite de 22 caracteres

    printf("Escreva a população: \n"); // Solicitação da população
    scanf("%d", &populacao2); // Leitura da população

    printf("Qual a área em km²: \n"); // Solicitação da área
    scanf("%f", &area2); // Leitura da área

    printf("Qual o PIB do estado: \n"); // Solicitação do PIB
    scanf("%f", &PIB2); // Leitura do PIB

    printf("Quantos pontos turísticos possui: \n"); // Solicitação dos pontos turísticos
    scanf("%d", &pontos2); // Leitura dos pontos turísticos
    printf("--------------------------------------\n"); // Linha de separação

    // Exibição das Cartas

    // Exibição da carta 1

    printf("Cartas cadastradas:\n"); // Título da exibição
    printf("--------------------------------------\n"); // Linha de separação
    printf("Carta 1:\n"); // Título da carta 1
    printf("País - %s\n", pais); // Exibição do país
    printf("Estado - %c\n", estado); // Exibição do estado
    printf("Código da carta - %c%s\n", estado, codigo); // Exibição do código
    printf("Cidade - %s\n", cidade); // Exibição da cidade
    printf("População - %d\n", populacao); // Exibição da população
    printf("Área em km² - %.2fkm²\n", area); // Exibição da área
    printf("PIB - %.2f\n", PIB); // Exibição do PIB
    printf("Número de Pontos Turísticos - %d pontos\n", pontos); // Exibição dos pontos turísticos
    densidade = (float) populacao / area; // Cálculo da densidade populacional
    printf("Densidade Demográfica - %.2f habitantes/km²\n", densidade); // Exibição da densidade Demográfica
    PIBpercapita = PIB / populacao; // Cálculo do PIB per capita
    printf("PIB per capita - %.2f\n", PIBpercapita); // Exibição do PIB per capita

    printf("--------------------------------------\n"); // Linha de separação

    // Exibição da carta 2

    printf("Carta 2:\n"); // Título da carta 2
    printf("País - %s\n", pais2); // Exibição do país 2
    printf("Estado - %c\n", estado2); // Exibição do estado 2
    printf("Código da carta - %c%s\n", estado2, codigo2); // Exibição do código 2
    printf("Cidade - %s\n", cidade2); // Exibição da cidade 2
    printf("População - %d\n", populacao2); // Exibição da população 2
    printf("Área em km² - %.2fkm²\n", area2); // Exibição da área 2
    printf("PIB - %.2f\n", PIB2); // Exibição do PIB 2
    printf("Número de Pontos Turísticos - %d pontos\n", pontos2); // Exibição dos pontos turísticos 2
    densidade2 = (float) populacao2 / area2; // Cálculo da densidade populacional 2
    printf("Densidade Demográfica - %.2f habitantes/km²\n", densidade2); // Exibição da densidade demográfica 2
    PIBpercapita2 = PIB2 / populacao2; // Cálculo do PIB per capita 2
    printf("PIB per capita - %.2f\n", PIBpercapita2); // Exibição do PIB per capita 2

    printf("--------------------------------------\n"); // Linha de separação

    // Comparação das cartas

    printf("Comparação das cartas:\n"); // Título da comparação
    printf("Escolha um critério de comparação:\n"); // Solicitação do critério
    printf("1. População\n"); // Opção 1
    printf("2. Área\n"); // Opção 2
    printf("3. PIB\n"); // Opção 3
    printf("4. Número de Pontos Turísticos\n"); // Opção 4
    printf("5. Densidade Demográfica\n"); // Opção 4
    scanf("%d", &opcao); // Leitura da opção

    switch(opcao){ //Início do switch para comparação
        case 1: // Comparação da população
            if (populacao > populacao2){
                printf("A cidade %s tem maior população\n", cidade); // Exibição do resultado
                printf("%s tem %d habitantes e %s tem %d habitantes\n\n", cidade, populacao, cidade2, populacao2); // Exibição do resultado
                printf("Resultado:\n"); // Título do resultado
                printf("A carta 1 %s é a vencedora!!\n\n", pais); // Exibição do resultado
            } else if (populacao < populacao2){
                printf("A cidade %s tem maior população.\n", cidade2); // Exibição do resultado
                printf("%s tem %d habitantes e %s tem %d habitantes\n\n", cidade2, populacao2, cidade, populacao); // Exibição do resultado
                printf("Resultado:\n"); // Título do resultado
                printf("A carta 2 %s é a vencedora!!\n\n", pais); // Exibição do resultado
            } else {
                printf("As cartas possuem a mesma população.\n\n"); // Exibição do resultado
                printf("%s tem %d habitantes e %s tem %d habitantes\n\n", cidade, populacao, cidade2, populacao2);
                printf("Resultado:\n"); // Título do resultado
                printf("As cartas empataram.\n\n"); // Exibição do resultado
            }
            break; // Interrompe a execução do switch
        case 2: // Comparação da área
            if (area > area2){
                printf("A cidade %s tem maior área\n", cidade); // Exibição do resultado
                printf("%s tem %.2f km² e %s tem %.2f km²\n\n", cidade, area, cidade2, area2); // Exibição do resultado
                printf("Resultado:\n"); // Título do resultado
                printf("A carta 1 %s é a vencedora!!\n\n", pais); // Exibição do resultado
            } else if (area < area2){
                printf("A cidade %s tem maior área.\n", cidade2); // Exibição do resultado
                printf("%s tem %.2f km² e %s tem %.2f km²\n\n", cidade2, area2, cidade, area); // Exibição do resultado
                printf("Resultado:\n"); // Título do resultado
                printf("A carta 2 %s é a vencedora!!\n\n", pais); // Exibição do resultado
            } else {
                printf("As cartas possuem a mesma área.\n\n"); // Exibição do resultado
                printf("%s tem %.2f km² e %s tem %.2f km²\n\n", cidade, area, cidade2, area2); // Exibição do resultado
                printf("Resultado:\n"); // Título do resultado
                printf("As cartas empataram.\n\n"); // Exibição do resultado
            }
            break; // Interrompe a execução do switch
        case 3: // Comparação do PIB
            if (PIB > PIB2){
                printf("A cidade %s tem maior PIB\n", cidade); // Exibição do resultado
                printf("%s tem %.2f e %s tem %.2f\n\n", cidade, PIB, cidade2, PIB2); // Exibição do resultado
                printf("Resultado:\n"); // Título do resultado
                printf("A carta 1 %s é a vencedora!!\n\n", pais); // Exibição do resultado
            } else if (PIB < PIB2){
                printf("A cidade %s tem maior PIB.\n", cidade2); // Exibição do resultado
                printf("%s tem %.2f e %s tem %.2f\n\n", cidade2, PIB2, cidade, PIB); // Exibição do resultado
                printf("Resultado:\n"); // Título do resultado
                printf("A carta 2 %s é a vencedora!!\n\n", pais); // Exibição do resultado
            } else {
                printf("As cartas possuem o mesmo PIB.\n\n"); // Exibição do resultado
                printf("%s tem %.2f e %s tem %.2f\n\n", cidade, PIB, cidade2, PIB2); // Exibição do resultado
                printf("Resultado:\n"); // Título do resultado
                printf("As cartas empataram.\n\n"); // Exibição do resultado
            }
            break; // Interrompe a execução do switch
        case 4: // Comparação dos pontos turísticos
            if (pontos > pontos2){
                printf("A cidade %s tem mais pontos turísticos\n", cidade); // Exibição do resultado
                printf("%s tem %d pontos turísticos e %s tem %d pontos turísticos\n\n", cidade, pontos, cidade2, pontos2); // Exibição do resultado
                printf("Resultado:\n"); // Título do resultado
                printf("A carta 1 %s é a vencedora!!\n\n", pais); // Exibição do resultado
            } else if (pontos < pontos2){
                printf("A cidade %s tem mais pontos turísticos.\n", cidade2); // Exibição do resultado
                printf("%s tem %d pontos turísticos e %s tem %d pontos turísticos\n\n", cidade2, pontos2, cidade, pontos); // Exibição do resultado
                printf("Resultado:\n"); // Título do resultado
                printf("A carta 2 %s é a vencedora!!\n\n", pais); // Exibição do resultado
            } else {
                printf("As cartas possuem o mesmo número de pontos turísticos.\n\n"); // Exibição do resultado
                printf("%s tem %d pontos turísticos e %s tem %d pontos turísticos\n\n", cidade, pontos, cidade2, pontos2); // Exibição do resultado
                printf("Resultado:\n"); // Título do resultado
                printf("As cartas empataram.\n\n"); // Exibição do resultado
            }
            break; // Interrompe a execução do switch
        case 5: // Comparação da densidade demográfica
            if (densidade < densidade2){
                printf("A cidade %s tem menor densidade demográfica\n", cidade); // Exibição do resultado
                printf("%s tem %.2f habitantes/km² e %s tem %.2f habitantes/km²\n\n", cidade, densidade, cidade2, densidade2); // Exibição do resultado
                printf("Resultado:\n"); // Título do resultado
                printf("A carta 1 %s é a vencedora!!\n\n", pais); // Exibição do resultado
            } else if (densidade > densidade2){
                printf("A cidade %s tem menor densidade demográfica.\n", cidade2); // Exibição do resultado
                printf("%s tem %.2f habitantes/km² e %s tem %.2f habitantes/km²\n\n", cidade2, densidade2, cidade, densidade); // Exibição do resultado
                printf("Resultado:\n"); // Título do resultado
                printf("A carta 2 %s é a vencedora!!\n\n", pais); // Exibição do resultado
            } else {
                printf("As cartas possuem a mesma densidade demográfica.\n\n"); // Exibição do resultado
                printf("%s tem %.2f habitantes/km² e %s tem %.2f habitantes/km²\n\n", cidade, densidade, cidade2, densidade2); // Exibição do resultado
                printf("Resultado:\n"); // Título do resultado
                printf("As cartas empataram.\n\n"); // Exibição do resultado
            }
            break; // Interrompe a execução do switch
        default: // Opção inválida
            printf("Opção inválida. Tente novamente.\n\n"); // Exibição do resultado
            break; // Interrompe a execução do switch
    }
    
    

    printf("****************************************"); // Linha final



    return 0;
}
#include <stdio.h>
#include <string.h>

// Função que remove o '\n' do final de uma string
void limpa_enter(char *str)
{
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
}

int main() {

    char estado1[4], estado2[4], nomeCidade1[100], nomeCidade2[100];
    int nPontosTuristicos1, nPontosTuristicos2, num_carta1, num_carta2;
    float area1, area2, pib1, pib2, densidade_Populacional1, densidade_Populacional2, pib_Percapta1, pib_Percapta2, supPoder1, supPoder2;
    unsigned long int populacao1, populacao2;
    
    // Boas-vindas ao jogo
    printf("=======================================================\n");
    printf("   Bem-vindo ao Super Trunfo das Cidades! \n");
    printf("   Prepare-se para um duelo épico entre cidades! \n");
    printf("========================================================\n");
    printf("   Vamos cadastrar as cartas e começar a diversão!      \n");
    printf("========================================================\n");

    // Solicita informações da 1ª carta
    printf("\nDigite a letra do estado (A-H): ");
    fgets(estado1, sizeof(estado1), stdin);
    limpa_enter(estado1); // Limpa o \n

    printf("Digite o número da carta (01-04): ");
    scanf("%d", &num_carta1);
    getchar(); // Limpa o buffer do '\n' deixado pelo scanf

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    limpa_enter(nomeCidade1); // Limpar o \n

    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Digite a área em Km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &nPontosTuristicos1);
    getchar(); // Limpa o buffer do '\n'

    // Solicita informações da 2ª carta
    printf("\nDigite a letra do estado (A-H): ");
    fgets(estado2, sizeof(estado2), stdin);
    limpa_enter(estado2); // Limpar o \n

    printf("Digite o número da carta (01-04): ");
    scanf("%d", &num_carta2);
    getchar(); // Limpa o buffer do '\n'

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    limpa_enter(nomeCidade2); // Limpar o \n

    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Digite a área em Km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &nPontosTuristicos2);
    getchar(); // Limpa o buffer do '\n'

    // Calculando a Densidade Populacional da primeira carta
    densidade_Populacional1 = (float) populacao1 / area1;

    // Calculando o PIB per Capita da primeira carta
    pib_Percapta1 = pib1 / populacao1;

    // Calculando o super poder da primeira carta
    supPoder1 = (float) populacao1 + area1 + pib1 + nPontosTuristicos1 + pib_Percapta1 + (1 / densidade_Populacional1);

    // Calculando a Densidade Populacional da segunda carta
    densidade_Populacional2 = (float) populacao2 / area2;

    // Calculando o PIB per Capita da segunda carta
    pib_Percapta2 = pib2 / populacao2;

    // Calculando o super poder da segunda carta
    supPoder2 = (float) populacao2 + area2 + pib2 + nPontosTuristicos2 + pib_Percapta2 + (1 / densidade_Populacional2);

    // Apresentando informações da 1ª carta
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%02d\n", estado1, num_carta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", nPontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_Populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_Percapta1);

    // Apresentando informações da 2ª carta
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%02d\n", estado2, num_carta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", nPontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_Populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_Percapta2);

    // Comparação de cartas
    printf("\n*** Comparação de cartas ***\n");
    printf("População: Carta %d venceu\n", populacao1 > populacao2 ? 1 : 2);
    printf("Área: Carta %d venceu\n", area1 > area2 ? 1 : 2);
    printf("PIB: Carta %d venceu\n", pib1 > pib2 ? 1 : 2);
    printf("Pontos turísticos: Carta %d venceu\n", nPontosTuristicos1 > nPontosTuristicos2 ? 1 : 2);
    printf("Densidade populacional: Carta %d venceu\n", densidade_Populacional1 < densidade_Populacional2 ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", pib_Percapta1 > pib_Percapta2 ? 1 : 2);
    printf("Super poder: Carta %d venceu\n", supPoder1 > supPoder2 ? 1 : 2);
    printf("*** FIM SUPER TRUNFO ***\n");

    return 0;
}

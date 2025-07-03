#include <stdio.h>

int main() {
    char estado1[50], estado2[50], codigo1[50], codigo2[50], cidade1[50], cidade2[50];
    int populacao1, populacao2, turistico1, turistico2;
    float area1, area2, pib1, pib2;

    //Coleta dos dados pelo usuário
    printf("Iremos começar cadastrando os dados da primeira carta\n");
        printf("Digite o nome do Estado: ");
        scanf(" %49s", estado1);
        printf("Digite o Código da Carta: ");
        scanf(" %49s", codigo1);
        printf("Digite o nome da Cidade: ");
        scanf(" %49s", cidade1);
        printf("Digite o número da População desta cidade: ");
        scanf("%d", &populacao1);
        printf("Digite a Área desta cidade: ");
        scanf("%f", &area1);
        printf("Digite o PIB desta cidade: ");
        scanf("%f", &pib1);
        printf("Por fim, digite a quantidade de pontos turísticos que esta cidade possui: ");
        scanf("%d", &turistico1);

    printf("\nÓtimo, agora iremos cadastrar os dados da segunda carta\n");
        printf("Digite o nome do Estado: ");
        scanf(" %49s", estado2);
        printf("Digite o Código da Carta: ");
        scanf(" %49s", codigo2);
        printf("Digite o nome da Cidade: ");
        scanf(" %49s", cidade2);
        printf("Digite o número da População desta cidade: ");
        scanf("%d", &populacao2);
        printf("Digite a Área desta cidade: ");
        scanf("%f", &area2);
        printf("Digite o PIB desta cidade: ");
        scanf("%f", &pib2);
        printf("Por fim, digite a quantidade de pontos turísticos que esta cidade possui: ");
        scanf("%d", &turistico2);

    // Exibição dos dados das cartas
    printf("\nSeguem os dados cadastrados para cada carta:\n");
        printf("\nCarta 1:\n");
        printf("Estado: %s\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea em km²: %.2f\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\n",
           estado1, codigo1, cidade1, populacao1, area1, pib1, turistico1);

        printf("\nCarta 2:\n");
        printf("Estado: %s\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea em km²: %.2f\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2);

return 0;
}

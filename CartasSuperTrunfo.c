#include <stdio.h>

int main (){
    // ESTADO: IMPRIME UMA LETRA DE 'A' a 'H' (REPRESENTANDO UM DOS OITO ESTADOS), TIPO: CHAR (IMPRIME UM CARACTERE) ...
    char estado1, estado2;
    
    // CÓDIGO DA CARTA: IMPRIME A LETRA DO ESTADO SEGUIDA DE UM NÚMERO DE 01 a 04 (EX: A01, B03), TIPO: CHAR [] ARRAY DE CARACTERE OU STRING ...
    char carta1 [4], carta2 [4];
 
    // O NOME DA CIDADE: IMPRIME O NOME DA CIDADE, TIPO: CHAR [] STRING ...
    char cidade1 [50], cidade2 [50];
    
    // O NÚMERO DE HABITANTES DA CIDADE, TIPO: INT (IMPRIME UM INTEIRO NO FORMATO DECIMAL) ...
    // A QUANTIDADE DE PONTOS TURÍSTICOS NA CIDADE, TIPO: INT (IMPRIME UM INTEIRO NO FORMATO DECIMAL) ...
    int populacao1, populacao2, pontostu1, pontostu2;
    
    // ÁREA DA CIDADE EM QUILOMETROS QUADRADOS, TIPO: FLOAT (IMPRIME UM NÚMERO DE PONTO FLUTUANTE PADRÃO) ...
    // PIB: PRODUTO INTERNO BRUTO DA CIDADE, TIPO: FLOAT (IMPRIME UM NÚMERO DE PONTO FLUTUANTE PADRÃO) ...
    float areakm1, areakm2, pib1, pib2;

    //ENTRADA DE DADOS DA PRIMEIRA CARTA !!!

    printf("\n====================DADOS DA PRIMEIRA CARTA====================\n");
    printf("Escolha uma letra entre 'A' a 'H' para representar o Estado: ");
    // O ESPAÇO ANTES DE %c EVITA PROBLEMAS COM BUFFER DE TECLADO ...
    // %c IMPRIME UM ÚNICO CARACTERE ...
    scanf(" %c", &estado1);

    printf("A letra do estado seguida de um número de 01 a 04 (Ex: A01, B03): ");
    // %3s LIMITA A ENTRADA A 3 CARACTERES, EVITANDO ESTOURO DE BUFFER
    scanf("%3s", carta1);
    
    printf("Digite o nome da cidade: ");
    // %s IMPRIME UMA CADEIA (STRING) DE CARACTERE ...
    scanf("%s", cidade1);

    printf("Digite o número da população: ");
    // %d IMPRIME UM INTEIRO NO FORMATO DECIMAL ...
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    // %f IMPRIME UM NÚMERO DE PONTO FLUTUANTE NO FORMATO PADRÃO ...
    scanf("%f", &areakm1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontostu1);
    printf("\n==============================================================\n");

    //ENTRADA DE DADOS DA SEGUNDA CARTA !!!

    printf("\n(>>>LEMBRE-SE DE NÃO REPETIR OS DADOS DAS CARTAS!!!<<<)\n");

    printf("\n====================DADOS DA SEGUNDA CARTA====================\n");
    printf("Digite uma letra entre 'A' a 'H' para representar o Estado: ");
    // O ESPAÇO ANTES DE %c EVITA PROBLEMAS COM BUFFER DE TECLADO ...
    // %c IMPRIME UM ÚNICO CARACTERE ...
    scanf(" %c", &estado2);

    printf("A letra do estado seguida de um número de 01 a 04 (Ex: A01, B03): ");
    // %3s LIMITA A ENTRADA A 3 CARACTERES, EVITANDO ESTOURO DE BUFFER
    scanf("%3s", carta2);
    
    printf("Digite o nome da cidade: ");
    // %s IMPRIME UMA CADEIA (STRING) DE CARACTERE ...
    scanf("%s", cidade2);

    printf("Digite o número da população: ");
    // %d IMPRIME UM INTEIRO NO FORMATO DECIMAL ...
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    // %f IMPRIME UM NÚMERO DE PONTO FLUTUANTE NO FORMATO PADRÃO ...
    scanf("%f", &areakm2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontostu2);
    printf("\n==============================================================\n");

    //EXIBIÇÃO DAS INFORMAÇÕES DA PRIMEIRA CARTA !!!

    printf("\n==========EXIBIÇÃO DOS DADOS DA PRIMEIRA CARTA==========\n");
    printf("Estado: %c\n", estado1);
    printf("Código da cidade: %s\n", carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", areakm1);                // SAÍDA DE DADOS FLOAT EM 3 CASAS DECIMAIS (%.3f) ...
    printf("PIB:R$ %.2f Bilhões de reais\n", pib1);     // SAÍDA DE DADOS FLOAT EM 2 CASAS DECIMAIS (%.2f) ...
    printf("Pontos Turísticos: %d\n", pontostu1);
    printf("\n=========================================================\n");

    //EXIBIÇÃO DAS INFORMAÇÕES DA SEGUNDA CARTA !!!

    printf("\n==========EXIBIÇÃO DOS DADOS DA SEGUNDA CARTA==========\n");
    printf("Estado: %c\n", estado2);
    printf("Código da cidade: %s\n", carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", areakm2);                // SAÍDA DE DADOS FLOAT EM 3 CASAS DECIMAIS (%.3f) ...
    printf("PIB: R$ %.2f Bilhões de reais\n", pib2);     // SAÍDA DE DADOS FLOAT EM 2 CASAS DECIMAIS (%.2f) ...
    printf("Pontos Turísticos: %d\n", pontostu2);
    printf("\n=========================================================\n");

    return 0;



}
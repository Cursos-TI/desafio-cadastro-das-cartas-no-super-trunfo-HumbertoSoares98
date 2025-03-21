#include <stdio.h>

int main (){
    // ESTADO: IMPRIME UMA LETRA DE 'A' a 'H' (REPRESENTANDO UM DOS OITO ESTADOS), TIPO: CHAR (IMPRIME UM CARACTERE) ...
    char estado1, estado2;
    
    // CÓDIGO DA CARTA: IMPRIME A LETRA DO ESTADO SEGUIDA DE UM NÚMERO DE 01 a 04 (EX: A01, B03), TIPO: CHAR [] ARRAY DE CARACTERE OU STRING ...
    char carta1 [4], carta2 [4];
 
    // O NOME DA CIDADE: IMPRIME O NOME DA CIDADE, TIPO: CHAR [] STRING ...
    char cidade1 [50], cidade2 [50];
    
    // O NÚMERO DE HABITANTES DA CIDADE, TIPO: unsigned long int ...  
    unsigned long int populacao1, populacao2;

    // ÁREA DA CIDADE EM QUILOMETROS QUADRADOS, TIPO: FLOAT (IMPRIME UM NÚMERO DE PONTO FLUTUANTE PADRÃO) ...
    float areakm1, areakm2;

    // PIB: PRODUTO INTERNO BRUTO DA CIDADE, TIPO: FLOAT (IMPRIME UM NÚMERO DE PONTO FLUTUANTE PADRÃO) ...
    float pib1, pib2;

    // A QUANTIDADE DE PONTOS TURÍSTICOS NA CIDADE, TIPO: INT (IMPRIME UM INTEIRO NO FORMATO DECIMAL) ...
    int pontostu1, pontostu2;
    
    // DENSIDADE POPULACIONAL, TIPO: FLOAT (IMPRIME UM NÚMERO DE PONTO FLUTUANTE PADRÃO) ...
    float densidade1, densidade2;

    // PIB PER CAPITA, TIPO: FLOAT (IMPRIME UM NÚMERO DE PONTO FLUTUANTE PADRÃO) ...
    float percapita1, percapita2;
    
    // DECLARAÇÃO DAS VARIÁVEIS RESULTADOS PARA A COMPARAÇÃO SIMPLES ...
    int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontosTuristicos, resultadoDensidade, resultadoPibPerCapita, resultadoSuperPoder;

    // DECLARAÇÃO DA VARIÁVEL SUPER PODER ...
    float SuperPoder1, SuperPoder2;

    //ENTRADA DE DADOS DA PRIMEIRA CARTA !!!

    printf("\n====================DADOS DA PRIMEIRA CARTA====================\n");
    printf("Escolha uma letra entre 'A' a 'H' para representar o Estado: ");
    // O ESPAÇO ANTES DE %c EVITA PROBLEMAS COM BUFFER DE TECLADO ...
    // %c IMPRIME UM ÚNICO CARACTERE ...
    scanf(" %c", &estado1);

    printf("A letra do estado seguida de um número de 01 a 04 (Ex: A01, B03): ");
    // %3s LIMITA A ENTRADA A 3 CARACTERES, EVITANDO ESTOURO DE BUFFER
    scanf("%3s", carta1);
    getchar(); // LIMPEZA DO BUFFER DE TECLADO ...
    printf("Digite o nome da cidade: ");
    // FGETS LÊ STRINGS COM ESPAÇOS EM BRANCO ...
    fgets(cidade1, 50, stdin);// LÊ NO MÁXIMO 49 CARACTERES DA ENTRADA PADRÃO (STDIN) ...

    printf("Digite o número da população: ");
    // %d IMPRIME UM INTEIRO NO FORMATO DECIMAL ...
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    // %f IMPRIME UM NÚMERO DE PONTO FLUTUANTE NO FORMATO PADRÃO ...
    scanf("%f", &areakm1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontostu1);

    // CÁLCULO DA DENSIDADE POPULACIONAL ...
    densidade1 = (float)populacao1 / areakm1;

    // MULTIPLICAÇÃO DO PIB POR 1 BILHÃO ...
    // COMO QUEREMOS O VALOR DO PIB EM REAIS (E NÃO EM BILHÕES), MULTIPLICAMOS O NÚMERO FORNECIDO POR 1.000.000.000 OU (1e9) ...
    percapita1 = (pib1 * 1e9) / (float)populacao1;

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
    getchar();// LIMPEZA DO BUFFER DE TECLADO ...
    printf("Digite o nome da cidade: ");
    // FGETS LÊ STRINGS COM ESPAÇOS EM BRANCO ...
    fgets(cidade2, 50, stdin);// LÊ NO MÁXIMO 49 CARACTERES DA ENTRADA PADRÃO (STDIN) ...

    printf("Digite o número da população: ");
    // %d IMPRIME UM INTEIRO NO FORMATO DECIMAL ...
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    // %f IMPRIME UM NÚMERO DE PONTO FLUTUANTE NO FORMATO PADRÃO ...
    scanf("%f", &areakm2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontostu2);

    // CÁLCULO DA DENSIDADE POPULACIONAL ...
    densidade2 = (float)populacao2 / areakm2;

    // MULTIPLICAÇÃO DO PIB POR 1 BILHÃO ...
    // COMO QUEREMOS O VALOR DO PIB EM REAIS (E NÃO EM BILHÕES), MULTIPLICAMOS O NÚMERO FORNECIDO POR 1.000.000.000 OU (1e9) ...
    percapita2 = (pib2 * 1e9) / (float)populacao2;

    printf("\n==============================================================\n");

    //EXIBIÇÃO DAS INFORMAÇÕES DA PRIMEIRA CARTA !!!

    printf("\n==========EXIBIÇÃO DOS DADOS DA PRIMEIRA CARTA==========\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da cidade: %s\n", carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", areakm1);                // SAÍDA DE DADOS FLOAT EM 2 CASAS DECIMAIS (%.2f) ...
    printf("PIB:R$ %.2f Bilhões de reais\n", pib1);     // SAÍDA DE DADOS FLOAT EM 2 CASAS DECIMAIS (%.2f) ...
    printf("Pontos Turísticos: %d\n", pontostu1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);
    printf("\n=========================================================\n");

    //EXIBIÇÃO DAS INFORMAÇÕES DA SEGUNDA CARTA !!!

    printf("\n==========EXIBIÇÃO DOS DADOS DA SEGUNDA CARTA==========\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da cidade: %s\n", carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);                // SAÍDA DE DADOS FLOAT EM 2 CASAS DECIMAIS (%.2f) ...
    printf("PIB: R$ %.2f Bilhões de reais\n", pib2);     // SAÍDA DE DADOS FLOAT EM 2 CASAS DECIMAIS (%.2f) ...
    printf("Pontos Turísticos: %d\n", pontostu2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapita2);
    printf("\n=========================================================\n");

    // SOMANDO TODOS OS ATRIBUTOS NÚMERICOS ...
    SuperPoder1 = populacao1 + areakm1 + pib1 + pontostu1 + percapita1 + (1 / densidade1);
    SuperPoder2 = populacao2 + areakm2 + pib2 + pontostu2 + percapita2 + (1 / densidade2);

    // COMPARAÇÃO SIMPLES ...
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = areakm1 > areakm2;
    resultadoPib = pib1 > pib2;
    resultadoPontosTuristicos = pontostu1 > pontostu2;
    resultadoDensidade = densidade1 < densidade2;
    resultadoPibPerCapita = percapita1 > percapita2;
    resultadoSuperPoder = SuperPoder1 > SuperPoder2;

    // EXIBIÇÃO DA COMPARAÇÃO SIMPLES ENTRE AS DUAS CARTAS ...

    printf("\n=============COMPARAÇÃO SIMPLES DAS CARTAS=============\n");
    printf("População: carta (%d) venceu\n", resultadoPopulacao);
    printf("Área: carta (%d) venceu\n", resultadoArea);
    printf("PIB: carta (%d) venceu\n", resultadoPib);
    printf("Pontos Turisticos: carta (%d) venceu\n", resultadoPontosTuristicos);
    printf("Densidade Populacional: carta (%d) venceu\n", resultadoDensidade);
    printf("PIB per Capita: carta (%d) venceu\n", resultadoPibPerCapita);
    printf("Super Poder: carta (%d) venceu\n", resultadoSuperPoder);
    printf("\n=========================================================\n");

    return 0;

}
#include <stdio.h>

// Variáveis globais para que eu possa acessar em todas as funções
char Estado = 'S';
char codigocarta[4] = "A01";
char nomeCidade[50] = "Sao_Paulo";
int populacao = 123000;
float AreaKM = 1521.11;
float PIB = 34568765.00;
int pontosturisticos = 15;
float densidadePopulacional = 0;
float PIBperCapita = 0;

char Estado2 = 'B';
char codigocarta2[4] = "B01";
char nomeCidade2[50] = "Salvador";
int populacao2 = 2800000;
float AreaKM2 = 693.28;
float PIB2 = 1235488.0;
int pontosturisticos2 = 10;
float densidadePopulacional2 = 0;
float PIBperCapita2 = 0;

// Apresentação do game
void apresentacao() {
    printf("_________________\n");
    printf("--SUPER-TRUNFO--\n");
    printf("-----------------\n");
    printf("\nBem-vindo ao Super Trunfo!\n");
}

// função que exibe as informações das cartas
// carta 01
void exibirResult1() { //exibe os valores da carta 1
    // Calcula a densidade populacional e PIBpercapta
    densidadePopulacional = (float)populacao / AreaKM;
    PIBperCapita = (float)PIB / populacao;
    densidadePopulacional2 = (float)populacao2 / AreaKM2;
    PIBperCapita2 = (float)PIB2 / populacao2;

    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\n",
           nomeCidade, populacao, AreaKM, PIB, pontosturisticos, densidadePopulacional, PIBperCapita);
}

//Carta 02
void exibirResult2() { //exibe os valores da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\n",
           nomeCidade2, populacao2, AreaKM2, PIB2, pontosturisticos2, densidadePopulacional2, PIBperCapita2);
}

// Compara dois atributos e retorna resultado (1 = carta1, 2 = carta2, 0 = empate)
int comparar(int atributo, float valor1, float valor2) {
    if (atributo == 5) {
        return (valor1 < valor2) ? 1 : (valor2 < valor1) ? 2 : 0; // menor vence
    } else {
        return (valor1 > valor2) ? 1 : (valor2 > valor1) ? 2 : 0; // maior vence
    }
}


void compararDoisAtributos() { //função que verifica os atributos, se são iguais ou não e exibe o resultado com base nas escolhas
    int atributo1, atributo2;
    float valor1_a, valor1_b, soma1, soma2;
    int resultado1, resultado2, vencedor;

    
    // Menu do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n");
    scanf("%d", &atributo1);

    // Menu do segundo atributo (evitando repetição)
    do  { //uma linha de comando que aprendi enquanto pesquisava sobre a linguagem C - ela faz uma ação e quando finaliza, caso a condição de while seja verdadeira, o laço irá se repetir
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        switch (atributo1) { //switch que verifica que mostra as alternativas novamente sem a escolhida anteriormente
            case 1:
                printf("2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n");
                break;
            case 2:
                printf("1 - População\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n");
                break;
            case 3:
                printf("1 - População\n2 - Área\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n");
                break;
            case 4:
                printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade Demográfica\n6 - PIB per Capita\n");
                break;
            case 5:
                printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n6 - PIB per Capita\n");
                break;
            case 6:
                printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
        scanf("%d", &atributo2);
        if (atributo2 == atributo1) printf("\nVocê deve escolher dois atributos diferentes.\n"); // caso os atributos forem iguais, essa mensagem aparecerá
    } while (atributo2 == atributo1); // se depois dessas linhas de código, os atributos escolhidos forem os mesmos, o laço irá se repetir

    // armazenas os valores do primeiro atributo da carta 1
    switch (atributo1) {
        case 1: valor1_a = populacao; break;
        case 2: valor1_a = AreaKM; break;
        case 3: valor1_a = PIB; break;
        case 4: valor1_a = pontosturisticos; break;
        case 5: valor1_a = densidadePopulacional; break;
        case 6: valor1_a = PIBperCapita; break;
        default: valor1_a = 0; break;
    }
    // armazena os valores do segundo atributo da carta 1
    switch (atributo2) {
        case 1: valor1_b = populacao; break;
        case 2: valor1_b = AreaKM; break;
        case 3: valor1_b = PIB; break;
        case 4: valor1_b = pontosturisticos; break;
        case 5: valor1_b = densidadePopulacional; break;
        case 6: valor1_b = PIBperCapita; break;
        default: valor1_b = 0; break;
    }

    // armazenas os valores do primeiro atributo da carta 2
    float valor2_a, valor2_b;
    switch (atributo1) {
        case 1: valor2_a = populacao2; break;
        case 2: valor2_a = AreaKM2; break;
        case 3: valor2_a = PIB2; break;
        case 4: valor2_a = pontosturisticos2; break;
        case 5: valor2_a = densidadePopulacional2; break;
        case 6: valor2_a = PIBperCapita2; break;
        default: valor2_a = 0; break;
    }
    // armazena os valores do segundo atributo da carta 2
    switch (atributo2) {
        case 1: valor2_b = populacao2; break;
        case 2: valor2_b = AreaKM2; break;
        case 3: valor2_b = PIB2; break;
        case 4: valor2_b = pontosturisticos2; break;
        case 5: valor2_b = densidadePopulacional2; break;
        case 6: valor2_b = PIBperCapita2; break;
        default: valor2_b = 0; break;
    }

    // Compara os dois atributos separadamente
    resultado1 = comparar(atributo1, valor1_a, valor2_a);
    resultado2 = comparar(atributo2, valor1_b, valor2_b);

    // Soma os valores
    soma1 = valor1_a + valor1_b;
    soma2 = valor2_a + valor2_b;

    // Exibe resultados
    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
    printf("%s: %.2f + %.2f = %.2f\n", nomeCidade, valor1_a, valor1_b, soma1);
    printf("%s: %.2f + %.2f = %.2f\n", nomeCidade2, valor2_a, valor2_b, soma2);

    // Determina vencedor
    vencedor = (soma1 > soma2) ? 1 : (soma2 > soma1) ? 2 : 0;
    if (vencedor == 1) {
        printf("Vencedora: Carta 1 (%s)\n", nomeCidade);
    } else if (vencedor == 2) {
        printf("Vencedora: Carta 2 (%s)\n", nomeCidade2);
    } else {
        printf("Empate!\n");
    }
}

int main() { //função principal que controla o fluxo das demais funções
    apresentacao();
    exibirResult1();
    exibirResult2();
    compararDoisAtributos();
}
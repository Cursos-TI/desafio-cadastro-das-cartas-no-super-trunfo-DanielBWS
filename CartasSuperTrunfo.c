
#include <stdio.h>

//criando as variáveis globais para que todas as funções possam ter acesso
//Primeira Carta
char Estado;
char codigocarta[4] = "A01";
char nomeCidade[50];
int populacao;
float AreaKM;
float PIB;
int pontosturisticos;
float densidadePopulacional;
float PIBperCapita;

//Segunda Carta
char Estado2;
char codigocarta2[4] = "B01";
char nomeCidade2[50];
int populacao2;
float AreaKM2;
float PIB2;
int pontosturisticos2;
float densidadePopulacional2;
float PIBperCapita2;

float superpoder, superpoder2;
int resultado;
int resultado2;

//Calcula o super poder das cartas
void calcularsuperpoder(){
    superpoder = (int)(populacao + AreaKM + PIB + PIBperCapita + (1.0 / densidadePopulacional));
    superpoder2 = (int)(populacao2 + AreaKM2 + PIB2 + PIBperCapita2 + (1.0 / densidadePopulacional2));
}

//Apresentando o jogo
void apresentacao(){
    printf("_________________\n");
    printf("--SUPER-TRUNFO--\n");
    printf("-----------------\n");
    printf("\n");
    printf("Bem-vindo ao Super Trunfo, um jogo de cartas onde você pode comparar cidades do Brasil!\n");
    printf("Cada carta representa uma cidade com informações como população, área, PIB e pontos turísticos.\n");
    printf("Você pode escolher até 2 cartas para jogar.\n");
    printf("Vamos começar!\n\n");
}

//Função que registra os valores da primeira carta
void registrarcarta1(){
    //Coletando informações da primeira carta
    printf("Informe a letra que representa o primeiro estado: ");
    scanf(" %c", &Estado); // não preciso utilizar & em arrays
    printf("%c registrado com sucesso!\n\n", Estado);

    

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade); 
    printf("Cidade %s registrada com sucesso!\n\n", nomeCidade);

    printf("Digite a população: ");
    scanf(" %d", &populacao); //é Extremamente necessário utilizar em valores inteiros e flutuantes
    printf("População %d registrada com sucesso!\n\n", populacao);

    printf("Digite a área em KM²: ");
    scanf(" %f", &AreaKM);
    printf("Área %.2f KM² registrada com sucesso!\n\n", AreaKM);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB);
    printf("PIB %.2f registrado com sucesso!\n\n", PIB);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosturisticos);
    printf("Pontos turísticos %d registrados com sucesso!\n\n", pontosturisticos);

    // Calculando densidade populacional e PIB per capita da primeira carta
    densidadePopulacional = (float)populacao / AreaKM;
    PIBperCapita = (float)PIB / populacao;
}

//Função que registra os valores da segunda carta
void registrarcarta2(){
    // Coletando informações da segunda carta
    printf("Informe a letra que representa o segundo estado: ");
    scanf(" %c", &Estado2); // não preciso utilizar & em arrays
    printf(" %c registrado com sucesso!\n\n", Estado2);


    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade2);
    printf("Cidade %s registrada com sucesso!\n\n", nomeCidade2);

    printf("Digite a população: ");
    scanf(" %d", &populacao2);
    printf("População %d registrada com sucesso!\n\n", populacao2);

    printf("Digite a área em KM²: ");
    scanf(" %f", &AreaKM2);
    printf("Área %.2f KM² registrada com sucesso!\n\n", AreaKM2);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB2);
    printf("PIB %.2f registrado com sucesso!\n\n", PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosturisticos2);
    printf("Pontos turísticos %d registrados com sucesso!\n\n", pontosturisticos2);

    // Calculando densidade populacional e PIB per capita da segunda carta
    densidadePopulacional2 = (float)populacao2 / AreaKM2;
    PIBperCapita2 = (float)PIB2 / populacao2;
}

//Função que exibe os resultados da primeira carta
void exibirResult1(){
    printf("\n===== RESULTADO DAS CARTAS =====\n");
    
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", codigocarta);
    printf("Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área (KM²): %.2f\n", AreaKM);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turísticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita);

}

//Função que exibe os resultados da segunda carta
void exibirResult2(){
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área (KM²): %.2f\n", AreaKM2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
}

void calcularresultados(){
    printf("\n\nComparando as cartas...\n\n");
    //preciso apenas calcular o resultado dessas cartas, as anteriores são mais de identificação

    resultado = populacao > populacao2;
    resultado2 = populacao2 > populacao;
    printf("Carta01: População: %d --- Carta02: População: %d\n", populacao, populacao2);
    printf("Carta 01: %d ponto x Carta 02: %d ponto\n\n", resultado, resultado2);

    resultado = AreaKM > AreaKM2;
    resultado2 = AreaKM2 > AreaKM;
    printf("Carta01: Área: %.2f km² --- Carta02: Área: %.2f km²\n", AreaKM, AreaKM2);
    printf("Carta 01: %d ponto x Carta 02: %d ponto\n\n", resultado, resultado2);

    resultado = PIB > PIB2;
    resultado2 = PIB2 > PIB;
    printf("Carta01: PIB: %.2f --- Carta02: PIB: %.2f \n", PIB, PIB2);
    printf("Carta 01: %d ponto x Carta 02: %d ponto\n\n", resultado, resultado2);

    resultado = pontosturisticos > pontosturisticos2;
    resultado2 = pontosturisticos2 > pontosturisticos;
    printf("Carta01: Pontos Turísticos: %d --- Carta02: Pontos Turísticos: %d \n", pontosturisticos, pontosturisticos2);
    printf("Carta 01: %d ponto x Carta 02: %d ponto\n\n", resultado, resultado2);

    resultado = densidadePopulacional < densidadePopulacional2;
    resultado2 = densidadePopulacional2 < densidadePopulacional;
    printf("Carta01: Densidade populacional: %.2f --- Carta02: Densidade populacional: %.2f \n", densidadePopulacional, densidadePopulacional2);
    printf("Carta 01: %d ponto x Carta 02: %d ponto\n\n", resultado, resultado2);


    resultado = PIBperCapita > PIBperCapita2;
    resultado2 = PIBperCapita2 > PIBperCapita;
    printf("Carta01: PIB per Capita: %.2f --- Carta02: PIB per Capita: %.2f \n", PIBperCapita, PIBperCapita2);
    printf("Carta 01: %d ponto x Carta 02: %d ponto\n\n", resultado, resultado2);  

    resultado = superpoder > superpoder2;
    resultado2 = superpoder2 > superpoder;
    printf("Carta01: Super Poder: %.2f --- Carta02: Super Poder: %.2f \n", superpoder, superpoder2);
    printf("Carta 01: %d ponto x Carta 02: %d ponto\n\n", resultado, resultado2); 
}

//Função principal que executa as demais funções
int main(){
    //resultado = carta1 > carta2
    

    apresentacao(); //apresenta
    registrarcarta1(); //registra a carta 01
    registrarcarta2(); //registra a carta 02
    calcularsuperpoder(); //calcula o super poder
    exibirResult1(); //exibe o resultado 01
    exibirResult2(); //exibe o resultado 02
    calcularresultados(); // calcula e compara os resultados
    
}
#include <stdio.h>

//criando as variáveis globais para que todas as funções possam ter acesso
//Primeira Carta
char Estado[50];
char codigocarta[10];
char nomeCidade[50];
int populacao;
float AreaKM;
float PIB;
int pontosturisticos;
float densidadePopulacional;
float PIBperCapita;

//Segunda Carta
char Estado2[50];
char codigocarta2[10];
char nomeCidade2[50];
int populacao2;
float AreaKM2;
float PIB2;
int pontosturisticos2;
float densidadePopulacional2;
float PIBperCapita2;


//Apresentando o jogo
void apresentacao(){
    printf("_________________\n");
    printf("--SUPER-TRUNFO--\n");
    printf("-----------------\n");
    printf("\n");
    printf("Bem-vindo ao Super Trunfo, um jogo de cartas onde você pode comparar cidades do Brasil!\n");
    printf("Cada carta representa uma cidade com informações como população, área, PIB e pontos turísticos.\n");
    printf("Você pode escolher até 4 cartas para jogar.\n");
    printf("Vamos começar!\n\n");
}

//Função que registra os valores da primeira carta
void registrarcarta1(){
    //Coletando informações da primeira carta
    printf("Informe o nome do estado: ");
    scanf(" %s", Estado); // não preciso utilizar & em arrays
    printf("%s registrado com sucesso!\n\n", Estado);
    
    printf("Digite o CÓDIGO da carta: ");
    scanf(" %s", codigocarta); 
    printf("O código %s foi resgistrado com sucesso!\n\n", codigocarta);

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
    printf("\n\nInforme o nome do estado: ");
    scanf(" %s", Estado2); 
    printf("%s registrado com sucesso!\n\n", Estado2);

    printf("Digite o CÓDIGO da carta: ");
    scanf(" %s", codigocarta2);
    printf("O código foi registrado com sucesso!\n\n");

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
    printf("Estado: %s\n", Estado);
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
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área (KM²): %.2f\n", AreaKM2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
}

//Função principal que executa as demais funções
int main(){
    
    apresentacao();

    registrarcarta1();
    registrarcarta2();

    exibirResult1();
    exibirResult2();
}
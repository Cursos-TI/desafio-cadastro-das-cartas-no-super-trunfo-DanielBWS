// #include <stdio.h>

// // Desafio Super Trunfo - Países
// // Tema 1 - Cadastro das Cartas
// // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// // Siga os comentários para implementar cada parte do desafio.
// //Teste larissa

// int main() {
//     // Sugestão: Defina variáveis separadas para cada atributo da cidade.
//     // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
//     // Cadastro das Cartas:
//     // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
//     // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
//     // Exibição dos Dados das Cartas:
//     // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
//     // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//     return 0;
// }
#include <stdio.h>

int main(){
    //criando as variáveis que serão utilizadas na primeira carta
    char Estado[50];
    char codigocarta[10];
    char nomeCidade[50];
    int populacao;
    float AreaKM;
    float PIB;
    int pontosturisticos;

    // criando as variáveis que serão utilizadas na segunda carta
    char Estado2[50];
    char codigocarta2[10];
    char nomeCidade2[50];
    int populacao2;
    float AreaKM2;
    float PIB2;
    int pontosturisticos2;


    //Apresentando o jogo
    printf("_________________\n");
    printf("--SUPER-TRUNFO--\n");
    printf("-----------------\n");
    printf("\n");
    printf("Bem-vindo ao Super Trunfo, um jogo de cartas onde você pode comparar cidades do Brasil!\n");
    printf("Cada carta representa uma cidade com informações como população, área, PIB e pontos turísticos.\n");
    printf("Você pode escolher até 4 cartas para jogar.\n");
    printf("Vamos começar!\n\n");

    //Coletando informações da primeira carta
    printf("\n\nInforme o nome do estado: ");
    scanf(" %s", &Estado); //Realiza a entrada de dados na Variável estado
    printf("%s registrado com sucesso!\n\n", Estado);
    
    printf("Digite o CÓDIGO da carta:");
    scanf(" %s",&codigocarta); //Realiza a entrada de dados na Variável codigocarta
    printf("O código %s foi resgistrado com sucesso!\n\n", codigocarta);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &nomeCidade);//Realiza a entrada de dados na Variável nomecidade
    printf("Cidade %s registrada com sucesso!\n\n", nomeCidade);

    printf("Digite a população: ");
    scanf(" %d", &populacao);//Realiza a entrada de dados na Variável população
    printf("População %d registrada com sucesso!\n\n", populacao);

    printf("Digite a área em KM²: ");
    scanf(" %f", &AreaKM);//Realiza a entrada de dados na Variável Area
    printf("Área %.2f KM² registrada com sucesso!\n\n", AreaKM);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB);//Realiza a entrada de dados na Variável PIB
    printf("PIB %.2f registrado com sucesso!\n\n", PIB);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosturisticos);//Realiza a entrada de dados na Variável pontos turístivos
    printf("Pontos turísticos %d registrados com sucesso!\n\n", pontosturisticos);
    printf("a primeira carta foi registrada com sucesso!\n");


    // Coletando informações da segunda carta
    printf("\n\nInforme o nome do segundo estado: ");
    scanf(" %s", &Estado2);//Realiza a entrada de dados na Variável estado2
    printf("%s registrado com sucesso!\n\n", Estado2);

    printf("Digite o CÓDIGO da carta: ");
    scanf(" %s", &codigocarta2);//Realiza a entrada de dados na Variável codigo carta 2
    printf("O código foi registrado com sucesso!\n\n");

    printf("Digite o nome da cidade: ");
    scanf(" %s", &nomeCidade2);//Realiza a entrada de dados na Variável Nome cidade2
    printf("Cidade %s registrada com sucesso!\n\n", nomeCidade2);

    printf("Digite a população: ");
    scanf(" %d", &populacao2);//Realiza a entrada de dados na Variável População 2
    printf("População %d registrada com sucesso!\n\n", populacao2);

    printf("Digite a área em KM²: ");
    scanf(" %f", &AreaKM2);//Realiza a entrada de dados na Variável Area2
    printf("Área %.2f KM² registrada com sucesso!\n\n", AreaKM2);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB2);//Realiza a entrada de dados na Variável PIB2
    printf("PIB %.2f registrado com sucesso!\n\n", PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosturisticos2);//Realiza a entrada de dados na Variável Pontosturisticos2
    printf("Pontos turísticos %d registrados com sucesso!\n\n", pontosturisticos2);
    printf("a segunda carta foi registrada com sucesso!\n");


    printf("\n===== RESULTADO DAS CARTAS =====\n"); //a partir daqui o programa exibirá o resultado das cartas

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", codigocarta);
    printf("Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área (KM²): %.2f\n", AreaKM);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turísticos: %d\n", pontosturisticos);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área (KM²): %.2f\n", AreaKM2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
}
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Daniel



int main() {
    /*
    Daniel: Estou definindo as variáveis que irei utilizar para salvar os dados cadastrados.
    Daniel: Estou inicializando as variáveis para evitar possíveis erros de compilação     */

    char Pais[50] = "..";
    char Estado = "A";
    char NomeCidade[50] = "1";
    char CodigoCarta[5] = "A1";
    float Populacao = 0.0;
    float Area = 0.0;
    float PIB = 0.0;
    int NumPontosTuristicos = 0;
    float DesidadePopulacional, PIBPerCapta;

    char Pais2[50] = "..";
    char Estado2 = "B";
    char NomeCidade2[50] = "1";
    char CodigoCarta2[5] = "B1";
    float Populacao2 = 0.0;
    float Area2 = 0.0;
    float PIB2 = 0.0;
    int NumPontosTuristicos2 = 0;
    float DesidadePopulacional2, PIBPerCapta2, SuperPoder1, SuperPoder2;

    // Cadastro das Cartas:
    //Daniel: Estou programando a área de cadastro das Cartas.

    printf("Teste1\n\n\n");

    //Registrar Nome País:
    printf("Escreva o Nome do Primeiro País!\n");
    scanf("%s", &Pais);

    //Mensagem de confirmaçao de registro
    printf("\n\n!!!%s Registrado com sucesso!!!\n\n",Pais);

    //Registrar População:
    printf("\n\nAgora quanto é o número populacional da cidade %s \n", CodigoCarta);
    scanf(" %f", &Populacao);

    //Registrar Área:
    printf("\n\nQual a Área da Cidade %s?\n", CodigoCarta);
    scanf(" %f", &Area);

    //Reegistrar PIB:
    printf("\n\nQual o PIB da cidade %s?\n", CodigoCarta);
    scanf(" %f", &PIB);

    //Registrar Pontos Turísticos:
    printf("\n\nQuantos pontos turísticos %s possui?\n", CodigoCarta);
    scanf(" %d", &NumPontosTuristicos);

    //Calculo de Densidade Populacional e PIB Per Capta
    DesidadePopulacional = (float) Populacao / Area;
    PIBPerCapta = (float) PIB / Populacao;


    //Mensagem de confirmação de registro
    printf(" \n\n\n---CIDADE %s REGISTRADA COM SUCESSO NO SISTEMA---\n\n\n", CodigoCarta);


    //Registrar Nome do segundo país:
    printf("Escreva o Nome do Segundo País!\n");
    scanf("%s", &Pais2);

    //Confirmação de registro segundo país
    printf("\n\n!!!%s Registrado com sucesso!!!\n\n",Pais2);

    //Registrar População2:
    printf("\n\nAgora quanto é o número populacional da cidade %s?\n", CodigoCarta2);
    scanf(" %f", &Populacao2);

    //Registrar Área2:
    printf("\n\nQual a Área da Cidade %s?\n", CodigoCarta2);
    scanf(" %f", &Area2);

    //Reegistrar PIB2:
    printf("\n\nQual o PIB da cidade de %s?\n", CodigoCarta2);
    scanf(" %f", &PIB2);

    //Registrar Pontos Turísticos2:
    printf("\n\nQuantos pontos turísticos %s possui?\n", CodigoCarta2);
    scanf(" %d", &NumPontosTuristicos2);

    //confirmação de registro cidade2
    printf(" \n\n\n---CIDADE %s REGISTRADA COM SUCESSO NO SISTEMA---\n\n\n", CodigoCarta2);

    //Calculo de Densidade Populacional e PIB Per Capta
    DesidadePopulacional2 = (float) Populacao2 / Area2;
    PIBPerCapta2 = (float) PIB2 / Populacao2;
    
    //Calculo de Super poder
    SuperPoder1 = (float) Populacao + PIB + Area + PIBPerCapta + DesidadePopulacional + NumPontosTuristicos;
    SuperPoder2 = (float) Populacao2 + PIB2 + Area2 + PIBPerCapta2 + DesidadePopulacional2 + NumPontosTuristicos2;

    printf("\n\n!!!EXIBINDO RESULTADOS!!!\n\n");

    //Exibir os reesultados
    printf("\n\nID: %s VS %s\n", CodigoCarta, CodigoCarta2);
    printf("País: %s VS %s\n", Pais, Pais2);
    printf("Estado: A VS B\n", Estado, Estado2);
    printf("Cidade: 1 VS 1\n", NomeCidade, NomeCidade2);
    printf("População: %.2f VS %.2f\n", Populacao, Populacao2);
    printf("Área: %.2fKm² VS %.2fKm²\n", Area, Area2);
    printf("Densidade Populacional: %.2f VS %.2f\n", DesidadePopulacional, DesidadePopulacional2);
    printf("PIB per Capita: %.2f VS %.2f\n", PIBPerCapta, PIBPerCapta2);
    printf("PIB: %.2f VS %.2f\n", PIB, PIB2);
    printf("Pontos Turísticos: %d VS %d\n", NumPontosTuristicos, NumPontosTuristicos2);
    printf("SuperPoder: %.2f VS %.2f\n\n\n", SuperPoder1, SuperPoder2);

    //Indicar que o Programa Finalizou!
    printf("\n\n!!!FIM DO PROGRAMA!!!\n\n");

    return 0;
    }

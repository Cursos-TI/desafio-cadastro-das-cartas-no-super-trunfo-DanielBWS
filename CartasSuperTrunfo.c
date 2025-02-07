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
    char Estado = "..";
    char NomeCidade[50] = "..";
    char CodigoCarta[5] = "..";
    float Populacao = 0.0;
    float Area = 0.0;
    float PIB = 0.0;
    int NumPontosTuristicos = 0;
    float DesidadePopulacional, PIBPerCapta;
    
    // Cadastro das Cartas:
    //Daniel: Estou programando a área de cadastro das Cartas.

    //Registrar Nome País:
    printf("Qual nome do País que deseja cadastrar?\n");
    scanf(" %s", &Pais);

    //Registrar Letra Estado:
    printf("\n\nQual a Letra do Estado que deseja cadastrar?\n");
    scanf(" %c", &Estado);

    //Registrar Nome Cidade:
    printf("\n\nQual Cidade do estado %c que deseja cadastrar?\n", Estado);
    scanf(" %s", &NomeCidade);
    
    //Registrar Código Cidade:
    printf("\n\n%s é uma ótima escolha, Agora qual o código do estado?\n", NomeCidade);
    scanf(" %s", &CodigoCarta);
    
    //Registrar População:
    printf("\n\nAgora quanto é o número populacional da cidade %s? - %s \n", CodigoCarta, NomeCidade);
    scanf(" %f", &Populacao);

    //Registrar Área:
    printf("\n\nQual a Área da Cidade %s?\n", NomeCidade);
    scanf(" %f", &Area);

    //Reegistrar PIB:
    printf("\n\nQual o PIB da cidade de %s?\n", NomeCidade);
    scanf(" %f", &PIB);

    //Registrar Pontos Turísticos:
    printf("\n\nQuantos pontos turísticos %s possui?\n", NomeCidade);
    scanf(" %d", &NumPontosTuristicos);

    DesidadePopulacional = (float) Populacao / Area;
    PIBPerCapta = (float) PIB / Populacao;

    //Daniel: Agora irei exibir os reesultados
    printf("\n\nID: %s \n", CodigoCarta);
    printf("País: %s\n", Pais);
    printf("Estado: %c\n", Estado);
    printf("Cidade: %s\n", NomeCidade);
    printf("População: %.2f\n", Populacao);
    printf("Área: %.2fKm²\n", Area);
    printf("Densidade Populacional: %.2f\n", DesidadePopulacional);
    printf("PIB per Capita: %.2f\n", PIBPerCapta);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turísticos: %d\n\n\n", NumPontosTuristicos);
    
    

    /*Daniel: Resultado exibido no Terminal:
    ID: A1 
    País: Brasil
    Estado: A
    Cidade: Santana
    População: 750345.00
    Área: 450983.00Km²
    Densidade Populacional: 1.66
    PIB per Capita: 26.65
    PIB: 20000344.00
    Pontos Turísticos: 8
    */

    return 0;
}

#include <stdio.h>

// --------------------------------------------
// Função recursiva para movimentar a Torre
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;

    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// --------------------------------------------
// Função recursiva para movimentar a Rainha
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;

    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// --------------------------------------------
// função recursiva com loop aninhado para o Bispo
// ele se move na diagonal, então é uma combinação
// de cima + direita
void moverBispo(int casas) {
    if (casas == 0) return;

    // Loop aninhado representando os eixos
    for (int vertical = 0; vertical < 1; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva para a próxima casa
}

// --------------------------------------------
// Movimento complexo do Cavalo: "L" para cima e direita
// 2 casas para cima + 1 para a direita
void moverCavalo() {
    printf("Movimento do Cavalo (2 casas para Cima, 1 para a Direita):\n");

    // Simulando múltiplas variáveis e controle de fluxo com break e continue
    for (int i = 0; i < 3; i++) {
        // Vamos pular o último passo com continue
        if (i == 2) {
            continue; // na nossa simulação, só há 2 passos verticais
        }
        printf("Cima\n");
    }

    // Agora o movimento final para a direita ->
    for (int j = 0; j < 2; j++) {
        if (j == 1) {
            printf("Direita\n");
            break; // só queremos uma vez :)
        }
    }

    printf("\n");
}

int main() { //Funçao principal que executa as outras funções
    //Move a Torre
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(5);
    printf("\n");

    //Move o Bispo
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    moverBispo(5);
    printf("\n");

    //Mover a Rainha
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(8);
    printf("\n");

    //Mover o Cavalo
    moverCavalo();

    return 0;
}

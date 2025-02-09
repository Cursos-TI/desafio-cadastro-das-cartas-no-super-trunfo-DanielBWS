#include <stdio.h>

int main(){

    float a1, b1, a2, b2;
    float soma1;
    float soma2;
    int result;
    
    printf("Digite o Valor A1\n");
    scanf(" %f ", &a1);

    printf("Digite o Valor b1\n");
    scanf(" %f", &b1);

    printf("Digite o Valor A2\n");
    scanf(" %f", &a2);

    printf("Digite o Valor B2\n");
    scanf("%f", &b2);

    soma1 = (float) a1 + b1;
    soma2 = (float) a2 + b2;

    result = (soma1 = soma2) ? 1 : 0;


    printf("%d\n\n\n\n", result);
    

}
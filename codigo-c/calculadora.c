#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float a, b, c;
    float peso1, peso2;

    printf("Digite 1 para soma, 2 para subtracao, 3 para multiplicacao, 4 para divisao, 5 para potencia, 6 para media aritmetica, 7 produto mais soma, 8 para dobro de a mais b, 9 porcentagem de a sobre b, 10 triplo de a menos b, 11 media ponderada, 12 soma dos quadrados, 13 distancia entre dois valores, 14 Celsius para Fahreinheit, 15 potencia a elevado a b, 16 area do triangulo, 17 conversao de Fahreinheit para Celsius, 18 area do Retangulo, 19 preco com desconto percentual, 20 preco com acrescimo percentual.\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        // 1 - Soma
        printf("digite o valor de a\n");
        scanf("%f", &a);
        printf("digite o valor de b\n");
        scanf("%f", &b);
        c = a + b;
        printf("%f\n", c);
    } 
    else if (opcao == 2) {
        // 2 - Subtração
        printf("digite o valor de a\n");
        scanf("%f", &a);
        printf("digite o valor de b\n");
        scanf("%f", &b);
        c = a - b;
        printf("%f\n", c);
    } 
    else if (opcao == 3) {
        // 3 - Multiplicação
        printf("digite o valor de a\n");
        scanf("%f", &a);
        printf("digite o valor de b\n");
        scanf("%f", &b);
        c = a * b;
        printf("%f\n", c);
    } 
    else if (opcao == 4) {
        // 4 - Divisão
        printf("digite o valor de a\n");
        scanf("%f", &a);
        printf("digite o valor de b\n");
        scanf("%f", &b);
        if (b != 0) {
            c = a / b;
            printf("%f\n", c);
        } else {
            printf("Erro: divisao por zero\n");
        }
    } 
    else if (opcao == 5) {
        // 5 - Potência
        printf("digite o valor de a\n");
        scanf("%f", &a);
        printf("digite o valor de b\n");
        scanf("%f", &b);
        c = pow(a, b);
        printf("%f\n", c);
    } 
    else if (opcao == 6) {
        // 6 - Média aritmética
        printf("digite o valor de a\n");
        scanf("%f", &a);
        printf("digite o valor de b\n");
        scanf("%f", &b);
        c = (a + b) / 2.0;
        printf("%f\n", c);
    } 
    else if (opcao == 7) {
        // 7 - Produto mais soma
        printf("digite o valor de a\n");
        scanf("%f", &a);
        printf("digite o valor de b\n");
        scanf("%f", &b);
        c = (a * b) + (a + b);
        printf("%f\n", c);
    } 
    else if (opcao == 8) {
        // 8 - Dobro de a mais b
        printf("digite o valor de a\n");
        scanf("%f", &a);
        printf("digite o valor de b\n");
        scanf("%f", &b);
        c = (2 * a) + b;
        printf("%f\n", c);
    } 
    else if (opcao == 9) {
        // 9 - Porcentagem de a sobre b
        printf("digite o valor de a\n");
        scanf("%f", &a);
        printf("digite o valor de b\n");
        scanf("%f", &b);
        if (b != 0) {
            c = (a / b) * 100.0;
            printf("%f\n", c);
        } else {
            printf("Erro: b nao pode ser zero\n");
        }
    } 
    else if (opcao == 10) {
        // 10 - Triplo de a menos b
        printf("digite o valor de a\n");
        scanf("%f", &a);
        printf("digite o valor de b\n");
        scanf("%f", &b);
        c = (3 * a) - b;
        printf("%f\n", c);
    } 
    else if (opcao == 11) {
        // 11 - Média ponderada
        printf("digite o valor de a (nota 1)\n");
        scanf("%f", &a);
        printf("digite o peso de a\n");
        scanf("%f", &peso1);
        printf("digite o valor de b (nota 2)\n");
        scanf("%f", &b);
        printf("digite o peso de b\n");
        scanf("%f", &peso2);
        if ((peso1 + peso2) != 0) {
            c = ((a * peso1) + (b * peso2)) / (peso1 + peso2);
            printf("%f\n", c);
        } else {
            printf("Erro: soma dos pesos nao pode ser zero\n");
        }
    } 
    else if (opcao == 12) {
        // 12 - Soma dos quadrados
        printf("digite o valor de a\n");
        scanf("%f", &a);
        printf("digite o valor de b\n");
        scanf("%f", &b);
        c = (a * a) + (b * b);
        printf("%f\n", c);
    } 
    else if (opcao == 13) {
        // 13 - Distância entre dois valores
        printf("digite o valor de a\n");
        scanf("%f", &a);
        printf("digite o valor de b\n");
        scanf("%f", &b);
        c = fabs(a - b);
        printf("%f\n", c);
    } 
    else if (opcao == 14) {
        // 14 - Celsius para Fahrenheit
        printf("digite a temperatura em Celsius (a)\n");
        scanf("%f", &a);
        c = (a * 9.0 / 5.0) + 32.0;
        printf("%f\n", c);
    } 
    else if (opcao == 15) {
        // 15 - Potência a elevado a b
        printf("digite o valor de a\n");
        scanf("%f", &a);
        printf("digite o valor de b\n");
        scanf("%f", &b);
        c = pow(a, b);
        printf("%f\n", c);
    } 
    else if (opcao == 16) {
        // 16 - Área do triângulo
        printf("digite a base (a)\n");
        scanf("%f", &a);
        printf("digite a altura (b)\n");
        scanf("%f", &b);
        c = (a * b) / 2.0;
        printf("%f\n", c);
    } 
    else if (opcao == 17) {
        // 17 - Conversão de Fahrenheit para Celsius
        printf("digite a temperatura em Fahrenheit (a)\n");
        scanf("%f", &a);
        c = (a - 32.0) * (5.0 / 9.0);
        printf("%f\n", c);
    } 
    else if (opcao == 18) {
        // 18 - Área do retângulo
        printf("digite a base (a)\n");
        scanf("%f", &a);
        printf("digite a altura (b)\n");
        scanf("%f", &b);
        c = a * b;
        printf("%f\n", c);
    } 
    else if (opcao == 19) {
        // 19 - Preço com desconto percentual
        printf("digite o preco original (a)\n");
        scanf("%f", &a);
        printf("digite a porcentagem de desconto (b)\n");
        scanf("%f", &b);
        c = a - (a * (b / 100.0));
        printf("%f\n", c);
    } 
    else if (opcao == 20) {
        // 20 - Preço com acréscimo percentual
        printf("digite o preco original (a)\n");
        scanf("%f", &a);
        printf("digite a porcentagem de acrescimo (b)\n");
        scanf("%f", &b);
        c = a + (a * (b / 100.0));
        printf("%f\n", c);
    } 
    else {
        printf("Opcao invalida.\n");
    }

    return 0;
}
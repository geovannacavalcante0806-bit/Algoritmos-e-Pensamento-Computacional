#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float a, b, c;
    float peso1, peso2;

    do {
        printf("\n==========================================\n");
        printf("Digite:\n");
        printf(" 1 - Soma | 2 - Subtracao | 3 - Multiplicacao | 4 - Divisao\n");
        printf(" 5 - Potencia | 6 - Media aritmetica | 7 - Produto mais soma\n");
        printf(" 8 - Dobro de a mais b | 9 - Porcentagem de a sobre b | 10 - Triplo de a menos b\n");
        printf("11 - Media ponderada | 12 - Soma dos quadrados | 13 - Distancia entre dois valores\n");
        printf("14 - Celsius p/ Fahrenheit | 15 - Potencia (a^b) | 16 - Area do triangulo\n");
        printf("17 - Fahrenheit p/ Celsius | 18 - Area do retangulo | 19 - Desconto (%%)\n");
        printf("20 - Calculo de IMC | 0 - SAIR DO PROGRAMA\n");
        printf("==========================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        printf("Opcao digitada: %d\n", opcao);

        if (opcao == 1) {
            printf("digite o valor de a\n");
            scanf("%f", &a);
            printf("Valor de a digitado: %g\n", a);

            printf("digite o valor de b\n");
            scanf("%f", &b);
            printf("Valor de b digitado: %g\n", b);

            c = a + b;
            printf("Resultado: %g\n", c);
        } 
        else if (opcao == 2) {
            printf("digite o valor de a\n");
            scanf("%f", &a);
            printf("Valor de a digitado: %g\n", a);

            printf("digite o valor de b\n");
            scanf("%f", &b);
            printf("Valor de b digitado: %g\n", b);

            c = a - b;
            printf("Resultado: %g\n", c);
        } 
        else if (opcao == 3) {
            printf("digite o valor de a\n");
            scanf("%f", &a);
            printf("Valor de a digitado: %g\n", a);

            printf("digite o valor de b\n");
            scanf("%f", &b);
            printf("Valor de b digitado: %g\n", b);

            c = a * b;
            printf("Resultado: %g\n", c);
        } 
        else if (opcao == 4) {
            printf("digite o valor de a\n");
            scanf("%f", &a);
            printf("Valor de a digitado: %g\n", a);

            printf("digite o valor de b\n");
            scanf("%f", &b);
            printf("Valor de b digitado: %g\n", b);

            if (b != 0) {
                c = a / b;
                printf("Resultado: %g\n", c);
            } else {
                printf("Erro: divisao por zero\n");
            }
        } 
        else if (opcao == 5) {
            printf("digite o valor de a\n");
            scanf("%f", &a);
            printf("Valor de a digitado: %g\n", a);

            printf("digite o valor de b\n");
            scanf("%f", &b);
            printf("Valor de b digitado: %g\n", b);

            c = pow(a, b);
            printf("Resultado: %g\n", c);
        } 
        else if (opcao == 6) {
            printf("digite o valor de a\n");
            scanf("%f", &a);
            printf("Valor de a digitado: %g\n", a);

            printf("digite o valor de b\n");
            scanf("%f", &b);
            printf("Valor de b digitado: %g\n", b);

            c = (a + b) / 2.0;
            printf("Resultado: %g\n", c);
        } 
        else if (opcao == 7) {
            printf("digite o valor de a\n");
            scanf("%f", &a);
            printf("Valor de a digitado: %g\n", a);

            printf("digite o valor de b\n");
            scanf("%f", &b);
            printf("Valor de b digitado: %g\n", b);

            c = (a * b) + (a + b);
            printf("Resultado: %g\n", c);
        } 
        else if (opcao == 8) {
            printf("digite o valor de a\n");
            scanf("%f", &a);
            printf("Valor de a digitado: %g\n", a);

            printf("digite o valor de b\n");
            scanf("%f", &b);
            printf("Valor de b digitado: %g\n", b);

            c = (2 * a) + b;
            printf("Resultado: %g\n", c);
        } 
        else if (opcao == 9) {
            printf("digite o valor de a\n");
            scanf("%f", &a);
            printf("Valor de a digitado: %g\n", a);

            printf("digite o valor de b\n");
            scanf("%f", &b);
            printf("Valor de b digitado: %g\n", b);

            if (b != 0) {
                c = (a / b) * 100.0;
                printf("Resultado: %g%%\n", c);
            } else {
                printf("Erro: b nao pode ser zero\n");
            }
        } 
        else if (opcao == 10) {
            printf("digite o valor de a\n");
            scanf("%f", &a);
            printf("Valor de a digitado: %g\n", a);

            printf("digite o valor de b\n");
            scanf("%f", &b);
            printf("Valor de b digitado: %g\n", b);

            c = (3 * a) - b;
            printf("Resultado: %g\n", c);
        } 
        else if (opcao == 11) {
            printf("digite o valor de a (nota 1)\n");
            scanf("%f", &a);
            printf("Valor de a digitado: %g\n", a);

            printf("digite o peso de a\n");
            scanf("%f", &peso1);
            printf("Peso 1 digitado: %g\n", peso1);

            printf("digite o valor de b (nota 2)\n");
            scanf("%f", &b);
            printf("Valor de b digitado: %g\n", b);

            printf("digite o peso de b\n");
            scanf("%f", &peso2);
            printf("Peso 2 digitado: %g\n", peso2);

            if ((peso1 + peso2) != 0) {
                c = ((a * peso1) + (b * peso2)) / (peso1 + peso2);
                printf("Resultado: %g\n", c);
            } else {
                printf("Erro: soma dos pesos nao pode ser zero\n");
            }
        } 
        else if (opcao == 12) {
            printf("digite o valor de a\n");
            scanf("%f", &a);
            printf("Valor de a digitado: %g\n", a);

            printf("digite o valor de b\n");
            scanf("%f", &b);
            printf("Valor de b digitado: %g\n", b);

            c = (a * a) + (b * b);
            printf("Resultado: %g\n", c);
        } 
        else if (opcao == 13) {
            printf("digite o valor de a\n");
            scanf("%f", &a);
            printf("Valor de a digitado: %g\n", a);

            printf("digite o valor de b\n");
            scanf("%f", &b);
            printf("Valor de b digitado: %g\n", b);

            c = fabs(a - b);
            printf("Resultado: %g\n", c);
        } 
        else if (opcao == 14) {
            printf("digite a temperatura em Celsius (a)\n");
            scanf("%f", &a);
            printf("Valor digitado: %g\n", a);

            c = (a * 9.0 / 5.0) + 32.0;
            printf("Resultado: %g °F\n", c);
        } 
        else if (opcao == 15) {
            printf("digite o valor de a\n");
            scanf("%f", &a);
            printf("Valor de a digitado: %g\n", a);

            printf("digite o valor de b\n");
            scanf("%f", &b);
            printf("Valor de b digitado: %g\n", b);

            c = pow(a, b);
            printf("Resultado: %g\n", c);
        } 
        else if (opcao == 16) {
            printf("digite a base (a)\n");
            scanf("%f", &a);
            printf("Base (a) digitada: %g\n", a);

            printf("digite a altura (b)\n");
            scanf("%f", &b);
            printf("Altura (b) digitada: %g\n", b);

            c = (a * b) / 2.0;
            printf("Resultado: %g\n", c);
        } 
        else if (opcao == 17) {
            printf("digite a temperatura em Fahrenheit (a)\n");
            scanf("%f", &a);
            printf("Valor digitado: %g\n", a);

            c = (a - 32.0) * (5.0 / 9.0);
            printf("Resultado: %g °C\n", c);
        } 
        else if (opcao == 18) {
            printf("digite a base (a)\n");
            scanf("%f", &a);
            printf("Base (a) digitada: %g\n", a);

            printf("digite a altura (b)\n");
            scanf("%f", &b);
            printf("Altura (b) digitada: %g\n", b);

            c = a * b;
            printf("Resultado: %g\n", c);
        } 
        else if (opcao == 19) {
            printf("digite o preco original (a)\n");
            scanf("%f", &a);
            printf("Preco (a) digitado: %g\n", a);

            printf("digite a porcentagem de desconto (b)\n");
            scanf("%f", &b);
            printf("Desconto (b) digitado: %g\n", b);

            c = a - (a * (b / 100.0));
            printf("Resultado: %g\n", c);
        } 
        else if (opcao == 20) {
            printf("digite o peso em kg (a)\n");
            scanf("%f", &a);
            printf("Peso (a) digitado: %g\n", a);

            printf("digite a altura em metros (b)\n");
            scanf("%f", &b);
            printf("Altura (b) digitada: %g\n", b);

            if (b > 0) {
                c = a / (b * b);
                printf("Resultado (IMC): %g\n", c);
            } else {
                printf("Erro: a altura deve ser maior que zero\n");
            }
        } 
        else if (opcao == 0) {
            printf("Encerrando o programa...\n");
        } 
        else {
            printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
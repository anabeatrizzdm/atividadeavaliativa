#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

int main(){
    //exercicio 1
    int produto_a, produto_b, produto_c, produto_d;
    int diferenca;

    printf("digite o valor do produto A:");
    scanf("%i", &produto_a);
    printf("digite o valor do produto B:");
    scanf("%i", &produto_b);
    printf("digite o valor do produto C:");
    scanf("%i", &produto_c);
    printf("digite o valor do produto D:");
    scanf("%i", &produto_d);

    diferenca = (produto_a * produto_b) - (produto_c * produto_d);
    printf("%i * %i - %i * %i\n", produto_a, produto_b, produto_c, produto_d);
    printf("valor da diferenca: %i\n", diferenca);

    //exercicio 2
    float x1, y1, x2, y2, distancia;

    printf("Digite as coordenadas do primeiro ponto (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os pontos eh: %.4f\n", distancia);


    //exercicio 3

    float raio, area, volume;
    printf("\bDigite o valor do raio da esfera: ");
    scanf("%f", &raio);

    volume = (4/3) * PI * raio * raio * raio;
    area = 4 * PI * raio * raio;

    printf("A area da superficie da esfera eh: %f\n", area);
    printf("O volume da esfera eh: %f\n", volume);

    //exercicio 4
    float x, y;
    printf("Digite as coordenadas (x e y) do ponto: ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0) {
        printf("Origem\n");
    } else if (x == 0) {
        printf("Eixo Y\n");
    } else if (y == 0) {
        printf("Eixo X\n");
    } else if (x > 0 && y > 0) {
        printf("Q1\n");
    } else if (x < 0 && y > 0) {
        printf("Q2\n");
    } else if (x < 0 && y < 0) {
        printf("Q3\n");
    } else {
        printf("Q4\n");
    }

    //exercicio 5
    int num, i;
    printf("Digite um numero positivo: \n");
    scanf("%d", &num);

    printf("\nOs divisores de %d sao: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ,", i);
        }
    }
    printf("\n");

    //exercicio 6
    int cont, soma = 0;
    for (cont = 1; cont < 1000; cont++) {
        if (cont % 3 == 0 || cont % 5 == 0) {
            soma += cont;
        }
    }
    printf("\nA soma de todos os numeros naturais abaixo de 1.000 que sao multiplos de 3 ou 5 eh =  %d\n", soma);

    //exercicio 7

    int n, c;
    long int fib, a = 0, b = 1;

    printf("Digite um numero inteiro (>= 0): ");
    scanf("%d", &n);

    if (n == 0) {
        fib = a;
    }
    else if (n == 1) {
        fib = b;
    }
    else {
        for (c = 2; c <= n; c++) {
            fib = a + b;
            a = b;
            b = fib;
        }
    }

    printf("O %d termo da sequencia de Fibonacci eh: %ld\n", n, fib);

    //exercicio 8
    int numero, maior, menor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    maior = numero;
    menor = numero;

    while (numero >= 0) {
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
        printf("Digite outro numero inteiro (ou um numero negativo para parar): ");
        scanf("%d", &numero);
    }

    printf("O maior numero lido eh:%d\n", maior);
    printf("O menor numero lido eh: %d\n", menor);

    //exercicio 9
    int opcao, quantidade;
    float total = 0;

    do {
        // Exibe o menu de frutas disponíveis
        printf("\nEscolha a fruta desejada:\n");
        printf("1 - ABACAXI (R$ 5,00/unidade)\n");
        printf("2 - MACA (R$ 1,00/unidade)\n");
        printf("3 - PERA (R$ 4,00/unidade)\n");
        printf("0 - Finalizar compra\n");

        // Lê a opção escolhida pelo usuário
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Lê a quantidade de abacaxis desejada
                printf("Quantidade de abacaxis: ");
                scanf("%d", &quantidade);
                total += quantidade * 5;
                break;

            case 2:
                // Lê a quantidade de maçãs desejada
                printf("Quantidade de macas: ");
                scanf("%d", &quantidade);
                total += quantidade * 1;
                break;

            case 3:
                // Lê a quantidade de peras desejada
                printf("Quantidade de peras: ");
                scanf("%d", &quantidade);
                total += quantidade * 4;
                break;

            case 0:
                // Finaliza a compra
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }

    } while (opcao != 0);

    // Exibe o total da compra
    printf("\nValor total da compra: R$ %.2f\n", total);

    //exercicio 10
    int num2, soma2 = 0;
    float media;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %d numero inteiro: ", i);
        scanf("%d", &num2);
        soma2 += num2;
    }

    media = soma2 / 10;

    printf("A media dos 10 numeros eh: %.2f\n", media);


    return 0;

}

/* pratica01.c
   Cálculo da área e do momento de inércia de uma seção retangular (em cm e cm^4)
*/

#include <stdio.h>
#include <math.h>   // para pow()

int main() {
    double b, h;        // largura (b) e altura (h) em cm
    double A;           // área em cm^2
    double I;           // momento de inércia em cm^4
    const double LIMITE_AREA = 100.0; // critério (cm^2)

    // Entrada de dados
    printf("Digite a largura (b) da viga em cm: ");
    if (scanf("%lf", &b) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    printf("Digite a altura (h) da viga em cm: ");
    if (scanf("%lf", &h) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    // Validações simples
    if (b <= 0 || h <= 0) {
        printf("Largura e altura devem ser maiores que zero.\n");
        return 1;
    }

    // Cálculos
    A = b * h;                       // A = b * h (cm^2)
    I = (b * pow(h, 3)) / 12.0;      // I = (b * h^3) / 12 (cm^4)

    // Saída formatada
    printf("\n===== RESULTADOS =====\n");
    printf("Largura (b): %.2f cm\n", b);
    printf("Altura   (h): %.2f cm\n", h);
    printf("Area         : %.2f cm^2\n", A);
    printf("Momento I    : %.2f cm^4\n", I);

    // Verificação do limite de área
    if (A >= LIMITE_AREA) {
        printf("\nA viga esta apta para carga basica (A >= %.0f cm^2).\n", LIMITE_AREA);
    } else {
        printf("\nA viga nao esta apta para carga basica (A < %.0f cm^2).\n", LIMITE_AREA);
    }

    return 0;
}
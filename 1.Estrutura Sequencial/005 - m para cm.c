// Faça um Programa que converta metros para centímetros.

#include <stdio.h>

int main() {
    double metros, centimetros;
    printf("Digite o valor em metros que deseja converter: ");
    scanf("%lf", &metros);
    centimetros = metros * 100;
    printf("\nO valor digitado corresponde a %.2lf centimetros", centimetros);
    return 0;
}
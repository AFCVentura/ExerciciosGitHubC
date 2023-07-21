// Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

#include <stdio.h>

int main() {
    double raio, area;
    
    printf("Digite um valor para o raio: ");
    scanf("%lf", &raio);

    area = 3.14 * (raio*raio);

    printf("A área do circulo correspondente e: %.2lf", area);

    return 0;
}
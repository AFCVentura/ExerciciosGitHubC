// Faça um Programa que peça as 4 notas bimestrais e mostre a média.
#include <stdio.h>

int main () {
    double nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("\nDigite a segunda nota: ");
    scanf("%lf", &nota2);

    printf("\nDigite a terceira nota: ");
    scanf("%lf", &nota3);

    printf("\nDigite a quarta nota: ");
    scanf("%lf", &nota4);

    media = (nota1 + nota2 + nota3 + nota4)/ 4;

    printf("A media das notas foi: %.2lf", media);

    return 0;
}
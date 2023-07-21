// Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.


#include <stdio.h>

int main() {
    double lado, area, dobro_area;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%lf", &lado);

    area = lado * lado;
    dobro_area = area * 2;

    printf("\nA area do quadrado corresponde a %.2lf", area);
    printf("\nO dobro da area do quadrado corresponde a %.2lf", dobro_area);


    return 0;
}
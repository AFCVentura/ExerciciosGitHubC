// Faça um Programa que peça dois números e imprima a soma.

#include <stdio.h>

int main() {
    int num1, num2, soma;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    printf("A soma dos valores e %d", soma);
    
    return 0;
}
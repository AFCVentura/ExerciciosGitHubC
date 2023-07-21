/* #Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número]. */
#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Numero digitado: %d", numero);
    
    return 0;
}
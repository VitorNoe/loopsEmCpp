#include <stdio.h>

int main() {
    int numero, soma = 0, digito;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int numeroOriginal = numero;

    while (numero != 0) {
        digito = numero % 10;
        soma += digito;
        numero /= 10;
    }
    printf("A soma dos digitos de %d é: %d\n", numeroOriginal, soma);

    return 0;
}
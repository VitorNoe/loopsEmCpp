#include <stdio.h>

int main() {
    int numero;
    printf("Digite o valor de n para a sequencia de Fibonacci: ");
    scanf("%d", &numero);

    int num1 = 0, num2 = 1;
    int i = 0;

    printf("Sequencia de Fibonacci até o %d-ésimo termo:\n", numero);
    while (i < numero) {
        printf("%d ", num1);
        int proximonum = num1 + num2;
        num1 = num2;
        num2 = proximonum;
        i++;
    }
    printf("\n");

    return 0;
}
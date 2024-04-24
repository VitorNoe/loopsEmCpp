#include <iostream>

int main() {
    int numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
        int resultado = numero1;
        numero1 = numero2;
        numero2 = resultado;
    } else {

    }

    printf("Números ímpares entre %d e %d:\n", numero1, numero2);
    for (int i = numero1; i <= numero2; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
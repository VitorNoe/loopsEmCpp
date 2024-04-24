#include <stdio.h>

int main() {
    int numerolinhas;

    printf("Digite o número de linhas: ");
    scanf("%d", &numerolinhas);

    for (int i = 1; i <= numerolinhas; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;

}
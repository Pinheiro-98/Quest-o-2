#include <stdio.h>

int main() {
    int num, fib1 = 0, fib2 = 1, aux;

    printf("Informe um número: ");
    scanf("%d", &num);

    while (fib2 < num) {
        aux = fib2;
        fib2 += fib1;
        fib1 = aux;
    }

    if (fib2 == num) {
        printf("%d pertence à sequência de Fibonacci\n", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci\n", num);
    }

}

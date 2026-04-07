#include <stdio.h>

int main() {
    int i = 1;
    
    printf("OS NÚMEROS ENTRE 1 E 100, QUE SÃO DIVISÍVEIS POR 3 E 5, SÃO: ");

    do {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
        }
        i = i + 1;
    } while (i <= 100);
}
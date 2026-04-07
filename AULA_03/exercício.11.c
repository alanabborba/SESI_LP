#include <stdio.h>

int main() {
    int n, fatorial = 1;

    printf("DIGITE UM NÚMERO: ");
    scanf("%i", &n);

   for (int i = 1; i <= n; i ++) {
       printf("%d x %d = ", fatorial, i);
       fatorial *= i;
       printf("%d\n", fatorial);
   }

    printf("\nFatorial de %i = %i\n", n, fatorial);
}
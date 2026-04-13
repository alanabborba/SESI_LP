#include <stdio.h>

int main() {
    int v[10];
    int i;
    int j;
    int conta;
    int dom = -1;

for(i=0; i < 10; i++) {
    printf("NÚMERO %d: ", i + 1);
    scanf("%i", &v[i]); }

for(i = 0; i < 10; i++) {
    conta = 0;
    for(j = 0; j < 10; j++) {
        if(v[i] == v[j]) conta++; }

if(conta > 5) {
    dom = v[i]; } }

   
    if(dom != -1) printf("NÚMERO DOMINANTE: %d\n", dom);
    else printf("NÃO EXISTE NÚMERO DOMINANTE\n");
}
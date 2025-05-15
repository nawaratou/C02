#include <stdio.h>

// Programme qui échange deux nombres sans utiliser de variable temporaire
int main() {
    int a, b;

    printf("Entrez deux nombres : ");
    scanf("%d %d", &a, &b);

    // Échange sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Après échange: a = %d, b = %d\n", a, b);
    return 0;
}

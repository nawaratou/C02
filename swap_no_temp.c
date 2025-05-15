#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);  // Pas de printf avant

    // Échange sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Après échange: a = %d, b = %d\n", a, b);  // Texte exact
    return 0;
}
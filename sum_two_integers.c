#include <stdio.h>

// Programme qui lit deux entiers et affiche leur somme
int main() {
    int a, b;
    printf("Entrez deux entiers : ");
    scanf("%d %d", &a, &b);

    int somme = a + b;
    printf("La somme est : %d\n", a + b);
    return 0;
}

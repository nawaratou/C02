#include <stdio.h>

// Programme qui calcule le factoriel d'un nombre entier
int main() {
    int n, i;
    unsigned long long resultat = 1;

    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Le factoriel n'est pas défini pour les nombres négatifs.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            resultat *= i;
        }
        printf("Le factoriel de %d est : %llu\n", n, resultat);
    }

    return 0;
}

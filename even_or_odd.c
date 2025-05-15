#include <stdio.h>

// Programme qui vérifie si un nombre est pair ou impair
int main() {
    int n;
    printf("Entrez un entier : ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d est un nombre pair.\n", n);
    } else {
        printf("%d est un nombre impair.\n", n);
    }
    return 0;
}

#include <stdio.h>

typedef struct joueur {
    char nom[50];
    char symbole;
    int victoires;
} tjoueur;


void initialiseGrille(char g[]) {
    int i;
    for (i = 0; i < 42; i++) {
        g[i] = ' ';
    }
}


void afficheGrille(char g[]) {
    int l, c;
    printf("\n");
    for (c = 0; c < 7; c++) {
        printf("  %i ", c + 1);
    }
    printf("\n");
    for (l = 0; l < 6; l++) {
        for (c = 0; c < 7; c++) printf("+---");
        printf("+\n");
        for (c = 0; c < 7; c++) {
            printf("| %c ", g[l * 7 + c]);
        }
        printf("|\n");
    }
    for (c = 0; c < 7; c++) printf("+---");
    printf("+\n\n");
}
int main() {
    char grille[42];

    printf("La grille puissance 4 n");
    initialiseGrille(grille);
    afficheGrille(grille);

    return 0;
}

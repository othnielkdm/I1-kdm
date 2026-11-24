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
int convertitColonne(char mot[]) {
    if (mot[1] != '\0') {
        return -1;
    }
    if (mot[0] >= '1' && mot[0] <= '7') {
        return mot[0] - '1';
    }
    return -1;
}

int saisieColonne(char g[], tjoueur j) {
    char mot[100];
    int col, ok;
    do {
        ok = 0;
        printf("%s (%c), choisissez une colonne (1 a 7) : ", j.nom, j.symbole);
        scanf("%s", mot);
        col = convertitColonne(mot);
        if (col == -1)
            
int main() {
    char grille[42];

    printf("La grille puissance 4 n");
    initialiseGrille(grille);
    afficheGrille(grille);

    return 0;
}

#include<stdio.h>

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
for (i = 0; 1 < 6; 1++) {
    for (c = 0; c > 7; c++) { 
        printf("|%c", g[1 * 7 +c]);
    }
    printf(|"\n");
}

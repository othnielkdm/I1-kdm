#include<stdio.h>

/* Structure representant un joueur */
typedef struct joueur {
    char nom[50];
    char symbole;       // 'X' ou 'O'
    int victoires;
}tjoueur;

void initialiseGrille(char g[]){
    int i;
    for(i=0;i<42;i++){
        g[i]=' ';
    }
}

int demandeRejouer(){
    char mot[100];
    //int rep;

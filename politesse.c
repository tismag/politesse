#include <stdio.h>
#include <stdlib.h>

void politesse_rec(int niveau, int pos){
    if (niveau == 1){
        if (pos == 1){
            printf("merci ");
        } else {
            printf("de rien ");
        }
        return;
    }
    if (pos == 1){
        printf("merci de ton ");
        politesse_rec(niveau-1, 0);
    } else {
        printf("de rien de mon ");
        politesse_rec(niveau-1, 1);
    }
}


int main(int argc, char** argv){
    if (argc != 3) {
        printf("Usage : ./politesse <0:sans bien/1:avec bien> <niveau de politesse [1..beaucoup]>\n");
        return 1;
    }

    int niveau = atoi(argv[2]);
    // Affichage récursif des merci et de rien
    politesse_rec(niveau, niveau%2);

    // Affichage des "bien" si nécessaire
    if (atoi(argv[1]) == 1){
        for (int i=0; i<atoi(argv[2]); i++){
            printf("bien ");
        }
    }
    printf("\n");
    return 0;
}
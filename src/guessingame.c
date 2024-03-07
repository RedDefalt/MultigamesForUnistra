#include "./../inc/alea.h"
#include "structureGuessinGame.c"
#ifndef _STDLIB_H
    #include <stdlib.h>
#endif

int guessingame_user_input() {
    int valeur;
    printf("veuiller entrer un nbr entre 0 et 99\n");
    scanf("%d", &valeur);
    if (valeur < 0 || valeur > 99) {
        printf("valeur incorrect, veuillez recommencer\n");
        guessingame_user_input();
    }
    return valeur;
}

int continues(int user_input,int value_to_guess){
    if (user_input != value_to_guess) {
        return 1;
    }
    return 0;
}

void instruction(int user_input, int value_to_guess) {
    if (user_input > value_to_guess) {
        printf("Essayer avec une valeur plus petite\n");
    } else {
        printf("Essayer avec une valeur plus grande\n");
    }
}

void guessingame() {
    structureGuessinGame* jeu = init_game();
    int still_play = 1;
    int value_to_guess = alea();
    do {
        int value = guessingame_user_input();
        add_elem(jeu, value);
        if (continues(value, value_to_guess)) {
            instruction(value, value_to_guess);
        } else {
            still_play = 0;
        }
    } while (still_play);
    printf("Felicitation vous avez trouver le nombre au bout de %d esseai \n", taille(jeu));
    free(jeu);
}
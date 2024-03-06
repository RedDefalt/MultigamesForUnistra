#include "alea.c"

int user_input() {
    int valeur;
    printf("veuiller entrer un nbr entre 0 et 99\n");
    scanf("%d", &valeur);
    if (valeur < 0 || valeur > 99) {
        printf("valeur incorrect, veuillez recommencer\n");
        user_input();
    } else {
        return valeur;
    }
}

int continues(user_input, value_to_guess){
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

int guessingame() {
    structureGuessinGame* jeu = init_game();
    int still_play = 1;
    int value_to_guess = alea();
    do {
        int value = user_input();
        add_elem(jeu, value);
        if (continues(value, value_to_guess)) {
            instruction(value, value_to_guess);
        } else {
            still_play = 0;
        }
    } while (still_play);
    printf("Felicitation vous avez trouver le nombre au bout de %d esseai \n", taille(jeu) +1 );
    free(jeu);
    return 0;
}
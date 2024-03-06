#include <stdlib.h>
#include <stdio.h>
#include "../inc/structureGuessinGame.h"

structureGuessinGame* init_game(void) {
    structureGuessinGame* game = malloc(sizeof(structureGuessinGame));
    if (game == NULL) {
        printf("OUT OF MEM");
        exit(-1);
    }
    game->nbr_elem = 0;
    return game;
}

int existe_deja(struct  guessingame *game, int nbr) {
    int index_delem;
    for (index_delem = 0; game->ensemble[index_delem] != nbr && index_delem < game->nbr_elem; index_delem++);
    if (game->ensemble[index_delem] == nbr) {
        return 1;
    }
    return 0;
}

void add_elem(struct  guessingame *game, int nbr) {
    if (existe_deja(game, nbr) == 0) {
        game->ensemble[game->nbr_elem] = nbr;
        game->nbr_elem++;
    }
}
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
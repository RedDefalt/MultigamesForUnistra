#define TAILLE 200

typedef struct guessingame {
    int ensemble[TAILLE];
    int nbr_elem;
} structureGuessinGame;

guessingame* init_game();

guessingame* nbr_de_essai(guessingame* game);

guessingame* add_elem(guessingame* game, int nbr);

guessingame* existe_deja(guessingame* game, int nbr);
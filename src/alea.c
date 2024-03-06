#include <time.h>

int alea() {
    srand(time(NULL));
    int nbgen=rand()%99+1;
    return nbgen;
}
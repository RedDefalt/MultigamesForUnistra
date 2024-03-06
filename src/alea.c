#ifndef _TIME_H
    #include <time.h>
#endif

int alea() {
    srand(time(NULL));
    int nbgen=rand()%99+1;
    return nbgen;
}
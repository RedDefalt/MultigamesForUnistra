#ifndef _STDIO_H
    #include <stdio.h>
#endif

int user_input() {
    int valeur;
    printf("Donne moi un nombre entre 1 et 99 : ");
    scanf("%d", &valeur);
    if (valeur < 1 || valeur > 99) {
        printf("valeur incorrect, veuillez recommencer\n");
        user_input();
    } else {
        return valeur;
    }
    return valeur;
}

void condition_controll(int user_input) {
    if (user_input % 3 == 0 && user_input % 5 == 0) {
        printf("FIZZBUZZ\n");
    } else if (user_input % 5 == 0) {
        printf("BUZZ\n");
    } else if (user_input % 3 == 0) {
        printf("FIZZ\n");
    } else {
        printf("%d\n",user_input);
    }
}

void fizzbuzz() {
    printf("Donne moi un nombre entre 1 et 99 et je te dirais\nFIZZ si c'est un multiple de 3\nBUZZ si c'est un multiple de 5 et\nFIZZBUZZ si c'est les deux en même temps !\n");
    int value = user_input();
    for (int i=1; i<=value; i++) {
        condition_controll(i);
    }
}
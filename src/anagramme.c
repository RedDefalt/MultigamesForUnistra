#ifndef _STDIO_H
    #include <stdio.h>
#endif

int length(char *str) {
    int longueur = 0;
    
    while (*str != '\0') {
        longueur++;
        str++;
    }
    
    return longueur;
}

int sameSize(char mot1[], char mot2[]) {
    if (length(mot1) == length(mot2)) {
        return 1;
    }
    return 0;
}

void trieabulle(char mot[]) {
    int i, j, tmp;
    int size = length(mot);

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (mot[j] > mot[j + 1]) {
                tmp = mot[j];
                mot[j] = mot[j + 1];
                mot[j + 1] = tmp;
            }
        }
    }
}

void str_user_input(char mot[]) {
    printf("Entrer un mot : \n");
    scanf("%s", mot);
}

void anagramme() {
    char mot1[100];
    str_user_input(mot1);
    char mot2[100];
    str_user_input(mot2);

    if (sameSize(mot1, mot2)) {
        trieabulle(mot1);
        trieabulle(mot2);
        for (int i = 0; mot1[i] != '\0'; i++) {
            if (mot1[i] != mot2[i]) {
                printf("pas un anagramme\n");
            }
        }
        printf("c'est un anagramme\n");
    } else {
        printf("pas un anagramme\n");
    }
}
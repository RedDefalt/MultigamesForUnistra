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
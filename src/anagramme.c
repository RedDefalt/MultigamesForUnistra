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
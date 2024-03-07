int length(const char *str) {
    int longueur = 0;
    
    while (*str != '\0') {
        longueur++;
        str++;
    }
    
    return longueur;
}
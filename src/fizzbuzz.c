int user_input() {
    int valeur;
    printf("veuiller entrer un nombre entre 1 et 99\n");
    scanf("%d", &valeur);
    if (valeur < 1 || valeur > 99) {
        printf("valeur incorrect, veuillez recommencer\n");
        user_input();
    }
    return valeur;
}
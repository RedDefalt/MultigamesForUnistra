int user_input() {
    int valeur;
    printf("veuiller entrer un nbr entre 0 et 99\n");
    scanf("%d", &valeur);
    if (valeur < 0 || valeur > 99) {
        printf("valeur incorrect, veuillez recommencer\n");
        user_input();
    } else {
        return valeur;
    }
}

int continues(user_input, value_to_guess){
    if (user_input != value_to_guess) {
        return 1;
    }
    return 0;
}
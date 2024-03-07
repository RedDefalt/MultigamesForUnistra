int user_input() {
    int valeur;
    printf("veuiller entrer un nombre entre 1 et 99\n");
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
    int value = user_input();
    for (int i=1; i<=value; i++) {
        condition_controll(i);
    }
}
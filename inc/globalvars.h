#ifndef _STDIO_H
    #include <stdio.h>
#endif

void prog_title(){
    printf("\033[32m _____                               ___   _   _       _     _             \n|  __ \\                             /   | | | | |     (_)   | |            \n| |  \\/ __ _ _ __ ___   ___  ___   / /| | | | | |_ __  _ ___| |_ _ __ __ _ \n| | __ / _` | '_ ` _ \\ / _ \\/ __| / /_| | | | | | '_ \\| / __| __| '__/ _` |\n| |_\\ \\ (_| | | | | | |  __/\\__ \\ \\___  | | |_| | | | | \\__ \\ |_| | | (_| |\n \\____/\\__,_|_| |_| |_|\\___||___/     |_/  \\___/|_| |_|_|___/\\__|_|  \\__,_|\n\033[0m");
}

void anagramme_title(){
    printf("\033[34m _____                                      \n|  _  |___ ___ ___ ___ ___ _____ _____ ___ \n|     |   | .'| . |  _| .'|     |     | -_|\n|__|__|_|_|__,|_  |_| |__,|_|_|_|_|_|_|___|\n              |___|                        \n\033[0m");
}

void fizzbuzz_title(){
    printf("\033[34m _____ _         _____             \n|   __|_|___ ___| __  |_ _ ___ ___ \n|   __| |- _|- _| __ -| | |- _|- _| \n|__|  |_|___|___|_____|___|___|___|\n\033[0m");
}

void guessingame_title() {
    printf("\033[34m _____                 _     _____               \n|   __|_ _ ___ ___ ___|_|___|   __|___ _____ ___ \n|  |  | | | -_|_ -|_ -| |   |  |  | .'|     | -_|\n|_____|___|___|___|___|_|_|_|_____|__,|_|_|_|___|\n\033[0m");
}

void author() {
    printf("  \033[34mBy RedDefaltos\033[0m\n\n");
}

void main_interface() {
    printf("[1] Anagramme\n");
    printf("[2] FizzBuzz\n");
    printf("[3] GuessinGame\n");
    printf("\n");
    printf("[e] Exit\n");
    printf("[c] Clear Screen\n");
    printf("\n");
}

void interaction_interface(char mot[]) {
    printf("Games4Unistra(\033[34m~\033[0m)$ ");
    scanf("%s", mot);
}

void clean_interface() {
    printf("\033[2J\033[H");
}

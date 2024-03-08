#include <stdio.h>
#include <stdlib.h>
#include "./../inc/globalvars.h"

void anagramme();
void fizzbuzz();
void guessingame();
int main();

void rejoue(char jeu) {
       char instruction[200];
       printf("Games4Unistra(\033[34m~\033[0m)$ \033[34mVoullez vous rejouer ? \033[0m (O/n)");
       scanf("%s", instruction);

       if (instruction[0] == 'O' || instruction[0] == 'o') {
              clean_interface();
              switch(jeu) {
                     case '1':
                            anagramme_title();
                            anagramme();
                            rejoue(jeu);
                     case '2':
                            fizzbuzz_title();
                            fizzbuzz();
                            rejoue(jeu);
                     case '3':
                            guessingame_title();
                            guessingame();
                            rejoue(jeu);
              }
       } else {
              main();      
       }
}

int main() {
       clean_interface();
       prog_title();
       author();
       main_interface();
       char instruction[200];
       interaction_interface(instruction);
       if (instruction[0] == '1') {
              clean_interface();
              anagramme_title();
              anagramme();
              rejoue(instruction[0]);
       } else if (instruction[0] == '2') {
              clean_interface();
              fizzbuzz_title();
              fizzbuzz();
              rejoue(instruction[0]);
       } else if (instruction[0] == '3') {
              clean_interface();
              guessingame_title();
              guessingame();
              rejoue(instruction[0]);
       } else if (instruction[0] == 'e' || instruction[0] == 'E') {
              exit(0);
       } else if (instruction[0] == 'c'|| instruction[0] == 'C') {
              main();
       } else {
              printf("Je ne connais pas cette instruction !\n");
       }
       return 0;
}
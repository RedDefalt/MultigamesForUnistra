CC = gcc
PROG = unistragames

$(PROG): anagramme.o fizzbuzz.o guessingame.o
	$(CC) src/main.c -o $(PROG) anagramme.o fizzbuzz.o guessingame.o -lm

anagramme.o: src/anagramme.c
	$(CC) -c src/anagramme.c -o anagramme.o

fizzbuzz.o: src/fizzbuzz.c
	$(CC) -c src/fizzbuzz.c -o fizzbuzz.o

guessingame.o: src/guessingame.c inc/alea.h inc/structureGuessinGame.h
	$(CC) -c src/guessingame.c -o guessingame.o

clean:
	rm -f *.o

superclean:
	rm -f $(PROG) *.o
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void play_dice();
void play_memory();

int main() {
    int choice;

    srand(time(NULL));

    while (1) {
        printf("\n=== The Game of Valkyrie ===\n");
        printf("1. Gioca a dadi\n");
        printf("2. Gioca a memoria\n");
        printf("3. Esci\n");

        scanf("%d", &choice);

        if (choice == 1) {
            play_dice();
        }
        else if (choice == 2) {
            play_memory();
        }
        else if (choice == 3) {
            break;
        }
        else {
            printf("Scelta non valida!\n");
        }
    }

    return 0;
}

void play_dice() {
    system("cls");

    int scelta;
    int dado;
    int winstreak = 0;

    while (1) {
        printf("\nScegli un numero da 1 a 6 (0 per tornare al menu): ");
        scanf("%d", &scelta);

        if (scelta == 0) {
            system("cls");
            return;
        }

        dado = rand() % 6 + 1;

        printf("Il computer ha tirato: %d\n", dado);

        if (scelta == dado) {
            winstreak++;
            printf("Hai vinto!\n");
        }
        else {
            winstreak = 0;
            printf("Hai perso!\n");
        }

        printf("Winstreak: %d\n", winstreak);
    }
}

void play_memory() {
    system("cls");

    int numero;
    int risposta;
    int winstreak = 0;

    while (1) {
        numero = rand() % 900000 + 100000;

        printf("\nMemorizza questo numero:\n");
        printf("%d\n", numero);

        for (int i = 5; i > 0; i--) {
            printf("%d\n", i);
            _sleep(1000);
        }

        system("cls");

        printf("Inserisci il numero (0 per tornare al menu): ");
        scanf("%d", &risposta);

        if (risposta == 0) {
            system("cls");
            return;
        }

        if (risposta == numero) {
            winstreak++;
            printf("Corretto!\n");
        }
        else {
            printf("Sbagliato! Il numero era %d\n", numero);
            winstreak = 0;
        }

        printf("Winstreak: %d\n", winstreak);
    }
}
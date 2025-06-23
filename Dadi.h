#include <stdlib.h>
#include <stdio.h>
#include <time.h>  // Necessario per time()


int main()
{
    
    printf("La mia prima app gioco di dadi in C firmato SuperMarcoIII 2025\n");

    // Inizializza il generatore di numeri casuali
    srand(time(NULL));

    int numero;
    int numeroScelto = rand() % 10 + 1; // Numero casuale tra 1 e 10

    printf("Inserisci un numero e dirò se è il numero che ho scelto (1-10): ");
    scanf("%d", &numero);

    if (numero == numeroScelto) {
        printf("Il numero è corretto!\n");
    } else {
        printf("Mi dispiace, il numero è sbagliato.\n");
        printf("Il numero corretto era: %d\n", numeroScelto);
    }

    return 0;

}
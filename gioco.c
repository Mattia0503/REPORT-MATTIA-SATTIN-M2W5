
#include <stdio.h>

int primadomanda() {

	int choise1;
	int result;

	printf("Quale delle seguenti e' la corretta formula per il calcolo dell'area di un Cerchio?\n\n");
	printf("- 1: diametro * pigreco\n");
	printf("- 2: (raggio^2) * pigreco\n");
	printf("- 3: (diametro * diametro) - raggio\n");
	printf("Risposta: ");
	scanf("%d", &choise1);

	if (choise1 == 2) {

		result = 10;

	}
	else {
		
		result = 0;

	}

	return result;

}

int secondadomanda() {

	int choise2;
	int result;

	printf("Quale delle seguenti e' la formula corretta per calcolare l'area di un Quadrato?\n\n");
	printf("- 1: base * altezza\n");
	printf("- 2: (base^2)/altezza\n");
	printf("- 3: (altezza/2)*base\n");
	printf("Risposta: ");
	scanf("%d", &choise2);

	if (choise2 == 1) {

		result = 10;

	}
	else {
		
		result = 0;

	}

	return result;
}


int terzadomanda() {

	int choise3;
	int result;

	printf("Quale dei seguenti animali e' un Rettile?\n\n");
	printf("- 1: Cincilla'\n");
	printf("- 2: Ragno\n");
	printf("- 3: Tartaruga\n");
	printf("Risposta: ");
	scanf("%d", &choise3);

	if (choise3 == 3) {

		result = 10;

	}
	else {
		
		result = 0;

	}

	return result;
}


int main(){


	int check;
	char option;
	int punteggio = 0;
    char a = 'a';
    char b = 'b';
	char nomeGiocatore[15];

	printf("Benvenuto Giocatore! \n\n\n");
	printf("Regole molto semplici: \n");
	printf(" - rispondi a tutte le nostre domande \n");
	printf(" - il punteggio verrà assegnato alla fine della partita \n\n");
	printf("Scegliere fra le seguenti opzioni: \n");
	printf(" - A: iniziare una nuova partita \n");
	printf(" - B: uscire dal gioco \n");
	printf("inserire qui la scelta:");
	scanf("%c", &option);
    printf("risposta scelta e':%c\n\n", option);
	

    if(option == 'a'){
		while (option == 'a') {


            printf("Inserisci nome utente:");
			scanf("%99s", nomeGiocatore );
			printf("COMINCIAMO!\n\n\n");

			punteggio = punteggio + primadomanda();
			punteggio = punteggio + secondadomanda();
			punteggio = punteggio + terzadomanda();

			printf("Il tuo punteggio finale e': %i \n\n", punteggio);

			if (punteggio == 30) {

				printf("CONGRATULAZIONI! \n HAI OTTENUTO IL MASSIMO\n\n\n");

			}
			else {

				printf("\n\n SEI STATO BRAVO %s!\n\n", nomeGiocatore);
				printf(" HAI COMPLETATO LE DOMANDE!\n\n\n");

			}

			printf("Vuoi fare una nuova partita?\n\n");
			printf(" - 1 = yes\n");
			printf(" - 2 = no\n\n");
			scanf("%d", &check);

			if (check == 1) {
				printf("Benvenuto Giocatore! \n\n\n");
				printf("Regole molto semplici: \n");
				printf(" - rispondi a tutte le nostre domande \n");
				printf(" - il punteggio verrà assegnato alla fine della partita \n\n");
				printf("Scegliere fra le seguenti opzioni: \n");
				printf(" - A: iniziare una nuova partita \n");
				printf(" - B: uscire dal gioco \n");
				printf("risposta scelta e':%c\n\n", option);
				option = 'a';
                punteggio = 0;
			}
			else {
				option = 'b';
			}

		}
    }
    else
        return 0;
}
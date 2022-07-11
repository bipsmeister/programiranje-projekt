#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "iks_oks.h"


int main() {
    char** polje;
    igrac* igraci;
    FILE* logFile;

    // Inicirati polje
    polje = (char**)malloc(3 * sizeof(char*));
    for (int i = 0; i < 3; i++) {
        polje[i] = (char*)malloc(3 * sizeof(char));
    }

    // Inicirati igrace
    igraci = malloc(2 * sizeof(igrac));
    igraci[0].ime = (char*)malloc(DEFAULT_STRING_LENGTH * sizeof(char));
    igraci[1].ime = (char*)malloc(DEFAULT_STRING_LENGTH * sizeof(char));

    igraci[0].score = 0;
    igraci[1].score = 0;
    igraci[0].igracIksOksZnak = IGRAC1_ZNAK;
    igraci[1].igracIksOksZnak = IGRAC2_ZNAK;

    // Otvoriti novi file
    logFile = fopen(LOG_FILE_NAME, "w");

    printf("Pravila igre: Postavi tri simbola u istom redu, stupcu ili po dijagonali kako bi pobjedio!\n");
    printf("Koordinate: Reci su x E [1,3]; Stupci su y E [1,3]\n");
    printf("Unesite ime prvog igraca:\n");
    scanf("%s", igraci[0].ime);
    printf("Unesite ime drugog igraca:\n");
    scanf("%s", igraci[1].ime);

    printf("Igra krece!\n\n");

    int trenutnaPartija = -1;
    int maxWinStreak = 0;
    char maxWinner = PRAZNO_POLJE_ZNAK;
    int currWinStreak = 0;
    char lastWinner = PRAZNO_POLJE_ZNAK;
    while(true) {
        ++trenutnaPartija;
        printf("Trenutna partija: %d\n", trenutnaPartija);
        partija(polje, igraci, logFile, &currWinStreak, &lastWinner);

        // Provjeriti maxWinStreak
        if (currWinStreak > maxWinStreak) {
            maxWinStreak = currWinStreak;
            maxWinner = lastWinner;
        }

        bool nastavak = nastavitiIgru();
        if(nastavak) {
            continue;
        } else {
            printf("Zavrsetak igre!\n");
            break;
        }
    }

    // Kraj igre
    for(int i = 0; i < 2; i++) {
        printf("Igrac %d > Ime:%s, Znak:%c, Bodovi:%d\n", i, igraci[i].ime, igraci[i].igracIksOksZnak, igraci[i].score);
    }

    // Zapisati u file maxWinnera i zadnjeg winnera
    if (currWinStreak > 0) {
        fprintf(logFile, "winstreak: %c, %d\n", lastWinner, currWinStreak);
    }

    if (maxWinStreak > 0) {
        fprintf(logFile, "Maximum winstreak: %c, %d\n", maxWinner, maxWinStreak);
    }

    cleanUp(polje, igraci, logFile);
    return 0;
}
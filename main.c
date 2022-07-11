#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "iks_oks.h"


int main() {
    char** polje;
    igrac* igraci;

    // Inicirati polje
    polje = (char**)malloc(3 * sizeof(char*));
    for (int i = 0; i < 2; i++) {
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

    printf("Pravila igre: Postavi tri simbola u istom redu, stupcu ili po dijagonali kako bi pobjedio!\n");
    printf("Koordinate: Reci su x E [1,3]; Stupci su y E [1,3]\n");
    printf("Unesite ime prvog igraca:\n");
    scanf_s("%s", igraci[0].ime, DEFAULT_STRING_LENGTH);
    printf("Unesite ime drugog igraca:\n");
    scanf_s("%s", igraci[1].ime, DEFAULT_STRING_LENGTH);

    printf("Igra krece!\n\n");
    int trenutnaPartija = -1;
    while(true) {
        ++trenutnaPartija;
        printf("Trenutna partija: %d\n", trenutnaPartija);
        partija(polje, igraci);

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
        printf("Igrac %d > Ime:%s, Znak:%c, Bodovi:%d\n", i, igraci[0].ime, igraci[0].igracIksOksZnak, igraci[0].score);
    }

    // freeMemory(polje, igraci);

    return 0;
}
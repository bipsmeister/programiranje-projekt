#include <stdio.h>
#include <stdbool.h>
#include "iks_oks.h"

char polje[3][3] = {
        {PRAZNO_POLJE_ZNAK, PRAZNO_POLJE_ZNAK, PRAZNO_POLJE_ZNAK},
        {PRAZNO_POLJE_ZNAK, PRAZNO_POLJE_ZNAK, PRAZNO_POLJE_ZNAK},
        {PRAZNO_POLJE_ZNAK, PRAZNO_POLJE_ZNAK, PRAZNO_POLJE_ZNAK}
};

int main() {
    igrac igraci[2];

    igraci[0].score = 0;
    igraci[1].score = 0;
    igraci[0].igracIksOksZnak = IGRAC1_ZNAK;
    igraci[1].igracIksOksZnak = IGRAC2_ZNAK;

    printf("Pravila igre: Postavi tri simbola u istom redu, stupcu ili po dijagonali kako bi pobjedio!\n");
    printf("Koordinate: Reci su x E [1,3]; Stupci su y E [1,3]\n");
    printf("Unesite ime prvog igraca:\n");
    scanf("%s", igraci[0].ime);
    printf("Unesite ime drugog igraca:\n");
    scanf("%s", igraci[1].ime);

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

    return 0;
}
#include <stdio.h>
#include <stdbool.h>
#include "iks_oks.h"

typedef struct {
    int score;
    char ime[1024];
    char igracIksOksZnak;
} igrac;


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
    printf("Koordinate: Reci su x E [1,3]; Stupci su y E [1,3]");
    printf("Unesite ime prvog igraca:\n");
    printf("Unesite ime drugog igraca:\n");
    scanf("%s", igraci[0].ime);
    scanf("%s", igraci[1].ime);

    printf("Igra krece!\n");
    char buffer[1024];
    int x, y;
    igrac* trenutanIgrac = &igraci[0];
    while (true) {
        // Potez prvog igraca
        while (true) {
            printf("%s na potezu --> upisite x:", trenutanIgrac->ime);
            scanf("%d", &x);
            printf(", upisite y:");
            scanf("%d", &y);
            printf("\n");

            if(!napraviPotez(polje, trenutanIgrac->igracIksOksZnak)) {
                continue;
            } else {

            }
        }


    }

    return 0;
}
#include <stdio.h>
#include <stdbool.h>
#include "iks_oks.h"

void ispisiPlocu(char polje[3][3])
{
	printf("\n\t\t      Krizic kruzic igra      ");
    printf("\n\t\t|---------|----------|--------|");
	printf("\n\t\t|    %c   |    %c    |   %c   |", polje[0][0], polje[0][1], polje[0][2]);
	printf("\n\t\t|---------|----------|--------|");
    printf("\n\t\t|    %c   |    %c    |   %c   |", polje[1][0], polje[1][1], polje[1][2]);
    printf("\n\t\t|---------|----------|--------|");
    printf("\n\t\t|    %c   |    %c    |   %c   |", polje[2][0], polje[2][1], polje[2][2]);
    printf("\n\t\t|---------|----------|--------|");
}

bool provjeriPobjedu(char polje[3][3], char zadnjiIgracIksOksZnak) {
    /*
     * Prvo provjeriti sve retke(vodoravno)
     * Onda provjeriti sve stupce(okomito)
     * I zatim dvije dijagonale
     */
    if(zadnjiIgracIksOksZnak != IGRAC1_ZNAK && zadnjiIgracIksOksZnak != IGRAC2_ZNAK) {
        return false;
    }

    if(polje[0][0] == zadnjiIgracIksOksZnak && polje[0][1] == zadnjiIgracIksOksZnak && polje[0][2] == zadnjiIgracIksOksZnak) {
        // Prvi redak
        return true;
    } else if(polje[1][0] == zadnjiIgracIksOksZnak && polje[1][1] == zadnjiIgracIksOksZnak && polje[1][2] == zadnjiIgracIksOksZnak) {
        // Drugi redak
        return true;
    } else if(polje[2][0] == zadnjiIgracIksOksZnak && polje[2][1] == zadnjiIgracIksOksZnak && polje[2][2] == zadnjiIgracIksOksZnak) {
        // Treci redak
        return true;
    } else if(polje[0][0] == zadnjiIgracIksOksZnak && polje[1][0] == zadnjiIgracIksOksZnak && polje[2][0] == zadnjiIgracIksOksZnak) {
        // Prvi stupac
        return true;
    } else if(polje[0][1] == zadnjiIgracIksOksZnak && polje[1][1] == zadnjiIgracIksOksZnak && polje[2][1] == zadnjiIgracIksOksZnak) {
        // Drugi stupac
        return true;
    } else if(polje[0][2] == zadnjiIgracIksOksZnak && polje[1][2] == zadnjiIgracIksOksZnak && polje[2][2] == zadnjiIgracIksOksZnak) {
        // Treci stupac
        return true;
    } else if(polje[0][0] == zadnjiIgracIksOksZnak && polje[1][1] == zadnjiIgracIksOksZnak && polje[2][2] == zadnjiIgracIksOksZnak) {
        // Dijagonala '\'
        return true;
    } else if(polje[0][2] == zadnjiIgracIksOksZnak && polje[1][1] == zadnjiIgracIksOksZnak && polje[2][0] == zadnjiIgracIksOksZnak) {
        // Dijagonala '/'
        return true;
    }

    // Ako nista nije ispunjeno, nije pobijedeno/zavrseno
    return false;
}

/**
 * Proba napraviti potez. Prvo provjeri je li uopce legalan potez na x,y poziciji.
 *
 * @param polje Iks-Oks polje
 * @param x Indeks retka E [1,3]
 * @param y Indeks stupca E [1,3]
 * @param igracIksOksZnak Iks Oks znak igraca koji je na potezu
 * @return true ak je potez napravljen, false ako nije
 */
bool napraviPotez(char polje[3][3], int x, int y, char igracIksOksZnak) {
    if(x < 1 || x > 3 || y < 1 || y > 3) {
        return false;
    } else {
        if(polje[x-1][y-1] == PRAZNO_POLJE_ZNAK) {
            polje[x-1][y-1] = igracIksOksZnak;
            return true;
        } else {
            return false;
        }
    }
}

bool nastavitiIgru() {
    char input;
    printf("Zelite li nastaviti igrati: Y/N >");

    while(true) {
        scanf("%c", &input);
        printf("\n");

        if(input == 'Y') {
            return true;
        } else if(input == 'N') {
            return false;
        } else {
            printf("Unijeli ste nedopusteni znak! Molimo unesite Y/N >");
        }
    }
}

void resetiratiPolje(char polje[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            polje[i][j] = PRAZNO_POLJE_ZNAK;
        }
    }
}

void partija(char polje[3][3], igrac igraci[2]) {

}

void izlazakIzIgre() {

}
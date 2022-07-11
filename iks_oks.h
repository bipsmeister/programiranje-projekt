#ifndef PROGRAMIRANJE_PROJEKT_IKS_OKS_H
#define PROGRAMIRANJE_PROJEKT_IKS_OKS_H

#include <stdbool.h>
#define PRAZNO_POLJE_ZNAK '-'

typedef struct {
    int score;
    char ime[1024];
    char igracIksOksZnak;
} igrac;

static const char IGRAC1_ZNAK = 'X';
static const char IGRAC2_ZNAK = 'O';
//static const char PRAZNO_POLJE_ZNAK = '-';

void ispisiPlocu(char polje[3][3]);
bool provjeriPobjedu(char polje[3][3], char zadnjiIgracIksOksZnak);
bool napraviPotez(char polje[3][3], int x, int y, char zadnjiIgracIksOksZnak);
bool nastavitiIgru();
void izlazakIzIgre();
void resetiratiPolje(char polje[3][3]);
void partija(char polje[3][3], igrac igraci[2]);

#endif //PROGRAMIRANJE_PROJEKT_IKS_OKS_H

#ifndef PROGRAMIRANJE_PROJEKT_IKS_OKS_H
#define PROGRAMIRANJE_PROJEKT_IKS_OKS_H

#include <stdbool.h>
#define PRAZNO_POLJE_ZNAK '-'

const char IGRAC1_ZNAK = 'X';
const char IGRAC2_ZNAK = 'O';
//const char PRAZNO_POLJE_ZNAK = '-';

void ispisiPlocu(char polje[3][3]);
bool provjeriPobjedu(char polje[3][3], char zadnjiIgrac);
bool napraviPotez(char polje[3][3], int x, int y, char igracIksOksZnak);

#endif //PROGRAMIRANJE_PROJEKT_IKS_OKS_H
